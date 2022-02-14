
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_year; int tm_mon; int tm_mday; int tm_isdst; int tm_hour; int tm_min; int tm_sec; } ;


 struct tm* FUNC_0 (struct tm*) ;

__attribute__((used)) static int
FUNC_1(
 register struct tm * VAR_0,
 register struct tm * VAR_1
 )
{
 register int VAR_2;



 if ((VAR_2 = (VAR_0->tm_year - VAR_1->tm_year)) == 0 &&
     (VAR_2 = (VAR_0->tm_mon - VAR_1->tm_mon)) == 0)
     VAR_2 = (VAR_0->tm_mday - VAR_1->tm_mday);

 if(VAR_2 != 0)
     return VAR_2;



 if(VAR_0->tm_isdst == 1 && !VAR_1->tm_isdst)
     VAR_1 = FUNC_0(VAR_1);
 else if(VAR_1->tm_isdst == 1 && !VAR_0->tm_isdst)
     VAR_0 = FUNC_0(VAR_0);



 if ((VAR_2 = (VAR_0->tm_hour - VAR_1->tm_hour)) == 0 &&
     (VAR_2 = (VAR_0->tm_min - VAR_1->tm_min)) == 0)
     VAR_2 = VAR_0->tm_sec - VAR_1->tm_sec;
 return VAR_2;
}
