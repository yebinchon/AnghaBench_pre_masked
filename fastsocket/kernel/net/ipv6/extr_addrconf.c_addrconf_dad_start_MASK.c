
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int flags; } ;
struct TYPE_4__ {int * s6_addr32; } ;
struct inet6_ifaddr {scalar_t__ dead; int flags; int lock; int rt; TYPE_2__ addr; struct inet6_dev* idev; } ;
struct TYPE_3__ {int accept_dad; } ;
struct inet6_dev {int if_flags; int lock; TYPE_1__ cnf; struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct inet6_ifaddr*) ;
 int FUNC_1 (struct inet6_ifaddr*) ;
 int FUNC_2 (struct inet6_ifaddr*,int ) ;
 int FUNC_3 (struct net_device*,TYPE_2__*) ;
 int FUNC_4 (struct inet6_ifaddr*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct inet6_ifaddr *VAR_8, u32 VAR_9)
{
 struct inet6_dev *VAR_10 = VAR_8->idev;
 struct net_device *VAR_11 = VAR_10->dev;

 FUNC_3(VAR_11, &VAR_8->addr);

 FUNC_6(VAR_8->addr.s6_addr32[3]);

 FUNC_7(&VAR_10->lock);
 FUNC_9(&VAR_8->lock);
 if (VAR_8->dead == VAR_7)
  goto out;

 if (VAR_11->flags&(VAR_5|VAR_4) ||
     VAR_10->cnf.accept_dad < 1 ||
     !(VAR_8->flags&VAR_3) ||
     VAR_8->flags & VAR_1) {
  VAR_8->flags &= ~(VAR_3|VAR_2|VAR_0);
  FUNC_10(&VAR_8->lock);
  FUNC_8(&VAR_10->lock);

  FUNC_0(VAR_8);
  return;
 }

 if (!(VAR_10->if_flags & VAR_6)) {
  FUNC_10(&VAR_8->lock);
  FUNC_8(&VAR_10->lock);





  FUNC_4(VAR_8);
  FUNC_2(VAR_8, 0);
  return;
 }





 if(VAR_8->flags & VAR_2)
  FUNC_5(VAR_8->rt);

 FUNC_1(VAR_8);
out:
 FUNC_10(&VAR_8->lock);
 FUNC_8(&VAR_10->lock);
}
