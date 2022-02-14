
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int strategy; int targetLength; int minMatch; int searchLog; int chainLog; int hashLog; int windowLog; } ;
typedef TYPE_1__ ZSTD_compressionParameters ;
typedef int ZSTD_CCtx ;
typedef int FUZZ_dataProducer_t ;


 scalar_t__ FUNC_0 (int *,int ,int) ;
 TYPE_1__ FUNC_1 (size_t,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int,int *) ;

void FUNC_4(ZSTD_CCtx *VAR_28, size_t VAR_29, FUZZ_dataProducer_t *VAR_30)
{
    ZSTD_compressionParameters VAR_31 = FUNC_1(VAR_29, VAR_30);
    FUNC_2(VAR_28, VAR_27, VAR_31.windowLog);
    FUNC_2(VAR_28, VAR_14, VAR_31.hashLog);
    FUNC_2(VAR_28, VAR_7, VAR_31.chainLog);
    FUNC_2(VAR_28, VAR_23, VAR_31.searchLog);
    FUNC_2(VAR_28, VAR_20, VAR_31.minMatch);
    FUNC_2(VAR_28, VAR_26, VAR_31.targetLength);
    FUNC_2(VAR_28, VAR_25, VAR_31.strategy);

    FUNC_3(VAR_28, VAR_9, 0, 1, VAR_30);
    FUNC_3(VAR_28, VAR_8, 0, 1, VAR_30);
    FUNC_3(VAR_28, VAR_10, 0, 1, VAR_30);

    FUNC_3(VAR_28, VAR_11, 0, 1, VAR_30);
    FUNC_3(VAR_28, VAR_16, VAR_0, 16, VAR_30);
    FUNC_3(VAR_28, VAR_18, VAR_5,
            VAR_4, VAR_30);
    FUNC_3(VAR_28, VAR_15, 0, VAR_1,
            VAR_30);
    FUNC_3(VAR_28, VAR_17, VAR_3,
            VAR_2, VAR_30);

    FUNC_3(VAR_28, VAR_21, 0, 2, VAR_30);
    FUNC_3(VAR_28, VAR_22, 0, 1, VAR_30);
    FUNC_3(VAR_28, VAR_13, 0, 1, VAR_30);
    FUNC_3(VAR_28, VAR_19, 0, 2, VAR_30);
    FUNC_3(VAR_28, VAR_12, 0, 2, VAR_30);
    if (FUNC_0(VAR_30, 0, 1) == 0) {
      FUNC_3(VAR_28, VAR_24, VAR_6, 2 * VAR_29, VAR_30);
    }
}
