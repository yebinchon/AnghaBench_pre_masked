
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int FUNC_0 (struct timeval*,int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;

uint64_t
FUNC_3(void)
{
    struct timeval VAR_1;
    uint64_t VAR_2 = (uint64_t)0U;
    int VAR_3;

    VAR_3 = FUNC_0(&VAR_1, ((void*)0));
    if (VAR_3 == 0) {
        VAR_2 = (uint64_t)VAR_1.tv_sec * 1000000U + (uint64_t)VAR_1.tv_usec;
    } else {
        FUNC_1("gettimeofday: %s", FUNC_2(VAR_0));
    }
    return VAR_2;
}
