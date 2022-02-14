
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t varInds_t ;
struct TYPE_4__ {scalar_t__* vals; } ;
typedef TYPE_1__ paramValues_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static paramValues_t FUNC_0(paramValues_t VAR_3)
{
    varInds_t VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        if (VAR_3.vals[VAR_4] == VAR_1) {
            VAR_3.vals[VAR_4] = VAR_2[VAR_4];
        }
    }
    return VAR_3;
}
