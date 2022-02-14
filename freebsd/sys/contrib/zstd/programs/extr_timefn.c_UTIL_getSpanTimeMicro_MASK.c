
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned long long tv_sec; unsigned long long tv_nsec; } ;
typedef TYPE_1__ UTIL_time_t ;
typedef unsigned long long PTime ;


 TYPE_1__ FUNC_0 (TYPE_1__,TYPE_1__) ;

PTime FUNC_1(UTIL_time_t VAR_0, UTIL_time_t VAR_1)
{
    UTIL_time_t const VAR_2 = FUNC_0(VAR_0, VAR_1);
    PTime VAR_3 = 0;
    VAR_3 += 1000000ULL * VAR_2.tv_sec;
    VAR_3 += VAR_2.tv_nsec / 1000ULL;
    return VAR_3;
}
