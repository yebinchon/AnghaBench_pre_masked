
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t varInds_t ;
struct TYPE_4__ {scalar_t__ cLevel; int dictBufferSize; int dictBuffer; int cctx; TYPE_1__* comprParams; } ;
struct TYPE_3__ {scalar_t__* vals; } ;
typedef TYPE_2__ BMK_initCCtxArgs ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static size_t FUNC_3(void* VAR_5) {
    const BMK_initCCtxArgs* VAR_6 = (const BMK_initCCtxArgs*)VAR_5;
    varInds_t VAR_7;
    FUNC_1(VAR_6->cctx, VAR_3);
    FUNC_2(VAR_6->cctx, VAR_2, VAR_6->cLevel);

    for(VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
        if(VAR_6->comprParams->vals[VAR_7] != VAR_1)
        FUNC_2(VAR_6->cctx, VAR_4[VAR_7], VAR_6->comprParams->vals[VAR_7]);
    }
    FUNC_0(VAR_6->cctx, VAR_6->dictBuffer, VAR_6->dictBufferSize);

    return 0;
}
