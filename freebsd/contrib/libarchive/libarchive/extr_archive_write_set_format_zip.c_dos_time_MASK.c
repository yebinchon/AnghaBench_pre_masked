
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;


 struct tm* FUNC_0 (int const*) ;

__attribute__((used)) static unsigned int
FUNC_1(const time_t VAR_0)
{
 struct tm *VAR_1;
 unsigned int VAR_2;



 VAR_1 = FUNC_0(&VAR_0);


 if (VAR_1->tm_year < 1980 - 1900)

  VAR_2 = 0x00210000U;
 else if (VAR_1->tm_year > 2107 - 1900)

  VAR_2 = 0xff9fbf7dU;
 else {
  VAR_2 = 0;
  VAR_2 += ((VAR_1->tm_year - 80) & 0x7f) << 9;
  VAR_2 += ((VAR_1->tm_mon + 1) & 0x0f) << 5;
  VAR_2 += (VAR_1->tm_mday & 0x1f);
  VAR_2 <<= 16;
  VAR_2 += (VAR_1->tm_hour & 0x1f) << 11;
  VAR_2 += (VAR_1->tm_min & 0x3f) << 5;
  VAR_2 += (VAR_1->tm_sec & 0x3e) >> 1;
 }
 return VAR_2;
}
