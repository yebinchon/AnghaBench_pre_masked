
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inet6_ifaddr {scalar_t__ probes; int flags; int addr; struct inet6_dev* idev; int lock; } ;
struct inet6_dev {int dev; int lock; TYPE_1__* nd_parms; scalar_t__ dead; } ;
struct in6_addr {int dummy; } ;
struct TYPE_2__ {int retrans_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct in6_addr*) ;
 int FUNC_1 (struct inet6_ifaddr*) ;
 scalar_t__ FUNC_2 (struct inet6_ifaddr*) ;
 int FUNC_3 (struct inet6_ifaddr*,int ,int ) ;
 int FUNC_4 (struct inet6_ifaddr*) ;
 int VAR_4 ;
 int FUNC_5 (int ,int *,int *,struct in6_addr*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(unsigned long VAR_5)
{
 struct inet6_ifaddr *VAR_6 = (struct inet6_ifaddr *) VAR_5;
 struct inet6_dev *VAR_7 = VAR_6->idev;
 struct in6_addr VAR_8;

 if (!VAR_6->probes && FUNC_2(VAR_6))
  goto out;

 FUNC_6(&VAR_7->lock);
 if (VAR_7->dead) {
  FUNC_7(&VAR_7->lock);
  goto out;
 }
 FUNC_8(&VAR_6->lock);
 if (VAR_6->probes == 0) {




  VAR_6->flags &= ~(VAR_3|VAR_2|VAR_1);
  FUNC_9(&VAR_6->lock);
  FUNC_7(&VAR_7->lock);

  FUNC_1(VAR_6);

  goto out;
 }

 VAR_6->probes--;
 FUNC_3(VAR_6, VAR_0, VAR_6->idev->nd_parms->retrans_time);
 FUNC_9(&VAR_6->lock);
 FUNC_7(&VAR_7->lock);


 FUNC_0(&VAR_6->addr, &VAR_8);
 FUNC_5(VAR_6->idev->dev, ((void*)0), &VAR_6->addr, &VAR_8, &VAR_4);
out:
 FUNC_4(VAR_6);
}
