
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cd; scalar_t__ tty; int * chan; TYPE_1__* board; } ;
typedef TYPE_2__ drv_t ;
typedef int cx_chan_t ;
typedef int bdrv_t ;
struct TYPE_4__ {int * sys; } ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_7 (void *VAR_0)
{
 drv_t *VAR_1 = VAR_0;
 bdrv_t *VAR_2 = VAR_1->board->sys;
 cx_chan_t *VAR_3 = VAR_1->chan;
 int VAR_4, VAR_5;

 VAR_4 = FUNC_4 ();
 FUNC_1 (VAR_2);
 VAR_5 = FUNC_3 (VAR_3);
 if (VAR_1->cd != VAR_5) {
  if (VAR_5) {
   FUNC_0 (VAR_1, ("carrier on\n"));
   VAR_1->cd = 1;
   FUNC_2 (VAR_2);
   FUNC_5 (VAR_4);
   if (VAR_1->tty)
    FUNC_6(VAR_1->tty, 1);
  } else {
   FUNC_0 (VAR_1, ("carrier loss\n"));
   VAR_1->cd = 0;
   FUNC_2 (VAR_2);
   FUNC_5 (VAR_4);
   if (VAR_1->tty)
    FUNC_6(VAR_1->tty, 0);
  }
 } else {
  FUNC_2 (VAR_2);
  FUNC_5 (VAR_4);
 }
}
