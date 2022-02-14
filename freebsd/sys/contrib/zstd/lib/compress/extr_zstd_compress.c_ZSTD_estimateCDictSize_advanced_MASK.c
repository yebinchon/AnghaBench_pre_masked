
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ZSTD_dictLoadMethod_e ;
typedef int ZSTD_compressionParameters ;
typedef int ZSTD_CDict ;


 int FUNC_0 (int,char*,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (size_t,int) ;
 size_t FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 size_t FUNC_3 (int *,int ) ;

size_t FUNC_4(
        size_t VAR_2, ZSTD_compressionParameters VAR_3,
        ZSTD_dictLoadMethod_e VAR_4)
{
    FUNC_0(5, "sizeof(ZSTD_CDict) : %u", (unsigned)sizeof(ZSTD_CDict));
    return FUNC_2(sizeof(ZSTD_CDict))
         + FUNC_2(VAR_0)
         + FUNC_3(&VAR_3, 0)
         + (VAR_4 == VAR_1 ? 0
            : FUNC_2(FUNC_1(VAR_2, sizeof(void *))));
}
