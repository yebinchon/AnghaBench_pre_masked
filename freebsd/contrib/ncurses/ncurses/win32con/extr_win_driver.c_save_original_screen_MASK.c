
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_20__ {int X; int Y; } ;
struct TYPE_15__ {void* Right; void* Bottom; void* Left; void* Top; } ;
struct TYPE_14__ {int X; int Y; } ;
struct TYPE_16__ {TYPE_2__ srWindow; TYPE_1__ dwSize; } ;
struct TYPE_19__ {void* save_screen; TYPE_3__ SBI; } ;
struct TYPE_18__ {void* Right; void* Bottom; void* Left; void* Top; } ;
struct TYPE_17__ {int hdl; } ;
typedef TYPE_4__ TERMINAL_CONTROL_BLOCK ;
typedef TYPE_5__ SMALL_RECT ;
typedef void* SHORT ;
typedef TYPE_6__ Properties ;
typedef TYPE_7__ COORD ;
typedef int CHAR_INFO ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 () ;
 TYPE_6__* FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (int ,void*,TYPE_7__,TYPE_7__,TYPE_5__*) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 void* FUNC_5 (size_t) ;

__attribute__((used)) static bool
FUNC_6(TERMINAL_CONTROL_BLOCK * VAR_2)
{
    bool VAR_3 = VAR_0;
    Properties *VAR_4 = FUNC_2(VAR_2);
    COORD VAR_5;
    COORD VAR_6;
    SMALL_RECT VAR_7;
    size_t VAR_8;

    VAR_5.X = VAR_4->SBI.dwSize.X;
    VAR_5.Y = VAR_4->SBI.dwSize.Y;
    VAR_8 = (size_t) (VAR_5.X * VAR_5.Y);

    if ((VAR_4->save_screen = FUNC_5(VAR_8 * sizeof(CHAR_INFO))) != 0) {
 VAR_6.X = VAR_6.Y = 0;

 VAR_7.Top = 0;
 VAR_7.Left = 0;
 VAR_7.Bottom = (SHORT) (VAR_5.Y - 1);
 VAR_7.Right = (SHORT) (VAR_5.X - 1);

 FUNC_4(("... reading console buffer %dx%d into %d,%d - %d,%d at %d,%d",
    VAR_5.Y, VAR_5.X,
    VAR_7.Top,
    VAR_7.Left,
    VAR_7.Bottom,
    VAR_7.Right,
    VAR_6.Y,
    VAR_6.X));

 if (FUNC_3(VAR_2->hdl,
         VAR_4->save_screen,
         VAR_5,
         VAR_6,
         &VAR_7)) {
     VAR_3 = VAR_1;
 } else {
     FUNC_4((" error %#lx", (unsigned long) FUNC_1()));
     FUNC_0(VAR_4->save_screen);

     VAR_5.X = (SHORT) (VAR_4->SBI.srWindow.Right
        - VAR_4->SBI.srWindow.Left + 1);
     VAR_5.Y = (SHORT) (VAR_4->SBI.srWindow.Bottom
        - VAR_4->SBI.srWindow.Top + 1);
     VAR_8 = (size_t) (VAR_5.X * VAR_5.Y);

     if ((VAR_4->save_screen = FUNC_5(VAR_8 * sizeof(CHAR_INFO))) != 0) {
  VAR_6.X = VAR_6.Y = 0;

  VAR_7.Top = VAR_4->SBI.srWindow.Top;
  VAR_7.Left = VAR_4->SBI.srWindow.Left;
  VAR_7.Bottom = VAR_4->SBI.srWindow.Bottom;
  VAR_7.Right = VAR_4->SBI.srWindow.Right;

  FUNC_4(("... reading console window %dx%d into %d,%d - %d,%d at %d,%d",
     VAR_5.Y, VAR_5.X,
     VAR_7.Top,
     VAR_7.Left,
     VAR_7.Bottom,
     VAR_7.Right,
     VAR_6.Y,
     VAR_6.X));

  if (FUNC_3(VAR_2->hdl,
          VAR_4->save_screen,
          VAR_5,
          VAR_6,
          &VAR_7)) {
      VAR_3 = VAR_1;
  } else {
      FUNC_4((" error %#lx", (unsigned long) FUNC_1()));
  }
     }
 }
    }

    FUNC_4(("... save original screen contents %s", VAR_3 ? "ok" : "err"));
    return VAR_3;
}
