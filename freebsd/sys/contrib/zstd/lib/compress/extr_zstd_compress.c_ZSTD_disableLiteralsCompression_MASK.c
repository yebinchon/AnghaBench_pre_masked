
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int targetLength; int strategy; } ;
struct TYPE_5__ {int literalCompressionMode; TYPE_1__ cParams; } ;
typedef TYPE_2__ ZSTD_CCtx_params ;


 int VAR_0 ;



 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const ZSTD_CCtx_params* VAR_1)
{
    switch (VAR_1->literalCompressionMode) {
    case 129:
        return 0;
    case 128:
        return 1;
    default:
        FUNC_0(0 );

    case 130:
        return (VAR_1->cParams.strategy == VAR_0) && (VAR_1->cParams.targetLength > 0);
    }
}
