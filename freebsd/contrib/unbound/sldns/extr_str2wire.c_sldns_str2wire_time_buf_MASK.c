
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int tm ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct tm*,int ,int) ;
 scalar_t__ FUNC_2 (struct tm*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char const*,char*,int*,int*,int*,int*,int*,int*) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char*,char**,int) ;

int FUNC_7(const char* VAR_3, uint8_t* VAR_4, size_t* VAR_5)
{

 struct tm VAR_6;
 if(*VAR_5 < 4)
  return VAR_0;


 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 if (FUNC_5(VAR_3) == 14 && FUNC_4(VAR_3, "%4d%2d%2d%2d%2d%2d",
  &VAR_6.tm_year, &VAR_6.tm_mon, &VAR_6.tm_mday, &VAR_6.tm_hour,
  &VAR_6.tm_min, &VAR_6.tm_sec) == 6) {
     VAR_6.tm_year -= 1900;
     VAR_6.tm_mon--;

  if (VAR_6.tm_year < 70)
   return VAR_2;
  if (VAR_6.tm_mon < 0 || VAR_6.tm_mon > 11)
   return VAR_2;
  if (VAR_6.tm_mday < 1 || VAR_6.tm_mday > 31)
   return VAR_2;
  if (VAR_6.tm_hour < 0 || VAR_6.tm_hour > 23)
   return VAR_2;
  if (VAR_6.tm_min < 0 || VAR_6.tm_min > 59)
   return VAR_2;
  if (VAR_6.tm_sec < 0 || VAR_6.tm_sec > 59)
   return VAR_2;

  FUNC_3(VAR_4, (uint32_t)FUNC_2(&VAR_6));
 } else {

  char *VAR_7;
  uint32_t VAR_8 = (uint32_t)FUNC_6((char*)VAR_3, &VAR_7, 10);
  if(*VAR_7 != 0)
   return FUNC_0(VAR_2,
    VAR_7-(char*)VAR_3);
  FUNC_3(VAR_4, VAR_8);
 }
 *VAR_5 = 4;
 return VAR_1;
}
