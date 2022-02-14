
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int work ;
typedef int mmask_t ;
struct TYPE_10__ {scalar_t__ y; int x; int bstate; } ;
struct TYPE_7__ {scalar_t__ Y; int X; } ;
struct TYPE_9__ {int dwButtonState; TYPE_1__ dwMousePosition; } ;
struct TYPE_8__ {int _drv_mouse_old_buttons; int _drv_mouse_new_buttons; size_t _drv_mouse_tail; TYPE_4__* _drv_mouse_fifo; } ;
typedef int TERMINAL_CONTROL_BLOCK ;
typedef TYPE_2__ SCREEN ;
typedef int Properties ;
typedef TYPE_3__ MOUSE_EVENT_RECORD ;
typedef TYPE_4__ MEVENT ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_4__*,int ,int) ;

__attribute__((used)) static bool
FUNC_6(TERMINAL_CONTROL_BLOCK * VAR_3, MOUSE_EVENT_RECORD VAR_4)
{
    SCREEN *VAR_5;
    MEVENT VAR_6;
    bool VAR_7 = VAR_1;

    FUNC_1();
    FUNC_3();

    VAR_5->_drv_mouse_old_buttons = VAR_5->_drv_mouse_new_buttons;
    VAR_5->_drv_mouse_new_buttons = VAR_4.dwButtonState & VAR_0;





    if (VAR_5->_drv_mouse_new_buttons != VAR_5->_drv_mouse_old_buttons) {
 Properties *VAR_8 = FUNC_2(VAR_3);

 FUNC_5(&VAR_6, 0, sizeof(VAR_6));

 if (VAR_5->_drv_mouse_new_buttons) {

     VAR_6.bstate |= (mmask_t) FUNC_4(VAR_3, VAR_5->_drv_mouse_new_buttons);

 } else {


     VAR_6.bstate |= (mmask_t) (FUNC_4(VAR_3,
         VAR_5->_drv_mouse_old_buttons)
          >> 1);

     VAR_7 = VAR_2;
 }

 VAR_6.x = VAR_4.dwMousePosition.X;
 VAR_6.y = VAR_4.dwMousePosition.Y - FUNC_0(VAR_8);

 VAR_5->_drv_mouse_fifo[VAR_5->_drv_mouse_tail] = VAR_6;
 VAR_5->_drv_mouse_tail += 1;
    }

    return VAR_7;
}
