
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;


 scalar_t__ FUNC_0 (struct timeval*,int *) ;
 int FUNC_1 () ;

__attribute__((used)) static uint64_t
FUNC_2(void)
{
    struct timeval VAR_0;

    if (FUNC_0(&VAR_0, ((void*)0)) != 0) {
        FUNC_1();
    }
    return ((uint64_t) VAR_0.tv_sec) * 1000000U + (uint64_t) VAR_0.tv_usec;
}
