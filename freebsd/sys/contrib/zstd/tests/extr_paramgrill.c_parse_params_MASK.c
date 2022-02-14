
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t varInds_t ;
struct TYPE_3__ {int * vals; } ;
typedef TYPE_1__ paramValues_t ;


 size_t VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_0 (char const**,int ) ;
 int FUNC_1 (char const**) ;

__attribute__((used)) static int FUNC_2(const char** VAR_3, paramValues_t* VAR_4) {
    int VAR_5 = 0;
    const char* VAR_6 = *VAR_3;
    varInds_t VAR_7;
    for(VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
        if ( FUNC_0(VAR_3,VAR_2[VAR_7])
          || FUNC_0(VAR_3, VAR_1[VAR_7]) ) {
            if(**VAR_3 == '=') {
                (*VAR_3)++;
                VAR_4->vals[VAR_7] = FUNC_1(VAR_3);
                VAR_5 = 1;
                break;
            }
        }

        *VAR_3 = VAR_6;
    }
    return VAR_5;
}
