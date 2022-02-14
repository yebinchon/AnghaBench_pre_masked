
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
typedef scalar_t__ u_int ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {scalar_t__ halNumGpioPins; } ;
struct TYPE_4__ {TYPE_1__ ah_caps; } ;


 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct ath_hal*,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_4 (struct ath_hal*,scalar_t__) ;
 int FUNC_5 (struct ath_hal*,scalar_t__,scalar_t__) ;

void
FUNC_6(struct ath_hal *VAR_14, u_int VAR_15, u_int32_t VAR_16)
{


    int VAR_17, VAR_18;
    u_int32_t VAR_19;
    u_int32_t VAR_20[2], VAR_21[2];
    VAR_20[0] = FUNC_2(VAR_14, VAR_7);
    VAR_20[1] = FUNC_2(VAR_14, VAR_9);
    VAR_21[0] = VAR_8;
    VAR_21[1] = VAR_10;


    FUNC_3(VAR_15 < FUNC_0(VAR_14)->ah_caps.halNumGpioPins);

    if ((VAR_15 == VAR_0) ||
        (VAR_15 > VAR_1))
    {
        return;
    }




    if (VAR_16 == VAR_11) {

        for (VAR_17 = 0; VAR_17 < FUNC_1(VAR_20); VAR_17++) {
            VAR_19 = FUNC_4(VAR_14, VAR_20[VAR_17]);
            VAR_18 = VAR_21[VAR_17] + VAR_15;
            VAR_19 &= ~(1 << VAR_18);
            FUNC_5(VAR_14, VAR_20[VAR_17], VAR_19);







        }

    } else {
        VAR_19 = FUNC_4(VAR_14, FUNC_2(VAR_14, VAR_2));
        VAR_18 = VAR_15;
        if (VAR_16 == VAR_12) {

            VAR_19 &= ~(1 << VAR_18);
        } else if (VAR_16 == VAR_13) {

            VAR_19 |= (1 << VAR_18);
        }
        FUNC_5(VAR_14, FUNC_2(VAR_14, VAR_2), VAR_19);


        for (VAR_17 = 0; VAR_17 < FUNC_1(VAR_20); VAR_17++) {
            VAR_19 = FUNC_4(VAR_14, VAR_20[VAR_17]);
            VAR_18 = VAR_21[VAR_17] + VAR_15;
            VAR_19 |= (1 << VAR_18);
            FUNC_5(VAR_14, VAR_20[VAR_17], VAR_19);







        }
    }
}
