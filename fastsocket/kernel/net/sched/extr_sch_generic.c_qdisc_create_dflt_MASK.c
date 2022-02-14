
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
struct Qdisc_ops {scalar_t__ (* init ) (struct Qdisc*,int *) ;} ;
struct Qdisc {unsigned int parent; } ;


 scalar_t__ FUNC_0 (struct Qdisc*) ;
 struct Qdisc* FUNC_1 (struct netdev_queue*,struct Qdisc_ops*) ;
 int FUNC_2 (struct Qdisc*) ;
 scalar_t__ FUNC_3 (struct Qdisc*,int *) ;

struct Qdisc * FUNC_4(struct net_device *VAR_0,
     struct netdev_queue *VAR_1,
     struct Qdisc_ops *VAR_2,
     unsigned int VAR_3)
{
 struct Qdisc *VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (FUNC_0(VAR_4))
  goto errout;
 VAR_4->parent = VAR_3;

 if (!VAR_2->init || VAR_2->init(VAR_4, ((void*)0)) == 0)
  return VAR_4;

 FUNC_2(VAR_4);
errout:
 return ((void*)0);
}
