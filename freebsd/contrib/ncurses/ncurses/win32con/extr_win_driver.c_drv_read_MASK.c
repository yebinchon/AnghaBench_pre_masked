
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int inp_rec ;
typedef int WORD ;
struct TYPE_12__ {scalar_t__ AsciiChar; } ;
struct TYPE_13__ {int wVirtualKeyCode; TYPE_1__ uChar; int bKeyDown; } ;
struct TYPE_14__ {int MouseEvent; TYPE_2__ KeyEvent; } ;
struct TYPE_17__ {scalar_t__ EventType; TYPE_3__ Event; } ;
struct TYPE_16__ {scalar_t__ _keypad_on; } ;
struct TYPE_15__ {int inp; } ;
typedef TYPE_4__ TERMINAL_CONTROL_BLOCK ;
typedef TYPE_5__ SCREEN ;
typedef TYPE_6__ INPUT_RECORD ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_2 (int ,TYPE_6__*,int,scalar_t__*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int*) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (TYPE_6__*,int ,int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(TERMINAL_CONTROL_BLOCK * VAR_3, int *VAR_4)
{
    SCREEN *VAR_5;
    int VAR_6 = 1;
    INPUT_RECORD VAR_7;
    BOOL VAR_8;
    DWORD VAR_9;
    WORD VAR_10;

    FUNC_0();
    FUNC_6(VAR_4);
    FUNC_3();

    FUNC_8(&VAR_7, 0, sizeof(VAR_7));

    FUNC_4((FUNC_5("win32con::drv_read(%p)"), VAR_3));
    while ((VAR_8 = FUNC_2(VAR_3->inp, &VAR_7, 1, &VAR_9))) {
 if (VAR_8 && VAR_9 > 0) {
     if (VAR_7.EventType == VAR_0) {
  if (!VAR_7.Event.KeyEvent.bKeyDown)
      continue;
  *VAR_4 = (int) VAR_7.Event.KeyEvent.uChar.AsciiChar;
  VAR_10 = VAR_7.Event.KeyEvent.wVirtualKeyCode;
  if (*VAR_4 == 0) {
      if (VAR_5->_keypad_on) {
   *VAR_4 = FUNC_1(VAR_3, VAR_10);
   if (0 > (*VAR_4))
       continue;
   else
       break;
      } else
   continue;
  } else {
      break;
  }
     } else if (VAR_7.EventType == VAR_2) {
  if (FUNC_7(VAR_3, VAR_7.Event.MouseEvent)) {
      *VAR_4 = VAR_1;
      break;
  }
     }
     continue;
 }
    }
    FUNC_9(VAR_6);
}
