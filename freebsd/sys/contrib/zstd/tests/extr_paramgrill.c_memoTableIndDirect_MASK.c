
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t varInds_t ;
struct TYPE_3__ {int * vals; } ;
typedef TYPE_1__ paramValues_t ;


 scalar_t__ FUNC_0 (size_t,int ) ;
 unsigned int* VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static unsigned FUNC_1(const paramValues_t* VAR_2, const varInds_t* VAR_3, const size_t VAR_4) {
    size_t VAR_5;
    unsigned VAR_6 = 0;
    for(VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        varInds_t VAR_7 = VAR_3[VAR_5];
        if(VAR_7 == VAR_1) continue;
        VAR_6 *= VAR_0[VAR_7]; VAR_6 += (unsigned)FUNC_0(VAR_7, VAR_2->vals[VAR_7]);
    }
    return VAR_6;
}
