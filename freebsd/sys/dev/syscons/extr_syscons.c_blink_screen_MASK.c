
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct tty {int dummy; } ;
struct TYPE_10__ {int xsize; int ysize; TYPE_4__* sc; TYPE_1__* rndr; int index; } ;
typedef TYPE_2__ scr_stat ;
struct TYPE_11__ {int blink_in_progress; int cblink; scalar_t__ delayed_next_scr; } ;
struct TYPE_9__ {int (* draw ) (TYPE_2__*,int ,int,int) ;} ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 struct tty* FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int *,int,int ,void (*) (void*),TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_4__*,scalar_t__) ;
 int FUNC_6 (struct tty*) ;
 int FUNC_7 (TYPE_2__*,int ,int,int) ;
 scalar_t__ FUNC_8 (struct tty*) ;

__attribute__((used)) static void
FUNC_9(void *VAR_1)
{
    scr_stat *VAR_2 = VAR_1;
    struct tty *VAR_3;

    if (FUNC_1(VAR_2) || (VAR_2->sc->blink_in_progress <= 1)) {
 VAR_2->sc->blink_in_progress = 0;
     FUNC_4(VAR_2);
 VAR_3 = FUNC_2(VAR_2->sc, VAR_2->index);
 if (FUNC_8(VAR_3))
     FUNC_6(VAR_3);
 if (VAR_2->sc->delayed_next_scr)
     FUNC_5(VAR_2->sc, VAR_2->sc->delayed_next_scr - 1);
    }
    else {
 (*VAR_2->rndr->draw)(VAR_2, 0, VAR_2->xsize*VAR_2->ysize,
      VAR_2->sc->blink_in_progress & 1);
 VAR_2->sc->blink_in_progress--;
 FUNC_3(&VAR_2->sc->cblink, VAR_0 / 15, 0,
     FUNC_9, VAR_2, FUNC_0(0));
    }
}
