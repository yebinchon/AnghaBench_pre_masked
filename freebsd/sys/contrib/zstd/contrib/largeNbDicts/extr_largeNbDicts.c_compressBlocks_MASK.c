
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t nbSlices; int * capacities; int * slicePtrs; } ;
typedef TYPE_1__ slice_collection_t ;
typedef int ZSTD_CDict ;
typedef int ZSTD_CCtx ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int * const,int ,int ,int ,int ,int) ;
 size_t FUNC_2 (int * const,int ,int ,int ,int ,int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (int) ;

__attribute__((used)) static size_t FUNC_6(size_t* VAR_0,
                             slice_collection_t VAR_1,
                             slice_collection_t VAR_2,
                             ZSTD_CDict* VAR_3, int VAR_4)
{
    size_t const VAR_5 = VAR_2.nbSlices;
    FUNC_5(VAR_1.nbSlices == VAR_2.nbSlices);

    ZSTD_CCtx* const VAR_6 = FUNC_3();
    FUNC_5(VAR_6 != ((void*)0));

    size_t VAR_7 = 0;
    for (size_t VAR_8=0; VAR_8 < VAR_5; VAR_8++) {
        size_t VAR_9;
        if (VAR_3 == ((void*)0)) {
            VAR_9 = FUNC_1(VAR_6,
                            VAR_1.slicePtrs[VAR_8], VAR_1.capacities[VAR_8],
                            VAR_2.slicePtrs[VAR_8], VAR_2.capacities[VAR_8],
                            VAR_4);
        } else {
            VAR_9 = FUNC_2(VAR_6,
                            VAR_1.slicePtrs[VAR_8], VAR_1.capacities[VAR_8],
                            VAR_2.slicePtrs[VAR_8], VAR_2.capacities[VAR_8],
                            VAR_3);
        }
        FUNC_0(!FUNC_4(VAR_9));
        if (VAR_0) VAR_0[VAR_8] = VAR_9;
        VAR_7 += VAR_9;
    }
    return VAR_7;
}
