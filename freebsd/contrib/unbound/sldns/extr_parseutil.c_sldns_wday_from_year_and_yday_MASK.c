
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_wday; int tm_year; int tm_yday; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void
FUNC_2(struct tm *VAR_0)
{
 VAR_0->tm_wday = 4
   + FUNC_0((VAR_0->tm_year - 1970), 7) * FUNC_0(365, 7)
   + FUNC_1(1970, VAR_0->tm_year)
   + VAR_0->tm_yday;
 VAR_0->tm_wday = FUNC_0(VAR_0->tm_wday, 7);
 if (VAR_0->tm_wday < 0) {
  VAR_0->tm_wday += 7;
 }
}
