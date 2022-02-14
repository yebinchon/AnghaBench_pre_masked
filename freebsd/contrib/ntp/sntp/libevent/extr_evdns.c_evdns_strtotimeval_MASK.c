
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;


 double FUNC_0 (char const* const,char**) ;

__attribute__((used)) static int
FUNC_1(const char *const VAR_0, struct timeval *VAR_1)
{
 double VAR_2;
 char *VAR_3;
 VAR_2 = FUNC_0(VAR_0, &VAR_3);
 if (*VAR_3) return -1;
 if (VAR_2 < 0) return -1;
 VAR_1->tv_sec = (int) VAR_2;
 VAR_1->tv_usec = (int) ((VAR_2 - (int) VAR_2)*1000000);
 if (VAR_1->tv_sec == 0 && VAR_1->tv_usec < 1000)
  return -1;
 return 0;
}
