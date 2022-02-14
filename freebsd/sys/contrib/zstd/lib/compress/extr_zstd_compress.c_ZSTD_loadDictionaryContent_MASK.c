
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_16__ {int const* const base; } ;
struct TYPE_14__ {TYPE_3__ window; void* nextToUpdate; int cParams; void* loadedDictEnd; } ;
typedef TYPE_1__ ZSTD_matchState_t ;
typedef int ZSTD_dictTableLoadMethod_e ;
typedef int ZSTD_cwksp ;
struct TYPE_13__ {int strategy; } ;
struct TYPE_15__ {TYPE_12__ cParams; scalar_t__ forceWindow; } ;
typedef TYPE_2__ ZSTD_CCtx_params ;
typedef void* U32 ;
typedef int BYTE ;


 size_t VAR_0 ;
 size_t FUNC_0 (size_t const,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_12__,int ) ;






 int FUNC_2 (TYPE_1__*,int const* const,int ) ;
 int FUNC_3 (TYPE_1__*,int const* const,int ) ;

 int FUNC_4 (TYPE_1__*,int const* const) ;


 int FUNC_5 (TYPE_1__*,int *,TYPE_2__ const*,int const*,int const* const) ;
 int FUNC_6 (TYPE_1__*,int const* const,int const* const) ;
 int FUNC_7 (TYPE_3__*,void const*,size_t) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static size_t FUNC_9(ZSTD_matchState_t* VAR_2,
                                         ZSTD_cwksp* VAR_3,
                                         ZSTD_CCtx_params const* VAR_4,
                                         const void* VAR_5, size_t VAR_6,
                                         ZSTD_dictTableLoadMethod_e VAR_7)
{
    const BYTE* VAR_8 = (const BYTE*) VAR_5;
    const BYTE* const VAR_9 = VAR_8 + VAR_6;

    FUNC_7(&VAR_2->window, VAR_5, VAR_6);
    VAR_2->loadedDictEnd = VAR_4->forceWindow ? 0 : (U32)(VAR_9 - VAR_2->window.base);


    FUNC_1(VAR_4->cParams, VAR_2->cParams);

    if (VAR_6 <= VAR_0) return 0;

    while (VAR_9 - VAR_8 > VAR_0) {
        size_t const VAR_10 = (size_t)(VAR_9 - VAR_8);
        size_t const VAR_11 = FUNC_0(VAR_10, VAR_1);
        const BYTE* const VAR_12 = VAR_8 + VAR_11;

        FUNC_5(VAR_2, VAR_3, VAR_4, VAR_8, VAR_12);

        switch(VAR_4->cParams.strategy)
        {
        case 131:
            FUNC_3(VAR_2, VAR_12, VAR_7);
            break;
        case 132:
            FUNC_2(VAR_2, VAR_12, VAR_7);
            break;

        case 130:
        case 129:
        case 128:
            if (VAR_11 >= VAR_0)
                FUNC_4(VAR_2, VAR_12-VAR_0);
            break;

        case 136:
        case 135:
        case 134:
        case 133:
            if (VAR_11 >= VAR_0)
                FUNC_6(VAR_2, VAR_12-VAR_0, VAR_12);
            break;

        default:
            FUNC_8(0);
        }

        VAR_8 = VAR_12;
    }

    VAR_2->nextToUpdate = (U32)(VAR_9 - VAR_2->window.base);
    return 0;
}
