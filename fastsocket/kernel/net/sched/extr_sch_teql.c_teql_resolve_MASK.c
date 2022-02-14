
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct netdev_queue {int * qdisc; } ;
struct net_device {int * header_ops; } ;
struct TYPE_2__ {int * neighbour; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct sk_buff*,struct net_device*) ;
 struct netdev_queue* FUNC_1 (struct net_device*,int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_3(struct sk_buff *VAR_2,
          struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 struct netdev_queue *VAR_5 = FUNC_1(VAR_4, 0);
 if (VAR_5->qdisc == &VAR_1)
  return -VAR_0;

 if (VAR_4->header_ops == ((void*)0) ||
     FUNC_2(VAR_2) == ((void*)0) ||
     FUNC_2(VAR_2)->neighbour == ((void*)0))
  return 0;
 return FUNC_0(VAR_2, VAR_3, VAR_4);
}
