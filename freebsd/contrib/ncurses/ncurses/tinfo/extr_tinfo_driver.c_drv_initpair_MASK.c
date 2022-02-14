
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int blue; int green; int red; } ;
typedef TYPE_1__ color_t ;
struct TYPE_4__ {TYPE_1__* defaultPalette; } ;
typedef int TERMINAL_CONTROL_BLOCK ;
typedef int SCREEN ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_2__ FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,char*) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_7(TERMINAL_CONTROL_BLOCK * VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    SCREEN *VAR_6;

    FUNC_0();
    FUNC_4();

    if ((VAR_1 != ((void*)0)) && FUNC_1(VAR_4) && FUNC_1(VAR_5)) {
 const color_t *VAR_7 = FUNC_2(VAR_6).defaultPalette;

 FUNC_6(VAR_0,
    ("initializing pair: pair = %d, fg=(%d,%d,%d), bg=(%d,%d,%d)",
     VAR_3,
     VAR_7[VAR_4].red, VAR_7[VAR_4].green, VAR_7[VAR_4].blue,
     VAR_7[VAR_5].red, VAR_7[VAR_5].green, VAR_7[VAR_5].blue));

 FUNC_3("initialize_pair",
        FUNC_5(VAR_1,
         VAR_3,
         VAR_7[VAR_4].red, VAR_7[VAR_4].green, VAR_7[VAR_4].blue,
         VAR_7[VAR_5].red, VAR_7[VAR_5].green, VAR_7[VAR_5].blue));
    }
}
