
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_adapter {scalar_t__ active_fds; int na_flags; struct ifnet* ifp; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct netmap_adapter*) ;

void
FUNC_2(struct netmap_adapter *VAR_1)
{
 struct ifnet *VAR_2 = VAR_1->ifp;



 if (VAR_1->active_fds > 0) {
  return;
 }

 FUNC_1(VAR_1);
 FUNC_0(VAR_2);

 VAR_1->na_flags &= ~VAR_0;
}
