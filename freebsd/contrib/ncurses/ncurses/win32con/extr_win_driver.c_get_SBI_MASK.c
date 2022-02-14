
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_17__ {scalar_t__ Top; scalar_t__ Left; int Right; int Bottom; } ;
struct TYPE_15__ {int Y; int X; } ;
struct TYPE_14__ {int Y; int X; } ;
struct TYPE_13__ {int Y; int X; } ;
struct TYPE_12__ {TYPE_5__ srWindow; TYPE_3__ dwCursorPosition; TYPE_2__ dwMaximumWindowSize; TYPE_1__ dwSize; } ;
struct TYPE_16__ {scalar_t__ Y; scalar_t__ X; } ;
struct TYPE_19__ {TYPE_11__ SBI; TYPE_4__ origin; scalar_t__ buffered; } ;
struct TYPE_18__ {int hdl; } ;
typedef TYPE_6__ TERMINAL_CONTROL_BLOCK ;
typedef TYPE_7__ Properties ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_11__*) ;
 TYPE_7__* FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_3(TERMINAL_CONTROL_BLOCK * VAR_2)
{
    bool VAR_3 = VAR_0;
    Properties *VAR_4 = FUNC_1(VAR_2);
    if (FUNC_0(VAR_2->hdl, &(VAR_4->SBI))) {
 FUNC_2(("GetConsoleScreenBufferInfo"));
 FUNC_2(("... buffer(X:%d Y:%d)",
    VAR_4->SBI.dwSize.X,
    VAR_4->SBI.dwSize.Y));
 FUNC_2(("... window(X:%d Y:%d)",
    VAR_4->SBI.dwMaximumWindowSize.X,
    VAR_4->SBI.dwMaximumWindowSize.Y));
 FUNC_2(("... cursor(X:%d Y:%d)",
    VAR_4->SBI.dwCursorPosition.X,
    VAR_4->SBI.dwCursorPosition.Y));
 FUNC_2(("... display(Top:%d Bottom:%d Left:%d Right:%d)",
    VAR_4->SBI.srWindow.Top,
    VAR_4->SBI.srWindow.Bottom,
    VAR_4->SBI.srWindow.Left,
    VAR_4->SBI.srWindow.Right));
 if (VAR_4->buffered) {
     VAR_4->origin.X = 0;
     VAR_4->origin.Y = 0;
 } else {
     VAR_4->origin.X = VAR_4->SBI.srWindow.Left;
     VAR_4->origin.Y = VAR_4->SBI.srWindow.Top;
 }
 VAR_3 = VAR_1;
    } else {
 FUNC_2(("GetConsoleScreenBufferInfo ERR"));
    }
    return VAR_3;
}
