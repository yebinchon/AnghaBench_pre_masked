
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_3__ {scalar_t__ year; int month; int day; scalar_t__ hour; scalar_t__ minute; int utcoffset; scalar_t__ second; } ;
typedef TYPE_1__ clocktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static time_t
FUNC_5(
  clocktime_t *VAR_5,
  unsigned *VAR_6
  )
{

 static int VAR_7[] =
 {
  0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
 };
 register int VAR_8;
 time_t VAR_9;




 if ( VAR_5->year < VAR_4 )
  VAR_5->year += 100;

 if ( VAR_5->year < VAR_3 )
     VAR_5->year += 1900;




 if (VAR_5->year < (VAR_4 + 1900) )
 {
  { if (VAR_6) *VAR_6 = (VAR_2|VAR_0); };
  return -1;
 }







 VAR_9 = FUNC_4( VAR_5->year ) - FUNC_4( 1970 );


 if (VAR_5->month <= 0 || VAR_5->month > 12)
 {
  { if (VAR_6) *VAR_6 = (VAR_2|VAR_0); };
  return -1;
 }
 for (VAR_8 = 1; VAR_8 < VAR_5->month; VAR_8++)
 {
  VAR_9 += VAR_7[VAR_8];
 }

 if (VAR_5->day < 1 || ((VAR_5->month == 2 && FUNC_3(VAR_5->year) == 366) ?
          VAR_5->day > 29 : VAR_5->day > VAR_7[VAR_5->month]))
 {
  { if (VAR_6) *VAR_6 = (VAR_2|VAR_0); };
  return -1;
 }




 VAR_9 += VAR_5->day - 1;


 if (VAR_5->hour < 0 || VAR_5->hour >= 24)
 {
  { if (VAR_6) *VAR_6 = (VAR_2|VAR_1); };
  return -1;
 }




 VAR_9 = FUNC_1(VAR_9) + VAR_5->hour;


 if (VAR_5->minute < 0 || VAR_5->minute > 59)
 {
  { if (VAR_6) *VAR_6 = (VAR_2|VAR_1); };
  return -1;
 }




 VAR_9 = FUNC_2(VAR_9) + VAR_5->minute;





 VAR_9 += VAR_5->utcoffset;

 if (VAR_5->second < 0 || VAR_5->second > 60)
 {
  { if (VAR_6) *VAR_6 = (VAR_2|VAR_1); };
  return -1;
 }




 VAR_9 = FUNC_2(VAR_9) + VAR_5->second;

 return VAR_9;
}
