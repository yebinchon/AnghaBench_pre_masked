
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long time_t ;
struct tm {long tm_hour; long tm_min; long tm_sec; int tm_wday; long tm_year; long tm_yday; long tm_mon; long tm_mday; } ;


 long VAR_0 ;
 long VAR_1 ;
 size_t FUNC_0 (long) ;
 unsigned short** VAR_2 ;
 scalar_t__ FUNC_1 (long,long) ;
 long FUNC_2 (long,int) ;

void FUNC_3(time_t VAR_3, int VAR_4, struct tm *VAR_5)
{
 long VAR_6, VAR_7, VAR_8;
 const unsigned short *VAR_9;

 VAR_6 = VAR_3 / VAR_0;
 VAR_7 = VAR_3 % VAR_0;
 VAR_7 += VAR_4;
 while (VAR_7 < 0) {
  VAR_7 += VAR_0;
  --VAR_6;
 }
 while (VAR_7 >= VAR_0) {
  VAR_7 -= VAR_0;
  ++VAR_6;
 }

 VAR_5->tm_hour = VAR_7 / VAR_1;
 VAR_7 %= VAR_1;
 VAR_5->tm_min = VAR_7 / 60;
 VAR_5->tm_sec = VAR_7 % 60;


 VAR_5->tm_wday = (4 + VAR_6) % 7;
 if (VAR_5->tm_wday < 0)
  VAR_5->tm_wday += 7;

 VAR_8 = 1970;

 while (VAR_6 < 0 || VAR_6 >= (FUNC_0(VAR_8) ? 366 : 365)) {

  long VAR_10 = VAR_8 + FUNC_2(VAR_6, 365);


  VAR_6 -= (VAR_10 - VAR_8) * 365 + FUNC_1(VAR_8, VAR_10);
  VAR_8 = VAR_10;
 }

 VAR_5->tm_year = VAR_8 - 1900;

 VAR_5->tm_yday = VAR_6;

 VAR_9 = VAR_2[FUNC_0(VAR_8)];
 for (VAR_8 = 11; VAR_6 < VAR_9[VAR_8]; VAR_8--)
  continue;
 VAR_6 -= VAR_9[VAR_8];

 VAR_5->tm_mon = VAR_8;
 VAR_5->tm_mday = VAR_6 + 1;
}
