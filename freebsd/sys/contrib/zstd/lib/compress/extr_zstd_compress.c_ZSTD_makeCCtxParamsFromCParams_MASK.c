
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int cctxParams ;
typedef int ZSTD_compressionParameters ;
struct TYPE_5__ {int contentSizeFlag; } ;
struct TYPE_6__ {TYPE_1__ fParams; int compressionLevel; int cParams; } ;
typedef TYPE_2__ ZSTD_CCtx_params ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

__attribute__((used)) static ZSTD_CCtx_params FUNC_3(
        ZSTD_compressionParameters VAR_1)
{
    ZSTD_CCtx_params VAR_2;
    FUNC_2(&VAR_2, 0, sizeof(VAR_2));
    VAR_2.cParams = VAR_1;
    VAR_2.compressionLevel = VAR_0;
    FUNC_1(!FUNC_0(VAR_1));
    VAR_2.fParams.contentSizeFlag = 1;
    return VAR_2;
}
