
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {int source; int dest; } ;
struct udp_table {struct udp_hslot* hash; } ;
struct udp_hslot {int lock; int head; } ;
struct sock {int sk_rcvbuf; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct sock*,struct sk_buff*,int ) ;
 struct sock* FUNC_6 (int *) ;
 struct sock* FUNC_7 (struct sock*) ;
 scalar_t__ FUNC_8 (struct sock*,struct sk_buff*,int ) ;
 struct sk_buff* FUNC_9 (struct sk_buff*,int ) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 size_t FUNC_13 (struct net*,int ) ;
 struct udphdr* FUNC_14 (struct sk_buff*) ;
 struct sock* FUNC_15 (struct net*,struct sock*,int ,struct in6_addr*,int ,struct in6_addr*,int) ;
 int FUNC_16 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_17(struct net *VAR_1, struct sk_buff *VAR_2,
  struct in6_addr *VAR_3, struct in6_addr *VAR_4,
  struct udp_table *VAR_5)
{
 struct sock *VAR_6, *VAR_7;
 const struct udphdr *VAR_8 = FUNC_14(VAR_2);
 struct udp_hslot *VAR_9 = &VAR_5->hash[FUNC_13(VAR_1, FUNC_4(VAR_8->dest))];
 int VAR_10;

 FUNC_11(&VAR_9->lock);
 VAR_6 = FUNC_6(&VAR_9->head);
 VAR_10 = FUNC_2(VAR_2);
 VAR_6 = FUNC_15(VAR_1, VAR_6, VAR_8->dest, VAR_4, VAR_8->source, VAR_3, VAR_10);
 if (!VAR_6) {
  FUNC_3(VAR_2);
  goto out;
 }

 VAR_7 = VAR_6;
 while ((VAR_7 = FUNC_15(VAR_1, FUNC_7(VAR_7), VAR_8->dest, VAR_4,
     VAR_8->source, VAR_3, VAR_10))) {
  struct sk_buff *VAR_11 = FUNC_9(VAR_2, VAR_0);
  if (VAR_11) {
   FUNC_0(VAR_7);
   if (!FUNC_10(VAR_7))
    FUNC_16(VAR_7, VAR_11);
   else if (FUNC_5(VAR_7, VAR_11, VAR_7->sk_rcvbuf))
    FUNC_3(VAR_11);
   FUNC_1(VAR_7);
  }
 }
 if (FUNC_8(VAR_6, VAR_2, VAR_6->sk_rcvbuf)) {
  FUNC_3(VAR_2);
  goto out;
 }
 FUNC_0(VAR_6);
 if (!FUNC_10(VAR_6))
  FUNC_16(VAR_6, VAR_2);
 else if (FUNC_5(VAR_6, VAR_2, VAR_6->sk_rcvbuf))
  FUNC_3(VAR_2);
 FUNC_1(VAR_6);
out:
 FUNC_12(&VAR_9->lock);
 return 0;
}
