
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct TYPE_2__ {int mode_mask; int mode_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ath_hal*,int ,int) ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__* VAR_5 ;

void
FUNC_3(struct ath_hal *VAR_6, int VAR_7)
{
    if ((VAR_7 < VAR_0) || (VAR_7 >= VAR_4)) {
        return;
    }




    FUNC_1(VAR_6,
        VAR_5[VAR_7].mode_addr,
        VAR_5[VAR_7].mode_mask);


    FUNC_1(VAR_6, VAR_1,
                   (FUNC_2(FUNC_0(VAR_7), VAR_2) |
                    FUNC_2(FUNC_0(VAR_7), VAR_3)));
}
