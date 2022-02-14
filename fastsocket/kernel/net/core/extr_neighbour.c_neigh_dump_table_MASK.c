
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; int sk; } ;
struct netlink_callback {int* args; TYPE_1__* nlh; int skb; } ;
struct net {int dummy; } ;
struct neighbour {int dev; struct neighbour* next; } ;
struct neigh_table {int hash_mask; int lock; struct neighbour** hash_buckets; } ;
struct TYPE_4__ {int pid; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 TYPE_2__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct net* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct neighbour*,int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct net* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct neigh_table *VAR_2, struct sk_buff *VAR_3,
       struct netlink_callback *VAR_4)
{
 struct net * VAR_5 = FUNC_5(VAR_3->sk);
 struct neighbour *VAR_6;
 int VAR_7, VAR_8, VAR_9 = VAR_4->args[1];
 int VAR_10, VAR_11 = VAR_10 = VAR_4->args[2];

 FUNC_3(&VAR_2->lock);
 for (VAR_8 = 0; VAR_8 <= VAR_2->hash_mask; VAR_8++) {
  if (VAR_8 < VAR_9)
   continue;
  if (VAR_8 > VAR_9)
   VAR_11 = 0;
  for (VAR_6 = VAR_2->hash_buckets[VAR_8], VAR_10 = 0; VAR_6; VAR_6 = VAR_6->next) {
   if (FUNC_1(VAR_6->dev) != VAR_5)
    continue;
   if (VAR_10 < VAR_11)
    goto next;
   if (FUNC_2(VAR_3, VAR_6, FUNC_0(VAR_4->skb).pid,
         VAR_4->nlh->nlmsg_seq,
         VAR_1,
         VAR_0) <= 0) {
    FUNC_4(&VAR_2->lock);
    VAR_7 = -1;
    goto out;
   }
  next:
   VAR_10++;
  }
 }
 FUNC_4(&VAR_2->lock);
 VAR_7 = VAR_3->len;
out:
 VAR_4->args[1] = VAR_8;
 VAR_4->args[2] = VAR_10;
 return VAR_7;
}
