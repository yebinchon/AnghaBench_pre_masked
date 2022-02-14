
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct udphdr {scalar_t__ check; int len; int dest; int source; } ;
struct udp_sock {scalar_t__ pending; scalar_t__ len; } ;
struct sock {int sk_write_queue; } ;
struct sk_buff {scalar_t__ ip_summed; } ;
struct flowi {int proto; int fl6_dst; int fl6_src; int fl_ip_dport; int fl_ip_sport; } ;
struct TYPE_3__ {struct flowi fl; } ;
struct inet_sock {TYPE_1__ cork; } ;
typedef int __wsum ;
struct TYPE_4__ {int recverr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int *,int *,scalar_t__,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_2__* FUNC_4 (struct sock*) ;
 struct inet_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 struct sk_buff* FUNC_7 (int *) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,struct sk_buff*,int *,int *,scalar_t__) ;
 int FUNC_10 (struct sock*,struct sk_buff*) ;
 struct udphdr* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sock*) ;
 struct udp_sock* FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_15(struct sock *VAR_6)
{
 struct sk_buff *VAR_7;
 struct udphdr *VAR_8;
 struct udp_sock *VAR_9 = FUNC_13(VAR_6);
 struct inet_sock *VAR_10 = FUNC_5(VAR_6);
 struct flowi *VAR_11;
 int VAR_12 = 0;
 int VAR_13 = FUNC_0(VAR_6);
 __wsum VAR_14 = 0;

 if (VAR_9->pending == VAR_0)
  return FUNC_12(VAR_6);

 VAR_11 = &VAR_10->cork.fl;


 if ((VAR_7 = FUNC_7(&VAR_6->sk_write_queue)) == ((void*)0))
  goto out;




 VAR_8 = FUNC_11(VAR_7);
 VAR_8->source = VAR_11->fl_ip_sport;
 VAR_8->dest = VAR_11->fl_ip_dport;
 VAR_8->len = FUNC_3(VAR_9->len);
 VAR_8->check = 0;

 if (VAR_13)
  VAR_14 = FUNC_14(VAR_6, VAR_7);
 else if (VAR_7->ip_summed == VAR_1) {
  FUNC_9(VAR_6, VAR_7, &VAR_11->fl6_src, &VAR_11->fl6_dst,
         VAR_9->len);
  goto send;
 } else
  VAR_14 = FUNC_10(VAR_6, VAR_7);


 VAR_8->check = FUNC_2(&VAR_11->fl6_src, &VAR_11->fl6_dst,
        VAR_9->len, VAR_11->proto, VAR_14 );
 if (VAR_8->check == 0)
  VAR_8->check = VAR_2;

send:
 VAR_12 = FUNC_6(VAR_6);
 if (VAR_12) {
  if (VAR_12 == -VAR_3 && !FUNC_4(VAR_6)->recverr) {
   FUNC_1(FUNC_8(VAR_6),
         VAR_5, VAR_13);
   VAR_12 = 0;
  }
 } else
  FUNC_1(FUNC_8(VAR_6),
        VAR_4, VAR_13);
out:
 VAR_9->len = 0;
 VAR_9->pending = 0;
 return VAR_12;
}
