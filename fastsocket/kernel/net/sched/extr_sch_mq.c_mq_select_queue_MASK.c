
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcmsg {int tcm_parent; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
struct Qdisc {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 struct netdev_queue* FUNC_1 (struct Qdisc*,unsigned int) ;
 struct netdev_queue* FUNC_2 (struct net_device*,int ) ;
 struct net_device* FUNC_3 (struct Qdisc*) ;

__attribute__((used)) static struct netdev_queue *FUNC_4(struct Qdisc *VAR_0,
         struct tcmsg *VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_1->tcm_parent);
 struct netdev_queue *VAR_3 = FUNC_1(VAR_0, VAR_2);

 if (!VAR_3) {
  struct net_device *VAR_4 = FUNC_3(VAR_0);

  return FUNC_2(VAR_4, 0);
 }
 return VAR_3;
}
