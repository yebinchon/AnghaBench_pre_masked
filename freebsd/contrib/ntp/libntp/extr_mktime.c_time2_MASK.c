
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_year; int tm_mon; scalar_t__ tm_isdst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct tm* FUNC_0 (int*) ;
 size_t FUNC_1 (int) ;
 struct tm* FUNC_2 (int*) ;
 int** VAR_8 ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (struct tm*,struct tm*) ;
 scalar_t__* VAR_9 ;

__attribute__((used)) static time_t
FUNC_5(
 struct tm * VAR_10,
 int * VAR_11,
 int VAR_12
 )
{
 register int VAR_13;
 register int VAR_14;
 register int VAR_15;
 register int VAR_16;
 time_t VAR_17;
 struct tm VAR_18, VAR_19;

 *VAR_11 = VAR_0;
 VAR_18 = *VAR_10;
 if (VAR_18.tm_sec >= VAR_4 + 2 || VAR_18.tm_sec < 0)
  FUNC_3(&VAR_18.tm_min, &VAR_18.tm_sec, VAR_4);
 FUNC_3(&VAR_18.tm_hour, &VAR_18.tm_min, VAR_2);
 FUNC_3(&VAR_18.tm_mday, &VAR_18.tm_hour, VAR_1);
 FUNC_3(&VAR_18.tm_year, &VAR_18.tm_mon, VAR_3);
 while (VAR_18.tm_mday <= 0) {
  --VAR_18.tm_year;
  VAR_18.tm_mday +=
   VAR_9[FUNC_1(VAR_18.tm_year + VAR_5)];
 }
 for ( ; ; ) {
  VAR_15 = VAR_8[FUNC_1(VAR_18.tm_year +
   VAR_5)][VAR_18.tm_mon];
  if (VAR_18.tm_mday <= VAR_15)
   break;
  VAR_18.tm_mday -= VAR_15;
  if (++VAR_18.tm_mon >= VAR_3) {
   VAR_18.tm_mon = 0;
   ++VAR_18.tm_year;
  }
 }
 VAR_16 = VAR_18.tm_sec;
 VAR_18.tm_sec = 0;





 for (VAR_14 = 0, VAR_17 = 1; VAR_17 > 0; ++VAR_14, VAR_17 <<= 1)
  ;




 VAR_17 = (VAR_17 < 0) ? 0 : ((time_t) 1 << VAR_14);
 for ( ; ; ) {
  if (VAR_12)
   VAR_19 = *FUNC_2(&VAR_17);
  else
   VAR_19 = *FUNC_0(&VAR_17);
  VAR_13 = FUNC_4(&VAR_19, &VAR_18);
  if (VAR_13 != 0) {
   if (VAR_14-- < 0)
    return VAR_7;
   if (VAR_14 < 0)
    --VAR_17;
   else if (VAR_13 > 0)
    VAR_17 -= (time_t) 1 << VAR_14;
   else VAR_17 += (time_t) 1 << VAR_14;
   continue;
  }
  if (VAR_18.tm_isdst < 0 || VAR_19.tm_isdst == VAR_18.tm_isdst)
   break;

  return VAR_7;
 }
 VAR_17 += VAR_16;
 if (VAR_12)
  *VAR_10 = *FUNC_2(&VAR_17);
 else
  *VAR_10 = *FUNC_0(&VAR_17);
 *VAR_11 = VAR_6;
 return VAR_17;
}
