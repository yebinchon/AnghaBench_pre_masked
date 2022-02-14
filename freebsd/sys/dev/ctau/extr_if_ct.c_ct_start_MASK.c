
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int timeout_handle; TYPE_3__* chan; scalar_t__ running; } ;
typedef TYPE_1__ drv_t ;
struct TYPE_8__ {int rts; int dtr; } ;


 int FUNC_0 (int *,int ,int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6 (drv_t *VAR_2)
{
 int VAR_3 = FUNC_4 ();

 if (VAR_2->running) {
  if (! VAR_2->chan->dtr)
   FUNC_2 (VAR_2->chan, 1);
  if (! VAR_2->chan->rts)
   FUNC_3 (VAR_2->chan, 1);
  FUNC_1 (VAR_2);
  FUNC_0 (&VAR_2->timeout_handle, VAR_1, VAR_0, VAR_2);
 }

 FUNC_5 (VAR_3);
}
