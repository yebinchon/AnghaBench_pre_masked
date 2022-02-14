
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numbuttons; } ;
struct TYPE_5__ {TYPE_1__ info; } ;
typedef TYPE_2__ TERMINAL_CONTROL_BLOCK ;
typedef int SCREEN ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(TERMINAL_CONTROL_BLOCK * VAR_9, int VAR_10)
{
    SCREEN *VAR_11;
    int VAR_12 = 0;

    FUNC_0();
    FUNC_1();

    if (VAR_10 & VAR_4)
 VAR_12 |= VAR_0;
    if (VAR_10 & VAR_5)
 VAR_12 |= VAR_1;
    if (VAR_10 & VAR_6)
 VAR_12 |= VAR_2;
    if (VAR_10 & VAR_7)
 VAR_12 |= VAR_3;

    if (VAR_10 & VAR_8) {
 switch (VAR_9->info.numbuttons) {
 case 1:
     VAR_12 |= VAR_0;
     break;
 case 2:
     VAR_12 |= VAR_1;
     break;
 case 3:
     VAR_12 |= VAR_2;
     break;
 case 4:
     VAR_12 |= VAR_3;
     break;
 }
    }

    return VAR_12;
}
