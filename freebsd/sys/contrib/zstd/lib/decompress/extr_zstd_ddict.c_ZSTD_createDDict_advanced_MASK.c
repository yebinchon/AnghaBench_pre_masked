
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ZSTD_dictLoadMethod_e ;
typedef int ZSTD_dictContentType_e ;
struct TYPE_8__ {int customFree; int customAlloc; } ;
typedef TYPE_1__ ZSTD_customMem ;
struct TYPE_9__ {TYPE_1__ cMem; } ;
typedef TYPE_2__ ZSTD_DDict ;


 int FUNC_0 (TYPE_2__* const) ;
 size_t FUNC_1 (TYPE_2__* const,void const*,size_t,int ,int ) ;
 scalar_t__ FUNC_2 (size_t const) ;
 scalar_t__ FUNC_3 (int,TYPE_1__) ;

ZSTD_DDict* FUNC_4(const void* VAR_0, size_t VAR_1,
                                      ZSTD_dictLoadMethod_e VAR_2,
                                      ZSTD_dictContentType_e VAR_3,
                                      ZSTD_customMem VAR_4)
{
    if (!VAR_4.customAlloc ^ !VAR_4.customFree) return ((void*)0);

    { ZSTD_DDict* const VAR_5 = (ZSTD_DDict*) FUNC_3(sizeof(ZSTD_DDict), VAR_4);
        if (VAR_5 == ((void*)0)) return ((void*)0);
        VAR_5->cMem = VAR_4;
        { size_t const VAR_6 = FUNC_1(VAR_5,
                                            VAR_0, VAR_1,
                                            VAR_2, VAR_3);
            if (FUNC_2(VAR_6)) {
                FUNC_0(VAR_5);
                return ((void*)0);
        } }
        return VAR_5;
    }
}
