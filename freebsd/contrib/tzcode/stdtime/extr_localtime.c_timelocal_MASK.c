
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_isdst; } ;


 int FUNC_0 (struct tm* const) ;

time_t
FUNC_1(struct tm *const VAR_0)
{
 if (VAR_0 != ((void*)0))
  VAR_0->tm_isdst = -1;
 return FUNC_0(VAR_0);
}
