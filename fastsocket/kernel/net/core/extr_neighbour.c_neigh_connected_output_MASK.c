
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int protocol; } ;
struct net_device {int dummy; } ;
struct neighbour {TYPE_1__* ops; int lock; int ha; struct net_device* dev; } ;
struct dst_entry {struct neighbour* neighbour; } ;
struct TYPE_2__ {int (* queue_xmit ) (struct sk_buff*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff*,struct net_device*,int ,int ,int *,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct dst_entry* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;

int FUNC_9(struct sk_buff *VAR_1)
{
 int VAR_2;
 struct dst_entry *VAR_3 = FUNC_6(VAR_1);
 struct neighbour *VAR_4 = VAR_3->neighbour;
 struct net_device *VAR_5 = VAR_4->dev;

 FUNC_0(VAR_1, FUNC_7(VAR_1));

 FUNC_4(&VAR_4->lock);
 VAR_2 = FUNC_1(VAR_1, VAR_5, FUNC_3(VAR_1->protocol),
         VAR_4->ha, ((void*)0), VAR_1->len);
 FUNC_5(&VAR_4->lock);
 if (VAR_2 >= 0)
  VAR_2 = VAR_4->ops->queue_xmit(VAR_1);
 else {
  VAR_2 = -VAR_0;
  FUNC_2(VAR_1);
 }
 return VAR_2;
}
