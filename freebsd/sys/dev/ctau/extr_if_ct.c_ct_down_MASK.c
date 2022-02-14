
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int timeout_handle; scalar_t__ running; int chan; } ;
typedef TYPE_1__ drv_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6 (drv_t *VAR_0)
{
 int VAR_1 = FUNC_4 ();
 FUNC_0 (VAR_0, ("ct_down\n"));
 FUNC_2 (VAR_0->chan, 0);
 FUNC_3 (VAR_0->chan, 0);
 VAR_0->running = 0;
 FUNC_1 (&VAR_0->timeout_handle);
 FUNC_5 (VAR_1);
}
