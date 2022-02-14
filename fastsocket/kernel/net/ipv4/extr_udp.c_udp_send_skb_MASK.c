
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {scalar_t__ check; int len; int dest; int source; } ;
struct sock {scalar_t__ sk_no_check; int sk_protocol; } ;
struct sk_buff {int len; scalar_t__ ip_summed; struct sock* sk; } ;
struct rtable {int rt_src; } ;
struct inet_sock {int recverr; int sport; } ;
typedef int __wsum ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sock*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ,int ,int,int ,int ) ;
 int FUNC_3 (int) ;
 struct inet_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sk_buff*,int ,int ) ;
 int FUNC_10 (struct sk_buff*) ;
 struct udphdr* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_7, __be32 VAR_8, __be32 VAR_9)
{
 struct sock *VAR_10 = VAR_7->sk;
 struct inet_sock *VAR_11 = FUNC_4(VAR_10);
 struct udphdr *VAR_12;
 struct rtable *VAR_13 = (struct rtable *)FUNC_6(VAR_7);
 int VAR_14 = 0;
 int VAR_15 = FUNC_0(VAR_10);
 int VAR_16 = FUNC_7(VAR_7);
 int VAR_17 = VAR_7->len - VAR_16;
 __wsum VAR_18 = 0;




 VAR_12 = FUNC_11(VAR_7);
 VAR_12->source = VAR_11->sport;
 VAR_12->dest = VAR_9;
 VAR_12->len = FUNC_3(VAR_17);
 VAR_12->check = 0;

 if (VAR_15)
  VAR_18 = FUNC_12(VAR_7);

 else if (VAR_10->sk_no_check == VAR_4) {

  VAR_7->ip_summed = VAR_0;
  goto send;

 } else if (VAR_7->ip_summed == VAR_1) {

  FUNC_9(VAR_7, VAR_13->rt_src, VAR_8);
  goto send;

 } else
  VAR_18 = FUNC_10(VAR_7);


 VAR_12->check = FUNC_2(VAR_13->rt_src, VAR_8, VAR_17,
          VAR_10->sk_protocol, VAR_18);
 if (VAR_12->check == 0)
  VAR_12->check = VAR_2;

send:
 VAR_14 = FUNC_5(VAR_7);
 if (VAR_14) {
  if (VAR_14 == -VAR_3 && !VAR_11->recverr) {
   FUNC_1(FUNC_8(VAR_10),
        VAR_6, VAR_15);
   VAR_14 = 0;
  }
 } else
  FUNC_1(FUNC_8(VAR_10),
       VAR_5, VAR_15);
 return VAR_14;
}
