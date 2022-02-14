
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* rep; } ;
typedef TYPE_1__ repcodes_t ;
typedef int newReps ;
typedef scalar_t__ U32 ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_0 (TYPE_1__*,scalar_t__ const*,int) ;

__attribute__((used)) static repcodes_t FUNC_1(U32 const VAR_2[3], U32 const VAR_3, U32 const VAR_4)
{
    repcodes_t VAR_5;
    if (VAR_3 >= VAR_1) {
        VAR_5.rep[2] = VAR_2[1];
        VAR_5.rep[1] = VAR_2[0];
        VAR_5.rep[0] = VAR_3 - VAR_0;
    } else {
        U32 const VAR_6 = VAR_3 + VAR_4;
        if (VAR_6 > 0) {
            U32 const VAR_7 = (VAR_6==VAR_1) ? (VAR_2[0] - 1) : VAR_2[VAR_6];
            VAR_5.rep[2] = (VAR_6 >= 2) ? VAR_2[1] : VAR_2[2];
            VAR_5.rep[1] = VAR_2[0];
            VAR_5.rep[0] = VAR_7;
        } else {
            FUNC_0(&VAR_5, VAR_2, sizeof(VAR_5));
        }
    }
    return VAR_5;
}
