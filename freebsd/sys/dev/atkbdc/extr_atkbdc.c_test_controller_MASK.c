
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kbd; } ;
typedef int KBDC ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_6 (int ,int ) ;

int
FUNC_7(KBDC VAR_10)
{
    int VAR_11 = VAR_4;
    int VAR_12 = VAR_5;
    int VAR_13 = VAR_3;

    while (VAR_11-- > 0) {
        FUNC_1(VAR_10, 10);
        if (FUNC_6(VAR_10, VAR_1))
         break;
    }
    if (VAR_11 < 0)
        return VAR_0;

    FUNC_2(&FUNC_3(VAR_10)->kbd);
    while (VAR_12-- > 0) {

        FUNC_0(VAR_6*1000);
        VAR_13 = FUNC_5(VAR_10);
        if (VAR_13 != -1)
         break;
    }
    if (VAR_9 || VAR_8)
        FUNC_4(VAR_7, "kbdc: DIAGNOSE status:%04x\n", VAR_13);
    return (VAR_13 == VAR_2);
}
