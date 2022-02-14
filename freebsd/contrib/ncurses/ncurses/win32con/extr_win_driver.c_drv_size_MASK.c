
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ Left; scalar_t__ Right; scalar_t__ Top; scalar_t__ Bottom; } ;
struct TYPE_5__ {scalar_t__ X; scalar_t__ Y; } ;
struct TYPE_7__ {TYPE_2__ srWindow; TYPE_1__ dwSize; } ;
struct TYPE_8__ {TYPE_3__ SBI; scalar_t__ buffered; } ;
typedef int TERMINAL_CONTROL_BLOCK ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(TERMINAL_CONTROL_BLOCK * VAR_2, int *VAR_3, int *VAR_4)
{
    int VAR_5 = VAR_0;

    FUNC_0();

    FUNC_2(*(FUNC_3("win32con::drv_size(%p)"), VAR_2));

    if (FUNC_4(VAR_2) &&
 FUNC_1(VAR_2) != 0 &&
 VAR_3 != ((void*)0) &&
 VAR_4 != ((void*)0)) {
 if (FUNC_1(VAR_2)->buffered) {
     *VAR_3 = (int) (FUNC_1(VAR_2)->SBI.dwSize.Y);
     *VAR_4 = (int) (FUNC_1(VAR_2)->SBI.dwSize.X);
 } else {
     *VAR_3 = (int) (FUNC_1(VAR_2)->SBI.srWindow.Bottom + 1 -
       FUNC_1(VAR_2)->SBI.srWindow.Top);
     *VAR_4 = (int) (FUNC_1(VAR_2)->SBI.srWindow.Right + 1 -
      FUNC_1(VAR_2)->SBI.srWindow.Left);
 }
 VAR_5 = VAR_1;
    }
    FUNC_5(VAR_5);
}
