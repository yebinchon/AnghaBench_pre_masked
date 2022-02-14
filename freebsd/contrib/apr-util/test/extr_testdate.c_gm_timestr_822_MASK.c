
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {size_t tm_wday; int tm_mday; size_t tm_mon; int tm_year; int tm_hour; int tm_min; int tm_sec; } ;
typedef int apr_time_t ;


 struct tm* FUNC_0 (int *) ;
 char** VAR_0 ;
 int FUNC_1 (char*,char*,char const* const,int,char*,int,int,int,int) ;

__attribute__((used)) static void FUNC_2(char *VAR_1, apr_time_t VAR_2)
{
    static const char *const VAR_3[7]=
        {"Sun","Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    struct tm *VAR_4;
    time_t VAR_5 = (time_t)VAR_2;

    VAR_4 = FUNC_0(&VAR_5);

    FUNC_1(VAR_1, "%s, %.2d %s %d %.2d:%.2d:%.2d GMT", VAR_3[VAR_4->tm_wday],
            VAR_4->tm_mday, VAR_0[VAR_4->tm_mon], VAR_4->tm_year + 1900,
            VAR_4->tm_hour, VAR_4->tm_min, VAR_4->tm_sec);
}
