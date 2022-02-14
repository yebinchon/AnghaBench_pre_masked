
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tty {TYPE_2__* t_sc; } ;
struct TYPE_9__ {TYPE_3__* chan; TYPE_1__* board; } ;
typedef TYPE_2__ drv_t ;
typedef int bdrv_t ;
struct TYPE_10__ {scalar_t__ rts; scalar_t__ dtr; } ;
struct TYPE_8__ {int * sys; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_7 (struct tty *VAR_5, int VAR_6, int VAR_7)
{
 drv_t *VAR_8;
 bdrv_t *VAR_9;

 VAR_8 = VAR_5->t_sc;
 VAR_9 = VAR_8->board->sys;

 FUNC_0 (VAR_9);
 if (!VAR_6 && !VAR_7) {
  if (FUNC_4 (VAR_8->chan)) VAR_6 |= VAR_2;
  if (FUNC_2 (VAR_8->chan)) VAR_6 |= VAR_1;
  if (FUNC_3 (VAR_8->chan)) VAR_6 |= VAR_0;
  if (VAR_8->chan->dtr) VAR_6 |= VAR_3;
  if (VAR_8->chan->rts) VAR_6 |= VAR_4;
  FUNC_1 (VAR_9);
  return VAR_6;
 }

 if (VAR_6 & VAR_3)
  FUNC_5 (VAR_8->chan, 1);
 if (VAR_7 & VAR_3)
  FUNC_5 (VAR_8->chan, 0);
 if (VAR_6 & VAR_4)
  FUNC_6 (VAR_8->chan, 1);
 if (VAR_7 & VAR_4)
  FUNC_6 (VAR_8->chan, 0);
 FUNC_1 (VAR_9);

 return (0);
}
