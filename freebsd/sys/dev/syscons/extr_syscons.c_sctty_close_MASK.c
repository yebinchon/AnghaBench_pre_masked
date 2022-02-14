
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct tty {int dummy; } ;
struct TYPE_10__ {void* mode; } ;
struct TYPE_12__ {int kbd_mode; TYPE_2__* sc; TYPE_1__ smode; int * proc; scalar_t__ pid; int ysize; int scr; int vtb; } ;
typedef TYPE_3__ scr_stat ;
typedef int caddr_t ;
struct TYPE_11__ {scalar_t__ unit; int kbd; TYPE_3__* cur_scp; } ;
typedef int * SC_STAT ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct tty*) ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ,int*) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 TYPE_3__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_8 (struct tty*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;

__attribute__((used)) static void
FUNC_11(struct tty *VAR_9)
{
    scr_stat *VAR_10;
    int VAR_11;

    if (FUNC_1(VAR_9) != VAR_3) {
 VAR_10 = FUNC_8(VAR_9);

 FUNC_0(5, ("sc%d: scclose(), ", VAR_10->sc->unit));
 VAR_11 = FUNC_10();
 if ((VAR_10 == VAR_10->sc->cur_scp) && (VAR_10->sc->unit == VAR_7))
     FUNC_2(VAR_8, VAR_4);
 if (FUNC_4(VAR_10, VAR_4, &VAR_11) == 0)
     FUNC_0(5, ("reset WAIT_REL, "));
 if (FUNC_3(VAR_10) == 0)
     FUNC_0(5, ("reset WAIT_ACQ, "));
 VAR_10->pid = 0;
 VAR_10->proc = ((void*)0);
 VAR_10->smode.mode = VAR_5;

 VAR_10->kbd_mode = VAR_1;
 if (VAR_10 == VAR_10->sc->cur_scp)
     (void)FUNC_6(VAR_10->sc->kbd, VAR_0, (caddr_t)&VAR_10->kbd_mode);
 FUNC_0(5, ("done.\n"));
    }
}
