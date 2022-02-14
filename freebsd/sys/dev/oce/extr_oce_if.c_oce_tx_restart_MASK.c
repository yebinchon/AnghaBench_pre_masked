
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct oce_wq {int txtask; int br; } ;
struct TYPE_5__ {int if_drv_flags; int if_snd; } ;
struct TYPE_4__ {TYPE_3__* ifp; } ;
typedef TYPE_1__* POCE_SOFTC ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(POCE_SOFTC VAR_2, struct oce_wq *VAR_3)
{

 if ((VAR_2->ifp->if_drv_flags & VAR_0) != VAR_0)
  return;




 if (!FUNC_0(&VAR_2->ifp->if_snd))

  FUNC_2(VAR_1, &VAR_3->txtask);

}
