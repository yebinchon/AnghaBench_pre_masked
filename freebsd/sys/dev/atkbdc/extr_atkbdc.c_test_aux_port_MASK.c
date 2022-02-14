
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kbd; } ;
typedef int KBDC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_5 (int ,int ) ;

int
FUNC_6(KBDC VAR_7)
{
    int VAR_8 = VAR_2;
    int VAR_9 = VAR_3;
    int VAR_10 = -1;

    while (VAR_8-- > 0) {
        FUNC_0(VAR_7, 10);
        if (FUNC_5(VAR_7, VAR_1))
         break;
    }
    if (VAR_8 < 0)
        return VAR_0;

    FUNC_1(&FUNC_2(VAR_7)->kbd);
    while (VAR_9-- > 0) {
        VAR_10 = FUNC_4(VAR_7);
        if (VAR_10 != -1)
         break;
    }
    if (VAR_6 || VAR_5)
        FUNC_3(VAR_4, "kbdc: TEST_AUX_PORT status:%04x\n", VAR_10);
    return VAR_10;
}
