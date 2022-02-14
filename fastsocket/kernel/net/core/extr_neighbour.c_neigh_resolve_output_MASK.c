
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; int protocol; } ;
struct net_device {TYPE_1__* header_ops; } ;
struct neighbour {TYPE_3__* ops; int lock; int ha; struct net_device* dev; } ;
struct dst_entry {struct neighbour* neighbour; TYPE_2__* ops; int hh; } ;
struct TYPE_6__ {int (* queue_xmit ) (struct sk_buff*) ;} ;
struct TYPE_5__ {int protocol; } ;
struct TYPE_4__ {scalar_t__ cache; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct dst_entry*,struct neighbour*) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*,struct net_device*,int ,int ,int *,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct neighbour*,struct sk_buff*) ;
 int FUNC_5 (struct neighbour*,struct dst_entry*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct dst_entry* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct sk_buff *VAR_1)
{
 struct dst_entry *VAR_2 = FUNC_9(VAR_1);
 struct neighbour *VAR_3;
 int VAR_4 = 0;

 if (!VAR_2 || !(VAR_3 = VAR_2->neighbour))
  goto discard;

 FUNC_1(VAR_1, FUNC_10(VAR_1));

 if (!FUNC_4(VAR_3, VAR_1)) {
  int VAR_5;
  struct net_device *VAR_6 = VAR_3->dev;
  if (VAR_6->header_ops->cache && !VAR_2->hh) {
   FUNC_12(&VAR_3->lock);
   if (!VAR_2->hh)
    FUNC_5(VAR_3, VAR_2, VAR_2->ops->protocol);
   VAR_5 = FUNC_2(VAR_1, VAR_6, FUNC_6(VAR_1->protocol),
           VAR_3->ha, ((void*)0), VAR_1->len);
   FUNC_13(&VAR_3->lock);
  } else {
   FUNC_7(&VAR_3->lock);
   VAR_5 = FUNC_2(VAR_1, VAR_6, FUNC_6(VAR_1->protocol),
           VAR_3->ha, ((void*)0), VAR_1->len);
   FUNC_8(&VAR_3->lock);
  }
  if (VAR_5 >= 0)
   VAR_4 = VAR_3->ops->queue_xmit(VAR_1);
  else
   goto out_kfree_skb;
 }
out:
 return VAR_4;
discard:
 FUNC_0("neigh_resolve_output: dst=%p neigh=%p\n",
        VAR_2, VAR_2 ? VAR_2->neighbour : ((void*)0));
out_kfree_skb:
 VAR_4 = -VAR_0;
 FUNC_3(VAR_1);
 goto out;
}
