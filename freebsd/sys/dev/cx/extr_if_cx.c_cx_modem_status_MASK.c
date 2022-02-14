
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int open_dev; TYPE_5__* chan; scalar_t__ running; TYPE_2__* tty; TYPE_1__* board; } ;
typedef TYPE_3__ drv_t ;
typedef int bdrv_t ;
struct TYPE_11__ {scalar_t__ mode; scalar_t__ rts; scalar_t__ dtr; } ;
struct TYPE_9__ {int t_state; } ;
struct TYPE_8__ {int * sys; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7 (drv_t *VAR_8)
{
 bdrv_t *VAR_9 = VAR_8->board->sys;
 int VAR_10 = 0, VAR_11 = FUNC_5 ();
 FUNC_0 (VAR_9);

 if ((VAR_8->chan->mode == VAR_0 && VAR_8->tty && (VAR_8->tty->t_state & VAR_7) &&
     (VAR_8->open_dev|0x2)) || (VAR_8->chan->mode != VAR_0 && VAR_8->running))
  VAR_10 = VAR_5;

 if (FUNC_4 (VAR_8->chan)) VAR_10 |= VAR_3;
 if (FUNC_2 (VAR_8->chan)) VAR_10 |= VAR_1;
 if (FUNC_3 (VAR_8->chan)) VAR_10 |= VAR_2;
 if (VAR_8->chan->dtr) VAR_10 |= VAR_4;
 if (VAR_8->chan->rts) VAR_10 |= VAR_6;
 FUNC_1 (VAR_9);
 FUNC_6 (VAR_11);
 return VAR_10;
}
