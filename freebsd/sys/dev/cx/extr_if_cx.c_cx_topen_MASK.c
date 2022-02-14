
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tty {TYPE_2__* t_sc; } ;
struct cdev {int dummy; } ;
struct TYPE_9__ {int open_dev; TYPE_3__* chan; int cd; TYPE_1__* board; } ;
typedef TYPE_2__ drv_t ;
typedef int bdrv_t ;
struct TYPE_10__ {scalar_t__ mode; } ;
struct TYPE_8__ {int * sys; } ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_7 (struct tty *VAR_2, struct cdev *VAR_3)
{
 bdrv_t *VAR_4;
 drv_t *VAR_5;

 VAR_5 = VAR_2->t_sc;
 FUNC_0 (VAR_5, ("cx_open (serial)\n"));

 VAR_4 = VAR_5->board->sys;

 if (VAR_5->chan->mode != VAR_1)
  return (VAR_0);

 VAR_5->open_dev |= 0x2;
 FUNC_1 (VAR_4);
 FUNC_6 (VAR_5->chan, 0, 0);
 FUNC_4 (VAR_5->chan, 1);
 FUNC_5 (VAR_5->chan, 1);
 VAR_5->cd = FUNC_3 (VAR_5->chan);
 FUNC_2 (VAR_4);

 FUNC_0 (VAR_5, ("cx_open done\n"));

 return 0;
}
