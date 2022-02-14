
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {int* paprd_gain_table_entries; int* paprd_gain_table_index; } ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ath_hal*,int) ;

__attribute__((used)) static void FUNC_3(struct ath_hal *VAR_0)
{
    int VAR_1;
    u_int32_t VAR_2;
    u_int32_t *VAR_3 = FUNC_0(VAR_0)->paprd_gain_table_entries;
    u_int32_t *VAR_4 = FUNC_0(VAR_0)->paprd_gain_table_index;

    VAR_2 = FUNC_1(1);

    for (VAR_1 = 0; VAR_1 < 32; VAR_1++) {
        VAR_3[VAR_1] = FUNC_2(VAR_0, VAR_2);
        VAR_4[VAR_1] = (VAR_3[VAR_1] >> 24) & 0xff;





        VAR_2 = VAR_2 + 4;
    }
}
