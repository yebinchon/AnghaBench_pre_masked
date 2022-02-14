
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timestamp {long hour; long minute; long second; long month; long day; int centiseconds; int hundredsOfMicroseconds; int microseconds; void* year; void* typeAndTimezone; } ;
struct timespec {int tv_sec; int tv_nsec; } ;
typedef int int16_t ;
struct TYPE_2__ {int tz_minuteswest; } ;


 scalar_t__ FUNC_0 (long) ;
 long VAR_0 ;
 long VAR_1 ;
 size_t FUNC_1 (long) ;
 unsigned short** VAR_2 ;
 void* FUNC_2 (long) ;
 TYPE_1__ VAR_3 ;

struct timestamp *
FUNC_3(struct timestamp *VAR_4, struct timespec VAR_5)
{
 long int VAR_6, VAR_7, VAR_8;
 const unsigned short int *VAR_9;
 int16_t VAR_10;

 VAR_10 = -VAR_3.tz_minuteswest;

 if (!VAR_4)
  return ((void*)0);

 VAR_4->typeAndTimezone = FUNC_2(0x1000 | (VAR_10 & 0x0FFF));

 VAR_5.tv_sec += VAR_10 * 60;
 VAR_6 = VAR_5.tv_sec / VAR_0;
 VAR_7 = VAR_5.tv_sec % VAR_0;
 VAR_4->hour = VAR_7 / VAR_1;
 VAR_7 %= VAR_1;
 VAR_4->minute = VAR_7 / 60;
 VAR_4->second = VAR_7 % 60;
 VAR_8 = 1970;




 while (VAR_6 < 0 || VAR_6 >= (FUNC_1(VAR_8) ? 366 : 365)) {
  long int VAR_11 = VAR_8 + VAR_6 / 365 - (VAR_6 % 365 < 0);


  VAR_6 -= ((VAR_11 - VAR_8) * 365
    + (((VAR_11 - 1) / (4) - ((VAR_11 - 1) % (4) < 0)) - ((VAR_11 - 1) / (100) - ((VAR_11 - 1) % (100) < 0)) + ((VAR_11 - 1) / (400) - ((VAR_11 - 1) % (400) < 0)))
    - (((VAR_8 - 1) / (4) - ((VAR_8 - 1) % (4) < 0)) - ((VAR_8 - 1) / (100) - ((VAR_8 - 1) % (100) < 0)) + ((VAR_8 - 1) / (400) - ((VAR_8 - 1) % (400) < 0))));
  VAR_8 = VAR_11;
 }
 VAR_4->year = FUNC_2(VAR_8);
 VAR_9 = VAR_2[FUNC_1(VAR_8)];
 for (VAR_8 = 11; VAR_6 < (long int)VAR_9[VAR_8]; --VAR_8)
  continue;
 VAR_6 -= VAR_9[VAR_8];
 VAR_4->month = VAR_8 + 1;
 VAR_4->day = VAR_6 + 1;

 VAR_4->centiseconds = VAR_5.tv_nsec / 10000000;
 VAR_4->hundredsOfMicroseconds = (VAR_5.tv_nsec / 1000 -
     VAR_4->centiseconds * 10000) / 100;
 VAR_4->microseconds = (VAR_5.tv_nsec / 1000 - VAR_4->centiseconds * 10000 -
         VAR_4->hundredsOfMicroseconds * 100);
 return VAR_4;
}
