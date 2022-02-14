
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t varInds_t ;
struct TYPE_7__ {size_t* vals; } ;
typedef TYPE_1__ paramValues_t ;
struct TYPE_8__ {size_t tableLen; size_t* varArray; } ;
typedef TYPE_2__ memoTable_t ;
typedef size_t ZSTD_strategy ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__ const*,TYPE_1__) ;
 size_t FUNC_2 (size_t,int) ;
 int* VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static void FUNC_3(paramValues_t* VAR_4, const memoTable_t* VAR_5, const ZSTD_strategy VAR_6)
{
    size_t VAR_7;
    const memoTable_t VAR_8 = VAR_5[VAR_6];
    VAR_4->vals[VAR_3] = VAR_6;
    for(VAR_7 = 0; VAR_7 < VAR_8.tableLen; VAR_7++) {
        int VAR_9;
        for(VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
            varInds_t VAR_10 = VAR_8.varArray[VAR_9];
            if(VAR_10 == VAR_3) continue;
            VAR_4->vals[VAR_10] = FUNC_2(VAR_10, FUNC_0(&VAR_1) % VAR_2[VAR_10]);
        }

        if(!(FUNC_1(VAR_5, *VAR_4))) break;
    }
}
