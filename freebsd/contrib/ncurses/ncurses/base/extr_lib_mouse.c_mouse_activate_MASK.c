
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int on ;
struct TYPE_6__ {int _mouse_type; void* _mouse_active; int _mouse_wrap; int _mouse_resume; int _mouse_parse; int _mouse_inline; int _mouse_event; int _mouse_fd; scalar_t__ _mouse_bstate; int _mouse_initialized; } ;
typedef TYPE_1__ SCREEN ;
typedef int NCURSES_SP_NAME ;
typedef int NCURSES_SP_ARGx ;
typedef int NCURSES_SP_ARG ;


 void* VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_1__*,void*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int VAR_9 ;
 int * VAR_10 ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(SCREEN *VAR_11, int VAR_12)
{
    if (!VAR_12 && !VAR_11->_mouse_initialized)
 return;

    if (!FUNC_2(VAR_11))
 return;

    if (VAR_12) {
 VAR_11->_mouse_bstate = 0;
 switch (VAR_11->_mouse_type) {
 case 128:



     FUNC_1("xterm mouse initialization");
     FUNC_4(VAR_11, 1);
     break;
 case 131:
     return;
 }



 VAR_11->_mouse_event = VAR_4;
 VAR_11->_mouse_inline = VAR_5;
 VAR_11->_mouse_parse = VAR_6;
 VAR_11->_mouse_resume = VAR_7;
 VAR_11->_mouse_wrap = VAR_8;
    } else {

 switch (VAR_11->_mouse_type) {
 case 128:
     FUNC_1("xterm mouse deinitialization");
     FUNC_4(VAR_11, 0);
     break;
 case 131:
     return;
 }
    }
    NCURSES_SP_NAME(FUNC_7) (NCURSES_SP_ARG);
}
