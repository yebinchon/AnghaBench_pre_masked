
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adapter {int media; int ifp_lock; TYPE_1__* ifp; } ;
struct TYPE_2__ {int * if_softc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

void
FUNC_5(struct adapter *VAR_1)
{

 FUNC_3(&VAR_0);
 if (VAR_1->ifp != ((void*)0)) {
  FUNC_1(&VAR_1->ifp_lock);
  VAR_1->ifp->if_softc = ((void*)0);
  VAR_1->ifp = ((void*)0);
  FUNC_2(&VAR_1->ifp_lock);
 }
 FUNC_0(&VAR_1->media);
 FUNC_4(&VAR_0);
}
