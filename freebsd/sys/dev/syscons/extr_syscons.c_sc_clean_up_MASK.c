
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int status; TYPE_2__* sc; } ;
typedef TYPE_1__ scr_stat ;
struct TYPE_7__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;

int
FUNC_4(scr_stat *VAR_2)
{




    if (VAR_2->sc->flags & VAR_1) {
 FUNC_2();




    }
    VAR_2->status |= VAR_0;
    FUNC_1(VAR_2);
    FUNC_0(VAR_2);
    return 0;
}
