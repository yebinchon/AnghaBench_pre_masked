
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ifnet {int if_drv_flags; } ;
struct TYPE_3__ {int driver_mtx; struct ifnet* ifp; } ;
typedef TYPE_1__ mxge_softc_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 mxge_softc_t *VAR_2 = VAR_1;
 struct ifnet *VAR_3 = VAR_2->ifp;


 FUNC_0(&VAR_2->driver_mtx);
 if ((VAR_3->if_drv_flags & VAR_0) == 0)
  (void) FUNC_2(VAR_2);
 FUNC_1(&VAR_2->driver_mtx);
}
