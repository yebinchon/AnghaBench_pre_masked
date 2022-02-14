
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty {int t_state; TYPE_2__* t_sc; } ;
struct TYPE_5__ {int chan; TYPE_1__* board; } ;
typedef TYPE_2__ drv_t ;
typedef int bdrv_t ;
struct TYPE_4__ {int * sys; } ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6 (struct tty *VAR_1, int VAR_2)
{
 drv_t *VAR_3;
 bdrv_t *VAR_4;
 int VAR_5;

 VAR_3 = VAR_1->t_sc;
 VAR_4 = VAR_3->board->sys;

 VAR_5 = FUNC_4 ();
 FUNC_1 (VAR_4);
 if (VAR_1->t_state & VAR_0) {

  FUNC_0 (VAR_3, ("cx_stop\n"));
  FUNC_3 (VAR_3->chan, 0);
 }
 FUNC_2 (VAR_4);
 FUNC_5 (VAR_5);
}
