
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {int* paprd_gain_table_entries; } ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
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
 int FUNC_1 (struct ath_hal*,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ath_hal *VAR_13, unsigned int VAR_14)
{
    int VAR_15, VAR_16, VAR_17, VAR_18;
    int VAR_19, VAR_20, VAR_21, VAR_22;
    u_int32_t *VAR_23 = FUNC_0(VAR_13)->paprd_gain_table_entries;


    VAR_15 = VAR_23[VAR_14];
    VAR_16 = VAR_15 & 0x7;
    VAR_17 = (VAR_15 >> 3) & 0x3;
    VAR_18 = (VAR_15 >> 5) & 0xf;
    VAR_19 = (VAR_15 >> 9) & 0xf;
    VAR_20 = (VAR_15 >> 13) & 0xf;
    VAR_21 = (VAR_15 >> 17) & 0xf;
    VAR_22 = (VAR_15 >> 21) & 0x3;

    FUNC_1(VAR_13, VAR_3,
        VAR_9, VAR_16);
    FUNC_1(VAR_13, VAR_3,
        VAR_10, VAR_17);
    FUNC_1(VAR_13, VAR_3,
        VAR_11, VAR_18);
    FUNC_1(VAR_13, VAR_3,
        VAR_5, VAR_19);
    FUNC_1(VAR_13, VAR_3,
        VAR_6, VAR_20);
    FUNC_1(VAR_13, VAR_3,
        VAR_7, VAR_21);
    FUNC_1(VAR_13, VAR_3,
        VAR_8, VAR_22);
    FUNC_1(VAR_13, VAR_3,
        VAR_4, 0);
    FUNC_1(VAR_13, VAR_3,
        VAR_12, 0);

    FUNC_1(VAR_13, VAR_0, VAR_1, 0);
    FUNC_1(VAR_13, VAR_0, VAR_2, 0);
}
