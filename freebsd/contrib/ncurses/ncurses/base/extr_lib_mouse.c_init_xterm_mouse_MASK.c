
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* _mouse_xtermcap; int _mouse_type; } ;
typedef TYPE_1__ SCREEN ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(SCREEN *VAR_1)
{
    VAR_1->_mouse_type = VAR_0;
    VAR_1->_mouse_xtermcap = FUNC_1("XM");
    if (!FUNC_0(VAR_1->_mouse_xtermcap))
 VAR_1->_mouse_xtermcap = "\033[?1000%?%p1%{1}%=%th%el%;";
}
