
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int core_mask; } ;
typedef TYPE_1__ cvmx_sysinfo_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int,int) ;
 int* VAR_53 ;
 int* VAR_54 ;
 int* VAR_55 ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 scalar_t__ VAR_56 ;
 scalar_t__ VAR_57 ;
 scalar_t__ VAR_58 ;
 int FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 () ;

__attribute__((used)) static void FUNC_9(cvmx_sysinfo_t *VAR_59)
{
    int VAR_60;
    int VAR_61 = FUNC_6();


    VAR_57 = 0;
    VAR_58 = 0;
    VAR_56 = 0;
    FUNC_7(FUNC_1(VAR_61 * 2), VAR_57);
    FUNC_7(FUNC_1((VAR_61 * 2)+1), VAR_57);
    FUNC_7(FUNC_2(VAR_61 * 2), VAR_58);
    FUNC_7(FUNC_2((VAR_61 * 2)+1), VAR_58);
    if (FUNC_3(VAR_51) || FUNC_3(VAR_52))
        FUNC_7(FUNC_0(FUNC_6()), VAR_56);

    if (!FUNC_5(VAR_59->core_mask)|| FUNC_8())
        return;


    for (VAR_60 = 0; VAR_60 < 64; VAR_60++) {
        VAR_54[VAR_60] = 0xff;
        VAR_55[VAR_60] = 0xff;
        VAR_53[VAR_60] = 0xff;
    }


    for (VAR_60 = 0; VAR_60 < 16; VAR_60++)
        FUNC_4(VAR_49 + VAR_60, 0, VAR_60);

    for (VAR_60 = 0; VAR_60 < 16; VAR_60++)
        FUNC_4(VAR_9 + VAR_60, 0, VAR_60 + 16);


    for (VAR_60 = 0; VAR_60 < 2; VAR_60++)
        FUNC_4(VAR_18 + VAR_60, 0, VAR_60 + 32);


    FUNC_4(VAR_45 + 0, 0, 34);
    FUNC_4(VAR_45 + 1, 0, 35);
    FUNC_4(VAR_45 + 2, 1, 16);


    for (VAR_60 = 0; VAR_60 < 4; VAR_60++)
        FUNC_4(VAR_23 + VAR_60, 0, VAR_60 + 36);


    for (VAR_60 = 0; VAR_60 < 4; VAR_60++)
        FUNC_4(VAR_24 + VAR_60, 0, VAR_60 + 40);


    FUNC_4(VAR_44 + 0, 0, 45);
    FUNC_4(VAR_44 + 1, 0, 59);


    FUNC_4(VAR_34, 0, 46);
    FUNC_4(VAR_43, 0, 47);


    for (VAR_60 = 0; VAR_60 < 2; VAR_60++)
        FUNC_4(VAR_8 + VAR_60, 0, VAR_60 + 48);

    FUNC_4(VAR_13, 0, 50);
    FUNC_4(VAR_15, 0, 51);


    for (VAR_60 = 0; VAR_60 < 4; VAR_60++)
        FUNC_4(VAR_41 + VAR_60, 0, VAR_60 + 52);


    for(VAR_60 = 0; VAR_60 < 6; VAR_60++)
        FUNC_4(VAR_42 + VAR_60, 8, VAR_60 + 4);

    FUNC_4(VAR_46 + 0, 0, 56);
    FUNC_4(VAR_46 + 1, 1, 17);
    FUNC_4(VAR_25, 0, 57);
    FUNC_4(VAR_21, 0, 58);
    FUNC_4(VAR_31, 0, 60);
    FUNC_4(VAR_12, 0, 61);
    FUNC_4(VAR_19 + 0, 0, 62);
    FUNC_4(VAR_19 + 1, 1, 18);
    FUNC_4(VAR_2, 0, 63);


    for (VAR_60 = 0; VAR_60 < 16; VAR_60++)
        FUNC_4(VAR_48 + VAR_60, 1, VAR_60);

    FUNC_4(VAR_22, 1, 19);
    FUNC_4(VAR_20, 1, 20);
    FUNC_4(VAR_10, 1, 21);
    FUNC_4(VAR_7, 1, 22);
    FUNC_4(VAR_30, 1, 23);
    FUNC_4(VAR_16, 1, 24);
    FUNC_4(VAR_11, 1, 25);
    FUNC_4(VAR_28, 1, 26);
    FUNC_4(VAR_29, 1, 27);
    FUNC_4(VAR_50, 1, 28);
    FUNC_4(VAR_40, 1, 29);
    FUNC_4(VAR_33, 1, 30);
    FUNC_4(VAR_14, 1, 31);
    FUNC_4(VAR_3, 1, 32);
    FUNC_4(VAR_47, 1, 33);
    FUNC_4(VAR_36, 1, 34);
    FUNC_4(VAR_5, 1, 35);
    FUNC_4(VAR_1, 1, 36);
    FUNC_4(VAR_1 + 1, 1, 37);
    FUNC_4(VAR_6, 1, 40);
    FUNC_4(VAR_0, 1, 46);
    FUNC_4(VAR_32, 1, 47);
    FUNC_4(VAR_26, 1, 48);
    FUNC_4(VAR_27, 1, 49);
    FUNC_4(VAR_37, 1, 50);
    FUNC_4(VAR_38, 1, 51);
    FUNC_4(VAR_17, 1, 52);
    FUNC_4(VAR_4, 1, 56);
    FUNC_4(VAR_39, 1, 60);
    FUNC_4(VAR_35, 1, 63);
}
