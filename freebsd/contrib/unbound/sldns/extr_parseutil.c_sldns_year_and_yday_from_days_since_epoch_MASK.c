
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_year; int tm_yday; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int) ;

__attribute__((used)) static void
FUNC_3(int64_t VAR_0, struct tm *VAR_1)
{
 int VAR_2 = 1970;
 int VAR_3;

 while (VAR_0 < 0 || VAR_0 >= (int64_t) (FUNC_1(VAR_2) ? 366 : 365)) {
  VAR_3 = VAR_2 + (int) FUNC_0(VAR_0, 365);
  VAR_0 -= (VAR_3 - VAR_2) * 365;
  VAR_0 -= FUNC_2(VAR_2, VAR_3);
  VAR_2 = VAR_3;
 }
 VAR_1->tm_year = VAR_2;
 VAR_1->tm_yday = (int) VAR_0;
}
