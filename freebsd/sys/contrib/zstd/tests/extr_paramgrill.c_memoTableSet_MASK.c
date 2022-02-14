
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t* vals; } ;
typedef TYPE_1__ paramValues_t ;
struct TYPE_7__ {int tableType; int tableLen; int * table; int varLen; int varArray; } ;
typedef TYPE_2__ memoTable_t ;
typedef int U32 ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (size_t**,int,int ) ;

 size_t FUNC_1 (TYPE_1__ const*,int ,int ) ;

 size_t VAR_1 ;


__attribute__((used)) static void FUNC_2(const memoTable_t* VAR_2, const paramValues_t VAR_3, const BYTE VAR_4) {
    const memoTable_t VAR_5 = VAR_2[VAR_3.vals[VAR_1]];
    switch(VAR_5.tableType) {
        case 130:
            VAR_5.table[FUNC_1(&VAR_3, VAR_5.varArray, VAR_5.varLen)] = VAR_4; break;
        case 128:
            VAR_5.table[(FUNC_0(&VAR_3.vals, sizeof(U32) * VAR_0, 0) >> 3) % VAR_5.tableLen] = VAR_4; break;
        case 129:
            break;
    }
}
