
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_year; int tm_yday; int tm_hour; int tm_min; long tm_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static long
FUNC_0 (struct tm *VAR_4, struct tm *VAR_5)
{
 int VAR_6 = VAR_4->tm_year + (VAR_3 - 1);
 int VAR_7 = VAR_5->tm_year + (VAR_3 - 1);
 int VAR_8 = (

  VAR_4->tm_yday - VAR_5->tm_yday

  + ((VAR_6 >> 2) - (VAR_7 >> 2))
  - (VAR_6/100 - VAR_7/100)
  + ((VAR_6/100 >> 2) - (VAR_7/100 >> 2))

  + (long)(VAR_6-VAR_7) * 365
  );
 return (VAR_8 * VAR_0 + (VAR_4->tm_hour - VAR_5->tm_hour) * VAR_1
     + (VAR_4->tm_min - VAR_5->tm_min) * VAR_2
     + (VAR_4->tm_sec - VAR_5->tm_sec));
}
