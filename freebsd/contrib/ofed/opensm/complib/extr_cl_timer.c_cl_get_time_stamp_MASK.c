
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;


 int FUNC_0 (struct timeval*,int *) ;

uint64_t FUNC_1(void)
{
 uint64_t VAR_0;
 struct timeval VAR_1;

 FUNC_0(&VAR_1, ((void*)0));


 VAR_0 = ((uint64_t) VAR_1.tv_sec * 1000000) + (uint64_t) VAR_1.tv_usec;

 return (VAR_0);
}
