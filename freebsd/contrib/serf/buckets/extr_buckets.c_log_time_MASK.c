
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; int tm_usec; int tm_gmtoff; } ;
typedef TYPE_1__ apr_time_exp_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int,int,int,int,int,int,int,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3()
{
    apr_time_exp_t VAR_1;

    FUNC_0(&VAR_1, FUNC_1());
    FUNC_2(VAR_0, "[%d-%02d-%02dT%02d:%02d:%02d.%06d%+03d] ",
            1900 + VAR_1.tm_year, 1 + VAR_1.tm_mon, VAR_1.tm_mday,
            VAR_1.tm_hour, VAR_1.tm_min, VAR_1.tm_sec, VAR_1.tm_usec,
            VAR_1.tm_gmtoff/3600);
}
