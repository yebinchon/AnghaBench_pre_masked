
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;


 int FUNC_0 (struct tm*,int,long,long*,int*) ;
 int FUNC_1 (long,int*,int*,int*) ;

int FUNC_2(struct tm *VAR_0, int VAR_1, long VAR_2)
{
    int VAR_3, VAR_4, VAR_5, VAR_6;
    long VAR_7;


    if (!FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_7, &VAR_3))
        return 0;



    FUNC_1(VAR_7, &VAR_4, &VAR_5, &VAR_6);

    if (VAR_4 < 1900 || VAR_4 > 9999)
        return 0;



    VAR_0->tm_year = VAR_4 - 1900;
    VAR_0->tm_mon = VAR_5 - 1;
    VAR_0->tm_mday = VAR_6;

    VAR_0->tm_hour = VAR_3 / 3600;
    VAR_0->tm_min = (VAR_3 / 60) % 60;
    VAR_0->tm_sec = VAR_3 % 60;

    return 1;

}
