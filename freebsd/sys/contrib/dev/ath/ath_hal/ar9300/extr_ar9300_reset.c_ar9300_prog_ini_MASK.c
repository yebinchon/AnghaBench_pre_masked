
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ath_hal {int dummy; } ;
struct ar9300_ini_array {int ia_columns; int ia_rows; int * ia_array; } ;


 int FUNC_0 (struct ar9300_ini_array*,int,int) ;
 int FUNC_1 (struct ath_hal*,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline void
FUNC_3(struct ath_hal *VAR_0, struct ar9300_ini_array *VAR_1,
    int VAR_2)
{
    int VAR_3, VAR_4 = 0;


    if (VAR_1->ia_array == ((void*)0)) {
        return;
    }






    if (VAR_2 >= VAR_1->ia_columns) {
        VAR_2 = 1;
    }

    for (VAR_3 = 0; VAR_3 < VAR_1->ia_rows; VAR_3++) {
        u_int32_t VAR_5 = FUNC_0(VAR_1, VAR_3, 0);
        u_int32_t VAR_6 = FUNC_0(VAR_1, VAR_3, VAR_2);







        FUNC_1(VAR_0, VAR_5, VAR_6);
        FUNC_2(VAR_4);

    }
}
