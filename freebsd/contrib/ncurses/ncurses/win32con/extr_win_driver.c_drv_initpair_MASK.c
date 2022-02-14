
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* pairs; } ;
typedef int TERMINAL_CONTROL_BLOCK ;
typedef int SCREEN ;


 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(TERMINAL_CONTROL_BLOCK * VAR_1,
      int VAR_2,
      int VAR_3,
      int VAR_4)
{
    SCREEN *VAR_5;

    FUNC_0();
    FUNC_3();

    if ((VAR_2 > 0) && (VAR_2 < VAR_0) && (VAR_3 >= 0) && (VAR_3 < 8)
 && (VAR_4 >= 0) && (VAR_4 < 8)) {
 FUNC_2(VAR_1)->pairs[VAR_2] = FUNC_1(1, VAR_3) | FUNC_1(0, VAR_4);
    }
}
