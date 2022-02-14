
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {unsigned int tv_sec; unsigned int tv_nsec; } ;


 int FUNC_0 (struct timespec*,int *) ;

int FUNC_1(unsigned int VAR_0)
{
 struct timespec VAR_1;

 VAR_1.tv_sec = VAR_0 / 1000000;
 VAR_1.tv_nsec = (VAR_0 % 1000000) * 1000;
 return FUNC_0(&VAR_1, ((void*)0));
}
