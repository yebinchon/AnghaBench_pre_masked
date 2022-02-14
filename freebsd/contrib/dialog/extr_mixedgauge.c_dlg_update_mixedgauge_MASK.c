
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int chtype ;
struct TYPE_4__ {int width; int dialog; scalar_t__ height; } ;
typedef TYPE_1__ DIALOG_MIXEDGAUGE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__,int) ;
 int FUNC_7 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_8(DIALOG_MIXEDGAUGE * VAR_4, int VAR_5)
{
    int VAR_6, VAR_7;






    (void) FUNC_6(VAR_4->dialog, VAR_4->height - 3, 4);
    FUNC_1(VAR_4->dialog, VAR_2);

    for (VAR_6 = 0; VAR_6 < (VAR_4->width - 2 * (3 + VAR_1)); VAR_6++)
 (void) FUNC_4(VAR_4->dialog, ' ');

    (void) FUNC_6(VAR_4->dialog, VAR_4->height - 3, (VAR_4->width / 2) - 2);
    (void) FUNC_7(VAR_4->dialog, "%3d%%", VAR_5);






    VAR_7 = (VAR_5 * (VAR_4->width - 2 * (3 + VAR_1))) / 100;
    if ((VAR_3 & VAR_0) != 0) {
 FUNC_0(VAR_4->dialog, VAR_0);
    } else {
 FUNC_1(VAR_4->dialog, VAR_0);
    }
    (void) FUNC_6(VAR_4->dialog, VAR_4->height - 3, 4);
    for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
 chtype VAR_8 = FUNC_5(VAR_4->dialog);
 if (VAR_3 & VAR_0) {
     VAR_8 &= ~VAR_0;
 }
 (void) FUNC_4(VAR_4->dialog, VAR_8);
    }
    FUNC_3(VAR_4);
    FUNC_2(VAR_4->dialog);
}
