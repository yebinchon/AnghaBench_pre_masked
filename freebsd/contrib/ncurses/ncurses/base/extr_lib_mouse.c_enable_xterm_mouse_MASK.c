
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int _emxmouse_activated; int _mouse_active; int _mouse_xtermcap; } ;
typedef TYPE_1__ SCREEN ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2(SCREEN *VAR_0, int VAR_1)
{



    FUNC_0("xterm-mouse", FUNC_1(VAR_0->_mouse_xtermcap, VAR_1));

    VAR_0->_mouse_active = VAR_1;
}
