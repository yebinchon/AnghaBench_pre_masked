
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tm {int __tm_gmtoff; int tm_gmtoff; int tm_isdst; int tm_yday; int tm_wday; int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct TYPE_3__ {int tm_gmtoff; int tm_isdst; int tm_yday; int tm_wday; int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
typedef TYPE_1__ apr_time_exp_t ;
typedef int apr_status_t ;
typedef int apr_size_t ;


 int VAR_0 ;
 int FUNC_0 (struct tm*,int ,int) ;
 int FUNC_1 (char*,int ,char const*,struct tm*) ;

apr_status_t FUNC_2(char *VAR_1, apr_size_t *VAR_2, apr_size_t VAR_3,
                        const char *VAR_4, apr_time_exp_t *VAR_5)
{
    struct tm VAR_6;
    FUNC_0(&VAR_6, 0, sizeof VAR_6);
    VAR_6.tm_sec = VAR_5->tm_sec;
    VAR_6.tm_min = VAR_5->tm_min;
    VAR_6.tm_hour = VAR_5->tm_hour;
    VAR_6.tm_mday = VAR_5->tm_mday;
    VAR_6.tm_mon = VAR_5->tm_mon;
    VAR_6.tm_year = VAR_5->tm_year;
    VAR_6.tm_wday = VAR_5->tm_wday;
    VAR_6.tm_yday = VAR_5->tm_yday;
    VAR_6.tm_isdst = VAR_5->tm_isdst;





    (*VAR_2) = FUNC_1(VAR_1, VAR_3, VAR_4, &VAR_6);
    return VAR_0;
}
