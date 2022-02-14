
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fParams; int cParams; } ;
typedef TYPE_1__ ZSTD_parameters ;
typedef int ZSTD_frameParameters ;
typedef int ZSTD_compressionParameters ;



__attribute__((used)) static ZSTD_parameters FUNC_0(ZSTD_compressionParameters VAR_0, ZSTD_frameParameters VAR_1)
{
    ZSTD_parameters VAR_2;
    VAR_2.cParams = VAR_0;
    VAR_2.fParams = VAR_1;
    return VAR_2;
}
