
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t inBuffTarget; size_t inBuffPos; size_t blockSize; } ;
typedef TYPE_1__ ZSTD_CCtx ;



__attribute__((used)) static size_t FUNC_0(const ZSTD_CCtx* VAR_0)
{
    size_t VAR_1 = VAR_0->inBuffTarget - VAR_0->inBuffPos;
    if (VAR_1==0) VAR_1 = VAR_0->blockSize;
    return VAR_1;
}
