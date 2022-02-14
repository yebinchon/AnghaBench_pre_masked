
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int cchar_t ;
struct TYPE_4__ {int _curx; int _cury; } ;
typedef TYPE_1__ WINDOW ;
typedef void* NCURSES_SIZE_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_1(WINDOW *VAR_2, int VAR_3)
{
    cchar_t VAR_4 = VAR_1;
    int VAR_5 = VAR_2->_curx;
    int VAR_6 = VAR_2->_cury;

    while (VAR_3-- > 0) {
 if (FUNC_0(VAR_2, VAR_4) == VAR_0)
     break;
    }
    VAR_2->_curx = (NCURSES_SIZE_T) VAR_5;
    VAR_2->_cury = (NCURSES_SIZE_T) VAR_6;
}
