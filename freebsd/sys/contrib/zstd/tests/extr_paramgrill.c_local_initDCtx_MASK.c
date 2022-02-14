
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dictBufferSize; int dictBuffer; int dctx; } ;
typedef TYPE_1__ BMK_initDCtxArgs ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static size_t FUNC_2(void* VAR_1) {
    const BMK_initDCtxArgs* VAR_2 = (const BMK_initDCtxArgs*)VAR_1;
    FUNC_1(VAR_2->dctx, VAR_0);
    FUNC_0(VAR_2->dctx, VAR_2->dictBuffer, VAR_2->dictBufferSize);
    return 0;
}
