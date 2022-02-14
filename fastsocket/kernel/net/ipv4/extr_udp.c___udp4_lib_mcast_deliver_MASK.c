
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udphdr {int source; int dest; } ;
struct udp_table {struct udp_hslot* hash; } ;
struct udp_hslot {int lock; int head; } ;
struct sock {int dummy; } ;
struct sk_buff {TYPE_1__* dev; } ;
struct net {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 struct sock* FUNC_3 (int *) ;
 struct sock* FUNC_4 (struct sock*) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 size_t FUNC_8 (struct net*,int ) ;
 int FUNC_9 (struct sock*,struct sk_buff*) ;
 struct sock* FUNC_10 (struct net*,struct sock*,int ,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_11(struct net *VAR_1, struct sk_buff *VAR_2,
        struct udphdr *VAR_3,
        __be32 VAR_4, __be32 VAR_5,
        struct udp_table *VAR_6)
{
 struct sock *VAR_7;
 struct udp_hslot *VAR_8 = &VAR_6->hash[FUNC_8(VAR_1, FUNC_2(VAR_3->dest))];
 int VAR_9;

 FUNC_6(&VAR_8->lock);
 VAR_7 = FUNC_3(&VAR_8->head);
 VAR_9 = VAR_2->dev->ifindex;
 VAR_7 = FUNC_10(VAR_1, VAR_7, VAR_3->dest, VAR_5, VAR_3->source, VAR_4, VAR_9);
 if (VAR_7) {
  struct sock *VAR_10 = ((void*)0);

  do {
   struct sk_buff *VAR_11 = VAR_2;

   VAR_10 = FUNC_10(VAR_1, FUNC_4(VAR_7), VAR_3->dest,
         VAR_5, VAR_3->source, VAR_4,
         VAR_9);
   if (VAR_10)
    VAR_11 = FUNC_5(VAR_2, VAR_0);

   if (VAR_11) {
    int VAR_12 = FUNC_9(VAR_7, VAR_11);
    if (VAR_12 > 0)


     FUNC_1(VAR_11);
   }
   VAR_7 = VAR_10;
  } while (VAR_10);
 } else
  FUNC_0(VAR_2);
 FUNC_7(&VAR_8->lock);
 return 0;
}
