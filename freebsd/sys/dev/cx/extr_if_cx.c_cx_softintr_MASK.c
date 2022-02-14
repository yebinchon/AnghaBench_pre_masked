
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ end; scalar_t__ beg; } ;
struct TYPE_16__ {int intr_action; TYPE_5__* tty; TYPE_4__ aqueue; TYPE_2__* board; TYPE_1__* chan; } ;
typedef TYPE_3__ drv_t ;
typedef int bdrv_t ;
typedef TYPE_4__ async_q ;
struct TYPE_19__ {scalar_t__ c_cc; } ;
struct TYPE_18__ {int t_state; scalar_t__ t_ihiwat; int t_cflag; int t_iflag; int t_rawcc; scalar_t__* t_cc; scalar_t__ t_line; int t_lflag; TYPE_9__ t_rawq; int t_dev; } ;
struct TYPE_15__ {int * sys; } ;
struct TYPE_14__ {scalar_t__ type; scalar_t__ mode; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 TYPE_3__** VAR_16 ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int,TYPE_9__*) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*,int) ;
 int FUNC_11 (TYPE_5__*) ;

void FUNC_12 (void *VAR_17)
{
 drv_t *VAR_18;
 bdrv_t *VAR_19;
 async_q *VAR_20;
 int VAR_21, VAR_22, VAR_23, VAR_24;
 while (VAR_6) {
  VAR_6 = 0;
  for (VAR_21=0; VAR_21<VAR_9*VAR_8; ++VAR_21) {
   VAR_18 = VAR_16 [VAR_21];
   if (!VAR_18 || !VAR_18->chan || VAR_18->chan->type == VAR_13
       || VAR_18->chan->mode != VAR_7 || !VAR_18->tty
       || !VAR_18->tty->t_dev)
    continue;
   VAR_19 = VAR_18->board->sys;
   VAR_22 = FUNC_6 ();
   FUNC_2 (VAR_19);
   if (VAR_18->intr_action & VAR_1) {
    VAR_20 = &(VAR_18->aqueue);
    if (VAR_18->tty->t_state & VAR_10) {
     VAR_24 = FUNC_0(VAR_20);
     if (VAR_18->tty->t_rawq.c_cc + VAR_24 >
      VAR_18->tty->t_ihiwat
         && (VAR_18->tty->t_cflag & VAR_0
      || VAR_18->tty->t_iflag & VAR_5)
         && !(VAR_18->tty->t_state & VAR_11))
      FUNC_9(VAR_18->tty);
     VAR_18->tty->t_rawcc += VAR_24;
     while (VAR_24>0) {
      VAR_24--;
      FUNC_1 (VAR_20, VAR_23);
      FUNC_3 (VAR_19);
      FUNC_7 (VAR_22);
      FUNC_5 (VAR_23, &VAR_18->tty->t_rawq);
      VAR_22 = FUNC_6 ();
      FUNC_2 (VAR_19);
     }
     FUNC_8(VAR_18->tty);
     if (VAR_18->tty->t_state & VAR_12
         && (VAR_18->tty->t_iflag & VAR_4
      || VAR_18->tty->t_cc[VAR_14] ==
      VAR_18->tty->t_cc[VAR_15])) {
      VAR_18->tty->t_state &= ~VAR_12;
      VAR_18->tty->t_lflag &= ~VAR_3;
      VAR_18->intr_action |= VAR_2;
     }
    } else {
     while (VAR_20->end != VAR_20->beg) {
      FUNC_1 (VAR_20, VAR_23);
      FUNC_3 (VAR_19);
      FUNC_7 (VAR_22);
      FUNC_10 (VAR_18->tty, VAR_23);
      VAR_22 = FUNC_6 ();
      FUNC_2 (VAR_19);
     }
    }
    VAR_18->intr_action &= ~VAR_1;
   }
   FUNC_7 (VAR_22);
   FUNC_3 (VAR_19);

   VAR_22 = FUNC_6 ();
   FUNC_2 (VAR_19);
   if (VAR_18->intr_action & VAR_2) {
    if (VAR_18->tty->t_line)
     FUNC_11 (VAR_18->tty);
    else
     FUNC_4 (VAR_18->tty);
    VAR_18->intr_action &= ~VAR_2;
   }
   FUNC_3 (VAR_19);
   FUNC_7 (VAR_22);

  }
 }
}
