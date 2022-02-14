
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t nbDDict; int ** ddicts; } ;
typedef TYPE_1__ ddict_collection_t ;
typedef int ZSTD_DDict ;


 size_t const FUNC_0 () ;

void FUNC_1(ddict_collection_t VAR_0)
{
    size_t const VAR_1 = VAR_0.nbDDict;
    for (size_t VAR_2=0; VAR_2<VAR_1; VAR_2++) {
        size_t const VAR_3 = FUNC_0() % VAR_1;
        ZSTD_DDict* VAR_4 = VAR_0.ddicts[VAR_3];
        VAR_0.ddicts[VAR_3] = VAR_0.ddicts[VAR_2];
        VAR_0.ddicts[VAR_2] = VAR_4;
    }
    for (size_t VAR_5=0; VAR_5<VAR_1; VAR_5++) {
        size_t const VAR_6 = FUNC_0() % VAR_1;
        size_t const VAR_7 = FUNC_0() % VAR_1;
        ZSTD_DDict* VAR_8 = VAR_0.ddicts[VAR_6];
        VAR_0.ddicts[VAR_6] = VAR_0.ddicts[VAR_7];
        VAR_0.ddicts[VAR_7] = VAR_8;
    }
}
