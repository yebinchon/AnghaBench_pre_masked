
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_wday; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 struct tm* FUNC_1 (int*) ;

__attribute__((used)) static time_t
FUNC_2(time_t VAR_2, time_t VAR_3, int VAR_4,
    time_t VAR_5, time_t VAR_6)
{
 struct tm *VAR_7;
 time_t VAR_8, VAR_9;

 VAR_8 = VAR_2 - VAR_3;
 VAR_7 = FUNC_1(&VAR_8);
 VAR_9 = VAR_2;
 VAR_9 += VAR_0 * ((VAR_6 - VAR_7->tm_wday + 7) % 7);
 VAR_9 += 7 * VAR_0 * (VAR_5 <= 0 ? VAR_5 : VAR_5 - 1);
 if (VAR_4 == VAR_1)
  return FUNC_0(VAR_2, VAR_9);
 return VAR_9 - VAR_2;
}
