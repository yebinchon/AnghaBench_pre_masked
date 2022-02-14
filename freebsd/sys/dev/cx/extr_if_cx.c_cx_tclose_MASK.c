
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty {TYPE_2__* t_sc; } ;
struct TYPE_5__ {int open_dev; int chan; TYPE_1__* board; } ;
typedef TYPE_2__ drv_t ;
typedef int bdrv_t ;
struct TYPE_4__ {int * sys; } ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4 (struct tty *VAR_0)
{
 drv_t *VAR_1;
 bdrv_t *VAR_2;

 VAR_1 = VAR_0->t_sc;
 FUNC_0 (VAR_1, ("cx_close\n"));
 VAR_2 = VAR_1->board->sys;
 FUNC_1 (VAR_2);


 FUNC_3 (VAR_1->chan, 0);
 FUNC_2 (VAR_2);
 VAR_1->open_dev &= ~0x2;
}
