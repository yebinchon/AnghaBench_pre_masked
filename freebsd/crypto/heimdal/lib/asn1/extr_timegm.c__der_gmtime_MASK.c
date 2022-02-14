
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_year; size_t tm_mon; int tm_mday; } ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (struct tm*,int ,int) ;
 unsigned int** VAR_1 ;

struct tm *
FUNC_2(time_t VAR_2, struct tm *VAR_3)
{
    time_t VAR_4 = VAR_2 % (3600 * 24);
    time_t VAR_5 = VAR_2 / (3600 * 24);

    FUNC_1(VAR_3, 0, sizeof(*VAR_3));

    VAR_3->tm_sec = VAR_4 % 60;
    VAR_3->tm_min = (VAR_4 % 3600) / 60;
    VAR_3->tm_hour = VAR_4 / 3600;







    if (VAR_5 > (VAR_0 * 365))
 return ((void*)0);

    VAR_3->tm_year = 70;
    while(1) {
 unsigned VAR_6 = (FUNC_0(VAR_3->tm_year) ? 366 : 365);
 if (VAR_5 < VAR_6)
     break;
 VAR_3->tm_year += 1;
 VAR_5 -= VAR_6;
    }
    VAR_3->tm_mon = 0;

    while (1) {
 unsigned VAR_7 = VAR_1[FUNC_0(VAR_3->tm_year)][VAR_3->tm_mon];
 if (VAR_5 < VAR_7)
     break;
 VAR_5 -= VAR_7;
 VAR_3->tm_mon++;
    }
    VAR_3->tm_mday = VAR_5 + 1;

    return VAR_3;
}
