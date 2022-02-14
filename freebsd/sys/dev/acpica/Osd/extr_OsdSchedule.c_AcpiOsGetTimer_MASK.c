
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct bintime {int frac; scalar_t__ sec; } ;
typedef int UINT64 ;


 int FUNC_0 (struct bintime*) ;

UINT64
FUNC_1(void)
{
    struct bintime VAR_0;
    UINT64 VAR_1;

    FUNC_0(&VAR_0);
    VAR_1 = (uint64_t)VAR_0.sec * 10000000;
    VAR_1 += ((uint64_t)10000000 * (uint32_t)(VAR_0.frac >> 32)) >> 32;

    return (VAR_1);
}
