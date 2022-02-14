
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tm ;
typedef int time_t ;
struct tm {int tm_year; int tm_mon; int tm_sec; int tm_min; int tm_hour; int tm_mday; } ;


 int VAR_0 ;
 int FUNC_0 (struct tm*) ;
 int FUNC_1 (struct tm*,int ,int) ;
 int FUNC_2 (char const*,char*,int*,int*,int *,int *,int *,int *) ;

__attribute__((used)) static int
FUNC_3 (const char *VAR_1, time_t *VAR_2)
{
    struct tm VAR_3;

    FUNC_1(&VAR_3, 0, sizeof(VAR_3));
    if (FUNC_2 (VAR_1, "%04d%02d%02d%02d%02d%02dZ",
  &VAR_3.tm_year, &VAR_3.tm_mon, &VAR_3.tm_mday, &VAR_3.tm_hour,
  &VAR_3.tm_min, &VAR_3.tm_sec) != 6) {
 if (FUNC_2 (VAR_1, "%02d%02d%02d%02d%02d%02dZ",
      &VAR_3.tm_year, &VAR_3.tm_mon, &VAR_3.tm_mday, &VAR_3.tm_hour,
      &VAR_3.tm_min, &VAR_3.tm_sec) != 6)
     return VAR_0;
 if (VAR_3.tm_year < 50)
     VAR_3.tm_year += 2000;
 else
     VAR_3.tm_year += 1900;
    }
    VAR_3.tm_year -= 1900;
    VAR_3.tm_mon -= 1;
    *VAR_2 = FUNC_0 (&VAR_3);
    return 0;
}
