
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ tv_nsec; int tv_sec; } ;
typedef TYPE_1__ UTIL_time_t ;



__attribute__((used)) static UTIL_time_t FUNC_0(UTIL_time_t VAR_0, UTIL_time_t VAR_1)
{
    UTIL_time_t VAR_2;
    if (VAR_1.tv_nsec < VAR_0.tv_nsec) {
        VAR_2.tv_sec = (VAR_1.tv_sec - 1) - VAR_0.tv_sec;
        VAR_2.tv_nsec = (VAR_1.tv_nsec + 1000000000ULL) - VAR_0.tv_nsec;
    } else {
        VAR_2.tv_sec = VAR_1.tv_sec - VAR_0.tv_sec;
        VAR_2.tv_nsec = VAR_1.tv_nsec - VAR_0.tv_nsec;
    }
    return VAR_2;
}
