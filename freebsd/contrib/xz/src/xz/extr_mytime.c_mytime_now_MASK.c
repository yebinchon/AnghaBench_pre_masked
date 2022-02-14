
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
typedef int clockid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,struct timespec*) ;
 int FUNC_2 (struct timeval*,int *) ;

__attribute__((used)) static uint64_t
FUNC_3(void)
{
 struct timeval VAR_2;
 FUNC_2(&VAR_2, ((void*)0));
 return (uint64_t)(VAR_2.tv_sec) * FUNC_0(1000) + VAR_2.tv_usec / 1000;

}
