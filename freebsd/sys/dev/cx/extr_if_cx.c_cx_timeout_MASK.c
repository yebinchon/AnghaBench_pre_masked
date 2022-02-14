
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int atimeout; TYPE_2__* board; int intr_action; TYPE_1__* tty; } ;
typedef TYPE_3__ drv_t ;
typedef int bdrv_t ;
struct TYPE_7__ {scalar_t__ sys; } ;
struct TYPE_6__ {int t_state; scalar_t__ t_dev; } ;


 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int ** VAR_5 ;
 int FUNC_3 (int *,int,void (*) (void*),int ) ;
 TYPE_3__** VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_7 (void *VAR_10)
{
 drv_t *VAR_11;
 int VAR_12, VAR_13, VAR_14;

 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
  if (VAR_5[VAR_13] == ((void*)0))
   continue;
  for (VAR_14 = 0; VAR_14 < VAR_2; ++VAR_14) {
   VAR_11 = VAR_6[VAR_13 * VAR_2 + VAR_14];
   if (! VAR_11)
    continue;
   VAR_12 = FUNC_4 ();
   FUNC_1 ((bdrv_t *)VAR_11->board->sys);
   if (VAR_11->atimeout == 1 && VAR_11->tty && VAR_11->tty->t_state & VAR_4) {
    VAR_11->tty->t_state &= ~VAR_4;
    if (VAR_11->tty->t_dev) {
     VAR_11->intr_action |= VAR_0;
     VAR_1 = 1;
     FUNC_6 (VAR_7, 0);
    }
    FUNC_0 (VAR_11, ("cx_timeout\n"));
   }
   if (VAR_11->atimeout)
    VAR_11->atimeout--;
   FUNC_2 ((bdrv_t *)VAR_11->board->sys);
   FUNC_5 (VAR_12);
  }
 }
 FUNC_3 (&VAR_9, VAR_8*5, FUNC_7, 0);
}
