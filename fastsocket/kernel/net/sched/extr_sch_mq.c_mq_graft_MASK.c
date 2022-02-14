
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {int dummy; } ;
struct net_device {int flags; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct Qdisc* FUNC_2 (struct netdev_queue*,struct Qdisc*) ;
 struct netdev_queue* FUNC_3 (struct Qdisc*,unsigned long) ;
 struct net_device* FUNC_4 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_5(struct Qdisc *VAR_1, unsigned long VAR_2, struct Qdisc *VAR_3,
      struct Qdisc **VAR_4)
{
 struct netdev_queue *VAR_5 = FUNC_3(VAR_1, VAR_2);
 struct net_device *VAR_6 = FUNC_4(VAR_1);

 if (VAR_6->flags & VAR_0)
  FUNC_1(VAR_6);

 *VAR_4 = FUNC_2(VAR_5, VAR_3);

 if (VAR_6->flags & VAR_0)
  FUNC_0(VAR_6);
 return 0;
}
