
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fParams; int cParams; } ;
typedef TYPE_1__ ZSTD_parameters ;
typedef int FUZZ_dataProducer_t ;


 int FUNC_0 (size_t,int *) ;
 int FUNC_1 (int *) ;

ZSTD_parameters FUNC_2(size_t VAR_0, FUZZ_dataProducer_t *VAR_1)
{
    ZSTD_parameters VAR_2;
    VAR_2.cParams = FUNC_0(VAR_0, VAR_1);
    VAR_2.fParams = FUNC_1(VAR_1);
    return VAR_2;
}
