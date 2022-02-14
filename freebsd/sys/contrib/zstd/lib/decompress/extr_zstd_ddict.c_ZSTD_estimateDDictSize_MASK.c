
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ZSTD_dictLoadMethod_e ;
typedef int ZSTD_DDict ;


 scalar_t__ VAR_0 ;

size_t FUNC_0(size_t VAR_1, ZSTD_dictLoadMethod_e VAR_2)
{
    return sizeof(ZSTD_DDict) + (VAR_2 == VAR_0 ? 0 : VAR_1);
}
