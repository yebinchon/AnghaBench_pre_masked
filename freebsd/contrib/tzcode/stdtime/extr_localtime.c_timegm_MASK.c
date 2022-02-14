
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {scalar_t__ tm_isdst; } ;


 int VAR_0 ;
 int FUNC_0 (struct tm* const,int ,long) ;

time_t
FUNC_1(struct tm *const VAR_1)
{
 if (VAR_1 != ((void*)0))
  VAR_1->tm_isdst = 0;
 return FUNC_0(VAR_1, VAR_0, 0L);
}
