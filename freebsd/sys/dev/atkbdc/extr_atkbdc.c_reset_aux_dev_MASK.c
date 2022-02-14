
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aux; } ;
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
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (int ,int ) ;

int
FUNC_8(KBDC VAR_12)
{
    int VAR_13 = VAR_1;
    int VAR_14 = VAR_2;
    int VAR_15 = VAR_7;

    while (VAR_13-- > 0) {
        FUNC_1(VAR_12, 10);
        if (!FUNC_7(VAR_12, VAR_5))
     continue;
 FUNC_2(&FUNC_3(VAR_12)->aux);

 for (VAR_14 = VAR_2; VAR_14 > 0; --VAR_14) {
            FUNC_0(VAR_3*1000);
            VAR_15 = FUNC_6(VAR_12);
     if (VAR_15 != -1)
  break;
 }
        if (VAR_11 || VAR_10)
            FUNC_4(VAR_4, "kbdc: RESET_AUX return code:%04x\n", VAR_15);
        if (VAR_15 == VAR_6)
         break;
    }
    if (VAR_13 < 0)
        return VAR_0;

    for (VAR_14 = VAR_2; VAR_14 > 0; --VAR_14) {

        FUNC_0(VAR_3*1000);
        VAR_15 = FUNC_6(VAR_12);
        if (VAR_15 != -1)
         break;
    }
    if (VAR_11 || VAR_10)
        FUNC_4(VAR_4, "kbdc: RESET_AUX status:%04x\n", VAR_15);
    if (VAR_15 != VAR_8)
        return VAR_0;

    VAR_15 = FUNC_5(VAR_12);
    if (VAR_11 || VAR_10)
        FUNC_4(VAR_4, "kbdc: RESET_AUX ID:%04x\n", VAR_15);

    return VAR_9;
}
