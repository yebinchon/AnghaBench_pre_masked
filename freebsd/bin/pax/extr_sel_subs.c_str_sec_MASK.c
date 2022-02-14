
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_sec; int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; } ;


 int FUNC_0 (char*) ;
 struct tm* FUNC_1 (int*) ;
 int FUNC_2 (struct tm*) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(char *VAR_0, time_t *VAR_1)
{
 struct tm *VAR_2;
 char *VAR_3 = ((void*)0);

 VAR_2 = FUNC_1(VAR_1);
 if ((VAR_3 = FUNC_3(VAR_0, '.')) != ((void*)0)) {



  *VAR_3++ = '\0';
  if (FUNC_4(VAR_3) != 2)
   return(-1);
  if ((VAR_2->tm_sec = FUNC_0(VAR_3)) > 61)
   return(-1);
 } else
  VAR_2->tm_sec = 0;

 switch (FUNC_4(VAR_0)) {
 case 10:




  if ((VAR_2->tm_year = FUNC_0(VAR_0)) < 69)
   VAR_2->tm_year += 100;
  VAR_0 += 2;

 case 8:




  if ((VAR_2->tm_mon = FUNC_0(VAR_0)) > 12)
   return(-1);
  --VAR_2->tm_mon;
  VAR_0 += 2;

 case 6:



  if ((VAR_2->tm_mday = FUNC_0(VAR_0)) > 31)
   return(-1);
  VAR_0 += 2;

 case 4:



  if ((VAR_2->tm_hour = FUNC_0(VAR_0)) > 23)
   return(-1);
  VAR_0 += 2;

 case 2:



  if ((VAR_2->tm_min = FUNC_0(VAR_0)) > 59)
   return(-1);
  break;
 default:
  return(-1);
 }



 if ((*VAR_1 = FUNC_2(VAR_2)) == -1)
  return(-1);
 return(0);
}
