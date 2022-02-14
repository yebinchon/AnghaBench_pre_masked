
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sc_cnstate {void* kbd_opened; void* scr_opened; } ;
struct TYPE_7__ {scalar_t__ kbd_open_level; int kbd; TYPE_1__* cur_scp; } ;
typedef TYPE_2__ sc_softc_t ;
typedef int caddr_t ;
struct TYPE_6__ {int kbd_mode; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (TYPE_2__*,struct sc_cnstate*) ;
 int FUNC_4 (TYPE_2__*,struct sc_cnstate*) ;

__attribute__((used)) static void
FUNC_5(sc_softc_t *VAR_2, struct sc_cnstate *VAR_3)
{
    VAR_3->scr_opened = VAR_0;
    FUNC_4(VAR_2, VAR_3);

    if (!VAR_3->kbd_opened)
 return;


    FUNC_2(VAR_2->kbd, VAR_0);
    if (--VAR_2->kbd_open_level == 0)
 (void)FUNC_1(VAR_2->kbd, VAR_1, (caddr_t)&VAR_2->cur_scp->kbd_mode);

    FUNC_0(VAR_2->kbd);
    VAR_3->kbd_opened = VAR_0;
    FUNC_3(VAR_2, VAR_3);
}
