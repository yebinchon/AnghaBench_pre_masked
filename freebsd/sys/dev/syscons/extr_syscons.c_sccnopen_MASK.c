
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct sc_cnstate {void* scr_opened; int mtx_locked; int kdb_locked; void* kbd_opened; void* kbd_locked; } ;
struct TYPE_13__ {TYPE_2__* cur_scp; int * kbd; int kbd_open_level; } ;
typedef TYPE_4__ sc_softc_t ;
typedef int caddr_t ;
struct TYPE_12__ {scalar_t__ mode; } ;
struct TYPE_14__ {scalar_t__ index; TYPE_3__ smode; } ;
struct TYPE_10__ {scalar_t__ mode; } ;
struct TYPE_11__ {scalar_t__ index; TYPE_1__ smode; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,void*) ;
 TYPE_9__* VAR_6 ;
 int FUNC_3 (TYPE_4__*,scalar_t__) ;
 int FUNC_4 (TYPE_4__*,struct sc_cnstate*) ;
 int FUNC_5 (TYPE_4__*,struct sc_cnstate*) ;

__attribute__((used)) static void
FUNC_6(sc_softc_t *VAR_7, struct sc_cnstate *VAR_8, int VAR_9)
{
    int VAR_10;



    VAR_8->kbd_opened = VAR_0;
    VAR_8->scr_opened = VAR_0;
    VAR_8->kbd_locked = VAR_0;


    if (!(VAR_9 & 1) || VAR_7->kbd == ((void*)0))
 goto over_keyboard;

    FUNC_4(VAR_7, VAR_8);





    FUNC_0(VAR_7->kbd);


    VAR_10 = VAR_2;
    (void)FUNC_1(VAR_7->kbd, VAR_1, (caddr_t)&VAR_10);
    VAR_7->kbd_open_level++;
    FUNC_2(VAR_7->kbd, VAR_3);

    VAR_8->kbd_opened = VAR_3;
over_keyboard: ;


    FUNC_5(VAR_7, VAR_8);
    if (!VAR_8->kdb_locked && !VAR_8->mtx_locked)
 return;
    VAR_8->scr_opened = VAR_3;


    if (!(VAR_9 & 2))
 return;


    if (!VAR_5 &&
 VAR_7->cur_scp->index != VAR_6->index &&
 VAR_7->cur_scp->smode.mode == VAR_4 &&
 VAR_6->smode.mode == VAR_4)
     FUNC_3(VAR_7, VAR_6->index);
}
