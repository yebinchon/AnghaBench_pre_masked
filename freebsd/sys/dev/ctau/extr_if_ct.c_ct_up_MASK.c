
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int running; int chan; } ;
typedef TYPE_1__ drv_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5 (drv_t *VAR_0)
{
 int VAR_1 = FUNC_3 ();
 FUNC_0 (VAR_0, ("ct_up\n"));
 FUNC_1 (VAR_0->chan, 1);
 FUNC_2 (VAR_0->chan, 1);
 VAR_0->running = 1;
 FUNC_4 (VAR_1);
}
