
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {int tm_hour; int tm_min; int tm_year; int tm_yday; } ;
typedef int int32_t ;


 struct tm* FUNC_0 (scalar_t__*) ;
 struct tm* FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (int *) ;

int32_t
FUNC_3(time_t VAR_0)
{
 register int VAR_1, VAR_2;
 register struct tm *VAR_3, *VAR_4;
 struct tm VAR_5;

 if (VAR_0 == 0)
  VAR_0 = FUNC_2(((void*)0));
 VAR_3 = &VAR_5;
 *VAR_3 = *FUNC_0(&VAR_0);
 VAR_4 = FUNC_1(&VAR_0);
 VAR_1 = (VAR_4->tm_hour - VAR_3->tm_hour) * 60 * 60 +
     (VAR_4->tm_min - VAR_3->tm_min) * 60;






 VAR_2 = VAR_4->tm_year - VAR_3->tm_year;
 if (VAR_2 == 0)
  VAR_2 = VAR_4->tm_yday - VAR_3->tm_yday;
 VAR_1 += VAR_2 * 24 * 60 * 60;

 return (VAR_1);
}
