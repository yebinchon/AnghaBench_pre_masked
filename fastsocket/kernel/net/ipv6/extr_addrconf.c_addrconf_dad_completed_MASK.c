
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int flags; } ;
struct inet6_ifaddr {int probes; int lock; TYPE_2__* idev; int addr; } ;
struct TYPE_3__ {scalar_t__ rtr_solicits; int rtr_solicit_interval; } ;
struct TYPE_4__ {TYPE_1__ cnf; int if_flags; struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct inet6_ifaddr*,int ,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct inet6_ifaddr*) ;
 int FUNC_4 (struct net_device*,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct inet6_ifaddr *VAR_6)
{
 struct net_device * VAR_7 = VAR_6->idev->dev;





 FUNC_3(VAR_4, VAR_6);





 if (FUNC_1(VAR_6->idev) &&
     VAR_6->idev->cnf.rtr_solicits > 0 &&
     (VAR_7->flags&VAR_1) == 0 &&
     (FUNC_2(&VAR_6->addr) & VAR_3)) {





  FUNC_4(VAR_6->idev->dev, &VAR_6->addr, &VAR_5);

  FUNC_5(&VAR_6->lock);
  VAR_6->probes = 1;
  VAR_6->idev->if_flags |= VAR_2;
  FUNC_0(VAR_6, VAR_0, VAR_6->idev->cnf.rtr_solicit_interval);
  FUNC_6(&VAR_6->lock);
 }
}
