
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {int mode_mask; int mode_addr; int period_addr; int next_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 int FUNC_3 (struct ath_hal*,int ,int) ;
 int FUNC_4 (struct ath_hal*,int ,int) ;
 int FUNC_5 (struct ath_hal*,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 TYPE_1__* VAR_7 ;

void
FUNC_7(
    struct ath_hal *VAR_8,
    int VAR_9,
    u_int32_t VAR_10,
    u_int32_t VAR_11)
{
    if ((VAR_9 < VAR_0) || (VAR_9 >= VAR_6)) {
        return;
    }




    FUNC_5(VAR_8, VAR_7[VAR_9].next_addr, VAR_10);
    FUNC_5(VAR_8, VAR_7[VAR_9].period_addr, VAR_11);
    FUNC_4(VAR_8,
        VAR_7[VAR_9].mode_addr,
        VAR_7[VAR_9].mode_mask);

    if (FUNC_2(VAR_8) || FUNC_1(VAR_8)) {





        if ((VAR_9 < VAR_1)) {
            FUNC_3(VAR_8, VAR_5, (1 << VAR_9));
        }
        else {
            FUNC_4(VAR_8, VAR_5, (1 << VAR_9));
        }
    }


    FUNC_4(VAR_8, VAR_2,
                   (FUNC_6(FUNC_0(VAR_9), VAR_3) |
                    FUNC_6(FUNC_0(VAR_9), VAR_4)));
}
