
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sppp {int (* pp_down ) (struct sppp*) ;} ;
struct TYPE_6__ {TYPE_4__* ifp; } ;
typedef TYPE_1__ drv_t ;
struct TYPE_9__ {int if_flags; } ;
struct TYPE_8__ {int pp_flags; } ;
struct TYPE_7__ {TYPE_1__* if_softc; } ;


 int FUNC_0 (TYPE_1__*,char*) ;
 TYPE_3__* FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_2 (struct sppp*) ;
 int FUNC_3 (struct sppp*) ;

__attribute__((used)) static void FUNC_4 (struct sppp *VAR_2)
{
 drv_t *VAR_3 = FUNC_2(VAR_2)->if_softc;

 FUNC_0 (VAR_3, ("cx_tlf\n"));


 if (!(FUNC_1(VAR_3->ifp)->pp_flags & VAR_1) && !(VAR_3->ifp->if_flags & VAR_0))
  VAR_2->pp_down (VAR_2);
}
