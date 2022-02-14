
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int _nc_bkgd; } ;
typedef int SCREEN ;
typedef int NCURSES_CH_T ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int
FUNC_4(SCREEN *VAR_3, NCURSES_CH_T * VAR_4)
{
    int VAR_5 = 0;
    int VAR_6;
    NCURSES_CH_T VAR_7 = VAR_1;

    if (VAR_0)
 FUNC_2(VAR_7, FUNC_1(VAR_2->_nc_bkgd));

    for (VAR_6 = FUNC_3(VAR_3); VAR_6 > 0; VAR_6--, VAR_4++)
 if (!(FUNC_0(VAR_7, *VAR_4)))
     VAR_5++;

    return VAR_5;
}
