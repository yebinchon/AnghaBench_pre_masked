
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t dictSize; int cdict; int * dictBuffer; } ;
typedef TYPE_1__ ZSTD_localDict ;


 size_t FUNC_0 (int ) ;

__attribute__((used)) static size_t FUNC_1(ZSTD_localDict VAR_0)
{
    size_t const VAR_1 = VAR_0.dictBuffer != ((void*)0) ? VAR_0.dictSize : 0;
    size_t const VAR_2 = FUNC_0(VAR_0.cdict);
    return VAR_1 + VAR_2;
}
