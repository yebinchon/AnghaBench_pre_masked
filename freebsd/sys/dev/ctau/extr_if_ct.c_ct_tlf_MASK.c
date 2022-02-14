
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sppp {int pp_flags; int (* pp_down ) (struct sppp*) ;} ;
struct TYPE_6__ {TYPE_1__* ifp; } ;
typedef TYPE_2__ drv_t ;
struct TYPE_7__ {TYPE_2__* if_softc; } ;
struct TYPE_5__ {int if_flags; } ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (struct sppp*) ;
 int FUNC_2 (struct sppp*) ;

__attribute__((used)) static void FUNC_3 (struct sppp *VAR_2)
{
 drv_t *VAR_3 = FUNC_1(VAR_2)->if_softc;

 FUNC_0 (VAR_3, ("ct_tlf\n"));


 if (!(VAR_2->pp_flags & VAR_1) && !(VAR_3->ifp->if_flags & VAR_0))
  VAR_2->pp_down (VAR_2);
}
