
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ZSTD_frameParameters ;
struct TYPE_12__ {unsigned long long const dictContentSize; scalar_t__ compressionLevel; } ;
typedef TYPE_1__ ZSTD_CDict ;
struct TYPE_15__ {int windowLog; } ;
struct TYPE_13__ {scalar_t__ attachDictPref; int fParams; TYPE_4__ cParams; } ;
typedef TYPE_2__ ZSTD_CCtx_params ;
struct TYPE_14__ {TYPE_2__ requestedParams; } ;
typedef TYPE_3__ ZSTD_CCtx ;
typedef int U32 ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int const) ;
 int FUNC_2 (unsigned long long const,unsigned int) ;
 int FUNC_3 (int ,int ) ;
 unsigned long long const VAR_0 ;
 unsigned long long const VAR_1 ;
 unsigned long long const VAR_2 ;
 size_t FUNC_4 (TYPE_3__* const,int *,int ,int ,int ,TYPE_1__ const* const,TYPE_2__*,unsigned long long const,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_4__ FUNC_5 (scalar_t__,unsigned long long const,unsigned long long const) ;
 TYPE_4__ FUNC_6 (TYPE_1__ const* const) ;
 int FUNC_7 (int const) ;
 int VAR_6 ;
 int VAR_7 ;

size_t FUNC_8(
    ZSTD_CCtx* const VAR_8, const ZSTD_CDict* const VAR_9,
    ZSTD_frameParameters const VAR_10, unsigned long long const VAR_11)
{
    FUNC_0(4, "ZSTD_compressBegin_usingCDict_advanced");
    FUNC_3(VAR_9==((void*)0), VAR_7);
    { ZSTD_CCtx_params VAR_12 = VAR_8->requestedParams;
        VAR_12.cParams = ( VAR_11 < VAR_2
                        || VAR_11 < VAR_9->dictContentSize * VAR_1
                        || VAR_11 == VAR_0
                        || VAR_9->compressionLevel == 0 )
                      && (VAR_12.attachDictPref != VAR_4) ?
                FUNC_6(VAR_9)
              : FUNC_5(VAR_9->compressionLevel,
                                VAR_11,
                                VAR_9->dictContentSize);




        if (VAR_11 != VAR_0) {
            U32 const VAR_13 = (U32)FUNC_2(VAR_11, 1U << 19);
            U32 const VAR_14 = VAR_13 > 1 ? FUNC_7(VAR_13 - 1) + 1 : 1;
            VAR_12.cParams.windowLog = FUNC_1(VAR_12.cParams.windowLog, VAR_14);
        }
        VAR_12.fParams = VAR_10;
        return FUNC_4(VAR_8,
                                           ((void*)0), 0, VAR_3, VAR_5,
                                           VAR_9,
                                           &VAR_12, VAR_11,
                                           VAR_6);
    }
}
