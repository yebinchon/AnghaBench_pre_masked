
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ts ;
typedef int time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; int tm_isdst; } ;


 int FUNC_0 (unsigned char const*) ;
 int FUNC_1 (struct tm*,int ,int) ;
 int FUNC_2 (struct tm*) ;

__attribute__((used)) static time_t
FUNC_3(const unsigned char *VAR_0)
{
 int VAR_1, VAR_2;
 struct tm VAR_3;

 VAR_1 = FUNC_0(VAR_0);
 VAR_2 = FUNC_0(VAR_0+2);

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.tm_year = ((VAR_2 >> 9) & 0x7f) + 80;
 VAR_3.tm_mon = ((VAR_2 >> 5) & 0x0f) - 1;
 VAR_3.tm_mday = VAR_2 & 0x1f;
 VAR_3.tm_hour = (VAR_1 >> 11) & 0x1f;
 VAR_3.tm_min = (VAR_1 >> 5) & 0x3f;
 VAR_3.tm_sec = (VAR_1 << 1) & 0x3e;
 VAR_3.tm_isdst = -1;
 return (FUNC_2(&VAR_3));
}
