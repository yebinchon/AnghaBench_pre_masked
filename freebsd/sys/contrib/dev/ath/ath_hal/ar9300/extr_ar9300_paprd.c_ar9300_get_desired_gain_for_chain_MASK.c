
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal {int dummy; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (struct ath_hal*,int ,int ) ;
 int FUNC_2 (struct ath_hal*,int ,int ) ;
 int FUNC_3 (struct ath_hal*,int ,int ,int ) ;
 int FUNC_4 (struct ath_hal*,char*,int,int,int,int,int,int,int) ;

__attribute__((used)) static unsigned int FUNC_5(struct ath_hal *VAR_26,
    int VAR_27, int VAR_28)
{
    int VAR_29 = 0;
    int VAR_30 = 0, VAR_31 = 0;
    int VAR_32 = 0, VAR_33 = 0;
    int VAR_34 = 0, VAR_35 = 0, VAR_36 = 0;
    int VAR_37 = 0, VAR_38 = 0, VAR_39 = 0;
    int VAR_40 = 0;
    int VAR_41 = 0;


    if (FUNC_0(VAR_26)) {
        FUNC_3(VAR_26, VAR_8,
            VAR_7, 0);
    } else {
        FUNC_3(VAR_26, VAR_6,
            VAR_7, 0);
    }

    VAR_39 =
        FUNC_2(VAR_26, VAR_18,
        VAR_19);

    VAR_30 =
        FUNC_1(VAR_26, VAR_23, VAR_24);

    VAR_31 =
        FUNC_2(VAR_26, VAR_23, VAR_25);


    VAR_32 =
        FUNC_2(VAR_26, VAR_20,
        VAR_21);

    VAR_33 =
        FUNC_2(VAR_26, VAR_20,
        VAR_22);


    VAR_34 =
        FUNC_2(VAR_26, VAR_9,
        VAR_10);

    VAR_35 =
        FUNC_2(VAR_26, VAR_9,
        VAR_11);
    if (VAR_27 == 0) {
        VAR_36 =
            FUNC_2(VAR_26, VAR_12,
            VAR_13);
        VAR_41 = FUNC_2(VAR_26, VAR_0,
            VAR_1);
    } else if (VAR_27 == 1) {
        if (!FUNC_0(VAR_26)) {
            VAR_36 =
                FUNC_2(VAR_26, VAR_14,
                VAR_15);
            VAR_41 = FUNC_2(VAR_26, VAR_2,
                VAR_3);
        }
    } else if (VAR_27 == 2) {
        if (!FUNC_0(VAR_26)) {
            VAR_36 =
                FUNC_2(VAR_26, VAR_16,
                VAR_17);
            VAR_41 = FUNC_2(VAR_26, VAR_4,
                VAR_5);
        }
    } else {

    }

    if (VAR_36 < 128) {
        VAR_29 = VAR_36;
    } else {
        VAR_29 = VAR_36 - 256;
    }

    VAR_37 =
        (int) (VAR_30 * (VAR_34 - VAR_32) +
        128) >> 8;
    VAR_38 =
        (int) (VAR_31 * (VAR_35 - VAR_33) + 64) >> 7;
    VAR_40 =
        VAR_28 - VAR_29 - VAR_37 -
        VAR_38 + VAR_39 + VAR_41;
    return (unsigned int) VAR_40;
}
