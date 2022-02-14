
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;
struct timespec {int tv_nsec; int tv_sec; } ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 long FUNC_1 (struct timeval const*) ;
 int FUNC_2 (struct timespec*,int *) ;
 int FUNC_3 (int ,int *,int *,int *,struct timeval const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;

void
FUNC_6(const struct timeval *VAR_0)
{
 if (!VAR_0)
  return;
 FUNC_3(0, ((void*)0), ((void*)0), ((void*)0), VAR_0);

}
