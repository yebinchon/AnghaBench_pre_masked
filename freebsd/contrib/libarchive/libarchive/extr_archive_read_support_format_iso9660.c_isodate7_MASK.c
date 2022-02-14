
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tm ;
typedef scalar_t__ time_t ;
struct tm {unsigned char tm_year; unsigned char tm_mon; unsigned char tm_mday; unsigned char tm_hour; unsigned char tm_min; unsigned char tm_sec; } ;


 int FUNC_0 (struct tm*,int ,int) ;
 scalar_t__ FUNC_1 (struct tm*) ;

__attribute__((used)) static time_t
FUNC_2(const unsigned char *VAR_0)
{
 struct tm VAR_1;
 int VAR_2;
 time_t VAR_3;

 FUNC_0(&VAR_1, 0, sizeof(VAR_1));
 VAR_1.tm_year = VAR_0[0];
 VAR_1.tm_mon = VAR_0[1] - 1;
 VAR_1.tm_mday = VAR_0[2];
 VAR_1.tm_hour = VAR_0[3];
 VAR_1.tm_min = VAR_0[4];
 VAR_1.tm_sec = VAR_0[5];

 VAR_2 = ((const signed char *)VAR_0)[6];
 if (VAR_2 > -48 && VAR_2 < 52) {
  VAR_1.tm_hour -= VAR_2 / 4;
  VAR_1.tm_min -= (VAR_2 % 4) * 15;
 }
 VAR_3 = FUNC_1(&VAR_1);
 if (VAR_3 == (time_t)-1)
  return ((time_t)0);
 return (VAR_3);
}
