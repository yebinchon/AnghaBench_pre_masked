
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t nbDDict; int ** ddicts; } ;
typedef TYPE_1__ ddict_collection_t ;
typedef int ZSTD_DDict ;


 int * FUNC_0 (void const*,size_t) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_0 ;
 int ** FUNC_2 (size_t) ;

__attribute__((used)) static ddict_collection_t FUNC_3(const void* VAR_1, size_t VAR_2, size_t VAR_3)
{
    ZSTD_DDict** const VAR_4 = FUNC_2(VAR_3 * sizeof(ZSTD_DDict*));
    FUNC_1(VAR_4 != ((void*)0));
    if (VAR_4==((void*)0)) return VAR_0;
    for (size_t VAR_5=0; VAR_5 < VAR_3; VAR_5++) {
        VAR_4[VAR_5] = FUNC_0(VAR_1, VAR_2);
        FUNC_1(VAR_4[VAR_5] != ((void*)0));
    }
    ddict_collection_t VAR_6;
    VAR_6.ddicts = VAR_4;
    VAR_6.nbDDict = VAR_3;
    return VAR_6;
}
