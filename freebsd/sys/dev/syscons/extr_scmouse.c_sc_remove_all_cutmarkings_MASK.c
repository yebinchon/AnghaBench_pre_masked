
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int scr_stat ;
struct TYPE_3__ {int vtys; int * dev; } ;
typedef TYPE_1__ sc_softc_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void
FUNC_2(sc_softc_t *VAR_0)
{
    scr_stat *VAR_1;
    int VAR_2;


    for (VAR_2 = 0; VAR_2 < VAR_0->vtys; ++VAR_2) {
 VAR_1 = FUNC_0(VAR_0->dev[VAR_2]);
 if (VAR_1 == ((void*)0))
     continue;
 FUNC_1(VAR_1);
    }
}
