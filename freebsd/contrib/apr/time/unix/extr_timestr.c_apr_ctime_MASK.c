
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int apr_time_t ;
struct TYPE_3__ {size_t tm_wday; size_t tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; int tm_year; } ;
typedef TYPE_1__ apr_time_exp_t ;
typedef int apr_status_t ;


 int VAR_0 ;
 char** VAR_1 ;
 char** VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;

apr_status_t FUNC_1(char *VAR_3, apr_time_t VAR_4)
{
    apr_time_exp_t VAR_5;
    const char *VAR_6;
    int VAR_7;




    FUNC_0(&VAR_5, VAR_4);
    VAR_6 = &VAR_1[VAR_5.tm_wday][0];
    *VAR_3++ = *VAR_6++;
    *VAR_3++ = *VAR_6++;
    *VAR_3++ = *VAR_6++;
    *VAR_3++ = ' ';
    VAR_6 = &VAR_2[VAR_5.tm_mon][0];
    *VAR_3++ = *VAR_6++;
    *VAR_3++ = *VAR_6++;
    *VAR_3++ = *VAR_6++;
    *VAR_3++ = ' ';
    *VAR_3++ = VAR_5.tm_mday / 10 + '0';
    *VAR_3++ = VAR_5.tm_mday % 10 + '0';
    *VAR_3++ = ' ';
    *VAR_3++ = VAR_5.tm_hour / 10 + '0';
    *VAR_3++ = VAR_5.tm_hour % 10 + '0';
    *VAR_3++ = ':';
    *VAR_3++ = VAR_5.tm_min / 10 + '0';
    *VAR_3++ = VAR_5.tm_min % 10 + '0';
    *VAR_3++ = ':';
    *VAR_3++ = VAR_5.tm_sec / 10 + '0';
    *VAR_3++ = VAR_5.tm_sec % 10 + '0';
    *VAR_3++ = ' ';
    VAR_7 = 1900 + VAR_5.tm_year;
    *VAR_3++ = VAR_7 / 1000 + '0';
    *VAR_3++ = VAR_7 % 1000 / 100 + '0';
    *VAR_3++ = VAR_7 % 100 / 10 + '0';
    *VAR_3++ = VAR_7 % 10 + '0';
    *VAR_3++ = 0;

    return VAR_0;
}
