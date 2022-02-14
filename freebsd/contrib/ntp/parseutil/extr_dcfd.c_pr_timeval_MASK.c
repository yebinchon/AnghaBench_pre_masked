
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
typedef int buf ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int,char*,long,long) ;

__attribute__((used)) static char *
FUNC_2(
 struct timeval *VAR_0
 )
{
 static char VAR_1[20];

 if (VAR_0->tv_sec == 0)
  FUNC_1(VAR_1, sizeof(VAR_1), "%c0.%06ld",
    (VAR_0->tv_usec < 0) ? '-' : '+',
    (long int)FUNC_0(VAR_0->tv_usec));
 else
  FUNC_1(VAR_1, sizeof(VAR_1), "%ld.%06ld",
    (long int)VAR_0->tv_sec,
    (long int)FUNC_0(VAR_0->tv_usec));
 return VAR_1;
}
