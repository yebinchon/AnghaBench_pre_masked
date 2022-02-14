
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tm ;
typedef int time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; scalar_t__ tm_sec; } ;


 int FUNC_0 (int,struct tm*) ;
 int FUNC_1 (struct tm*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct tm*,int ,int) ;

__attribute__((used)) static int
FUNC_4(void)
{
    int VAR_0 = 0;
    struct tm VAR_1;
    time_t VAR_2;

    FUNC_3(&VAR_1, 0, sizeof(VAR_1));
    VAR_1.tm_year = 106;
    VAR_1.tm_mon = 9;
    VAR_1.tm_mday = 1;
    VAR_1.tm_hour = 10;
    VAR_1.tm_min = 3;

    VAR_2 = FUNC_1(&VAR_1);
    if (VAR_2 != 1159696980)
 VAR_0 += 1;

    VAR_1.tm_mday = 0;
    VAR_2 = FUNC_1(&VAR_1);
    if (VAR_2 != -1)
 VAR_0 += 1;

    FUNC_0(1159696980, &VAR_1);
    if (VAR_1.tm_year != 106 ||
 VAR_1.tm_mon != 9 ||
 VAR_1.tm_mday != 1 ||
 VAR_1.tm_hour != 10 ||
 VAR_1.tm_min != 3 ||
 VAR_1.tm_sec != 0)
      FUNC_2(1, "tmtime failes");

    return VAR_0;
}
