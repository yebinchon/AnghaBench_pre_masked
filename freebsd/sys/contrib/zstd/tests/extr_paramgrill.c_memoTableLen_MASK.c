
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t varInds_t ;


 size_t* VAR_0 ;
 size_t const VAR_1 ;

__attribute__((used)) static size_t FUNC_0(const varInds_t* VAR_2, const size_t VAR_3) {
    size_t VAR_4 = 1;
    size_t VAR_5;
    for(VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        if(VAR_2[VAR_5] == VAR_1) continue;
        VAR_4 *= VAR_0[VAR_2[VAR_5]];
    }
    return VAR_4;
}
