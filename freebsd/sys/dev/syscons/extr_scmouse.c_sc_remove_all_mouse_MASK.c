
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int status; } ;
typedef TYPE_1__ scr_stat ;
struct TYPE_7__ {int vtys; int * dev; } ;
typedef TYPE_2__ sc_softc_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(sc_softc_t *VAR_1)
{
    scr_stat *VAR_2;
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1->vtys; ++VAR_3) {
 VAR_2 = FUNC_0(VAR_1->dev[VAR_3]);
 if (VAR_2 == ((void*)0))
     continue;
 if (VAR_2->status & VAR_0) {
     VAR_2->status &= ~VAR_0;
     FUNC_1(VAR_2);
 }
    }
}
