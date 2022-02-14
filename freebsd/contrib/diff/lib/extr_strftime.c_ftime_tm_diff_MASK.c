
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_year; int tm_yday; int tm_hour; int tm_min; int tm_sec; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0 (const struct tm *VAR_1, const struct tm *VAR_2)
{



  int VAR_3 = (VAR_1->tm_year >> 2) + (VAR_0 >> 2) - ! (VAR_1->tm_year & 3);
  int VAR_4 = (VAR_2->tm_year >> 2) + (VAR_0 >> 2) - ! (VAR_2->tm_year & 3);
  int VAR_5 = VAR_3 / 25 - (VAR_3 % 25 < 0);
  int VAR_6 = VAR_4 / 25 - (VAR_4 % 25 < 0);
  int VAR_7 = VAR_5 >> 2;
  int VAR_8 = VAR_6 >> 2;
  int VAR_9 = (VAR_3 - VAR_4) - (VAR_5 - VAR_6) + (VAR_7 - VAR_8);
  int VAR_10 = VAR_1->tm_year - VAR_2->tm_year;
  int VAR_11 = (365 * VAR_10 + VAR_9
       + (VAR_1->tm_yday - VAR_2->tm_yday));
  return (60 * (60 * (24 * VAR_11 + (VAR_1->tm_hour - VAR_2->tm_hour))
  + (VAR_1->tm_min - VAR_2->tm_min))
   + (VAR_1->tm_sec - VAR_2->tm_sec));
}
