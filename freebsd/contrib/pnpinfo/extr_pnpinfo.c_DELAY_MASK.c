
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;


 int FUNC_0 (struct timeval*,int *) ;

void
FUNC_1 (int VAR_0)
{
    struct timeval VAR_1;
    long VAR_2, VAR_3;

    VAR_0 *= 4;

    FUNC_0 (&VAR_1, ((void*)0));
    VAR_2 = VAR_1.tv_sec * 1000000 + VAR_1.tv_usec;
    do {
 FUNC_0 (&VAR_1, ((void*)0));
 VAR_3 = VAR_1.tv_sec * 1000000 + VAR_1.tv_usec;
    } while (VAR_2 + VAR_0 > VAR_3);
}
