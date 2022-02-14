
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {size_t tm_wday; size_t tm_mon; int tm_sec; int tm_min; int tm_hour; scalar_t__ tm_year; int tm_mday; } ;


 int FUNC_0 (char*,size_t const,char*,char const*,int ,char const*,scalar_t__,int ,int ,int ) ;
 struct tm* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct tm*) ;
 int FUNC_3 (int *) ;

int
FUNC_4(char *VAR_0, const size_t VAR_1, const struct tm *VAR_2)
{
 static const char *VAR_3[] =
  { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
 static const char *VAR_4[] =
  { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };

 time_t VAR_5 = FUNC_3(((void*)0));


 struct tm VAR_6;



 if (VAR_2 == ((void*)0)) {




  FUNC_2(&VAR_5, &VAR_6);
  VAR_2 = &VAR_6;

 }

 return FUNC_0(
  VAR_0, VAR_1, "%s, %02d %s %4d %02d:%02d:%02d GMT",
  VAR_3[VAR_2->tm_wday], VAR_2->tm_mday, VAR_4[VAR_2->tm_mon],
  1900 + VAR_2->tm_year, VAR_2->tm_hour, VAR_2->tm_min, VAR_2->tm_sec);
}
