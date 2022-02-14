
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
struct timespec {long tv_nsec; int tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (char*,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct timeval*,int *) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct timespec *VAR_4)
{
 struct timeval VAR_5;
 FUNC_2(&VAR_5, ((void*)0));
 VAR_4->tv_sec = VAR_5.tv_sec;
 VAR_4->tv_nsec = (long)VAR_5.tv_usec * 1000;
}
