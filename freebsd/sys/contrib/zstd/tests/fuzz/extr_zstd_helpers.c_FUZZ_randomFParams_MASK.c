
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* noDictIDFlag; void* checksumFlag; void* contentSizeFlag; } ;
typedef TYPE_1__ ZSTD_frameParameters ;
typedef int FUZZ_dataProducer_t ;


 void* FUNC_0 (int *,int ,int) ;

ZSTD_frameParameters FUNC_1(FUZZ_dataProducer_t *VAR_0)
{

    ZSTD_frameParameters VAR_1;
    VAR_1.contentSizeFlag = FUNC_0(VAR_0, 0, 1);
    VAR_1.checksumFlag = FUNC_0(VAR_0, 0, 1);
    VAR_1.noDictIDFlag = FUNC_0(VAR_0, 0, 1);
    return VAR_1;
}
