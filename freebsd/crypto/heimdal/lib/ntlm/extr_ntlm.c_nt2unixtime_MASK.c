
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ time_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static time_t
FUNC_0(uint64_t VAR_1)
{
    VAR_1 = ((VAR_1 - (uint64_t)VAR_0) / (uint64_t)10000000);
    if (VAR_1 > (((uint64_t)(time_t)(~(uint64_t)0)) >> 1))
 return 0;
    return (time_t)VAR_1;
}
