
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fParams; int cParams; } ;
typedef TYPE_1__ ZSTD_parameters ;
struct TYPE_7__ {int compressionLevel; int fParams; int cParams; } ;
typedef TYPE_2__ ZSTD_CCtx_params ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;

size_t FUNC_5(ZSTD_CCtx_params* VAR_2, ZSTD_parameters VAR_3)
{
    FUNC_1(!VAR_2, VAR_0);
    FUNC_0( FUNC_2(VAR_3.cParams) );
    FUNC_4(VAR_2, 0, sizeof(*VAR_2));
    FUNC_3(!FUNC_2(VAR_3.cParams));
    VAR_2->cParams = VAR_3.cParams;
    VAR_2->fParams = VAR_3.fParams;
    VAR_2->compressionLevel = VAR_1;
    return 0;
}
