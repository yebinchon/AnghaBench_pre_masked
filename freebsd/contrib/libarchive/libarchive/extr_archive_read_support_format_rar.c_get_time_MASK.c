
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_isdst; } ;


 int FUNC_0 (struct tm*) ;

__attribute__((used)) static time_t
FUNC_1(int VAR_0)
{
  struct tm VAR_1;
  VAR_1.tm_sec = 2 * (VAR_0 & 0x1f);
  VAR_1.tm_min = (VAR_0 >> 5) & 0x3f;
  VAR_1.tm_hour = (VAR_0 >> 11) & 0x1f;
  VAR_1.tm_mday = (VAR_0 >> 16) & 0x1f;
  VAR_1.tm_mon = ((VAR_0 >> 21) & 0x0f) - 1;
  VAR_1.tm_year = ((VAR_0 >> 25) & 0x7f) + 80;
  VAR_1.tm_isdst = -1;
  return FUNC_0(&VAR_1);
}
