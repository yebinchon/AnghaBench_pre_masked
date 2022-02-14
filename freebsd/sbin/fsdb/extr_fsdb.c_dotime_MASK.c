
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; int tm_isdst; } ;
typedef int int32_t ;


 int FUNC_0 () ;
 int FUNC_1 (struct tm*) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char**,int ) ;
 int FUNC_5 (char*) ;

int
FUNC_6(char *VAR_0, time_t *VAR_1, int32_t *VAR_2)
{
    char *VAR_3, *VAR_4;
    struct tm VAR_5;
    int32_t VAR_6;
    VAR_3 = FUNC_2(VAR_0, '.');
    if (VAR_3) {
 *VAR_3 = '\0';
 VAR_6 = FUNC_4(++VAR_3, &VAR_4, 0);
 if (VAR_4 == VAR_3 || *VAR_4 != '\0' || VAR_6 >= 1000000000 || VAR_6 < 0) {
  FUNC_5("invalid nanoseconds");
  goto badformat;
 }
    } else
 VAR_6 = 0;
    if (FUNC_3(VAR_0) != 14) {
badformat:
 FUNC_5("date format: YYYYMMDDHHMMSS[.nsec]");
 return 1;
    }
    *VAR_2 = VAR_6;

    for (VAR_3 = VAR_0; *VAR_3; VAR_3++)
 if (*VAR_3 < '0' || *VAR_3 > '9')
     goto badformat;

    VAR_3 = VAR_0;

    VAR_5.tm_year = ((*VAR_3++) - '0');
    VAR_5.tm_year = ((*VAR_3++) - '0') + VAR_5.tm_year * 10;
    VAR_5.tm_year = ((*VAR_3++) - '0') + VAR_5.tm_year * 10;
    VAR_5.tm_year = ((*VAR_3++) - '0') + VAR_5.tm_year * 10 - 1900;
    VAR_5.tm_mon = ((*VAR_3++) - '0');
    VAR_5.tm_mon = ((*VAR_3++) - '0') + VAR_5.tm_mon * 10 - 1;
    VAR_5.tm_mday = ((*VAR_3++) - '0');
    VAR_5.tm_mday = ((*VAR_3++) - '0') + VAR_5.tm_mday * 10;
    VAR_5.tm_hour = ((*VAR_3++) - '0');
    VAR_5.tm_hour = ((*VAR_3++) - '0') + VAR_5.tm_hour * 10;
    VAR_5.tm_min = ((*VAR_3++) - '0');
    VAR_5.tm_min = ((*VAR_3++) - '0') + VAR_5.tm_min * 10;
    VAR_5.tm_sec = ((*VAR_3++) - '0');
    VAR_5.tm_sec = ((*VAR_3++) - '0') + VAR_5.tm_sec * 10;
    VAR_5.tm_isdst = -1;

    *VAR_1 = FUNC_1(&VAR_5);
    if (*VAR_1 == -1) {
 FUNC_5("date/time out of range");
 return 1;
    }
    return 0;
}
