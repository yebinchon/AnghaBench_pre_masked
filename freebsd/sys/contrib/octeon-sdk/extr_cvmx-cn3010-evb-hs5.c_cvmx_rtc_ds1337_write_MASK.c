
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int time_t ;
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_wday; int tm_mday; int tm_mon; int tm_year; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int *,struct tm*) ;
 scalar_t__ FUNC_5 (struct tm*) ;

int FUNC_6(uint32_t VAR_1)
{
    int VAR_2, VAR_3, VAR_4;
    struct tm VAR_5;
    uint8_t VAR_6[8];
    uint8_t VAR_7;
    time_t VAR_8 = VAR_1;


    FUNC_4(&VAR_8, &VAR_5);

    if (FUNC_5(&VAR_5))
    {
 FUNC_1("Error: RTC was passed wrong calendar values, write failed\n");
 goto tm_invalid;
    }

    VAR_6[0] = FUNC_0(VAR_5.tm_sec);
    VAR_6[1] = FUNC_0(VAR_5.tm_min);
    VAR_6[2] = FUNC_0(VAR_5.tm_hour);
    VAR_6[3] = FUNC_0(VAR_5.tm_wday + 1);
    VAR_6[4] = FUNC_0(VAR_5.tm_mday);
    VAR_6[5] = FUNC_0(VAR_5.tm_mon + 1);
    if (VAR_5.tm_year >= 100)
    {
 VAR_6[5] |= 0x80;
    }
    VAR_6[6] = FUNC_0(VAR_5.tm_year % 100);


    for(VAR_4=0; VAR_4<2; VAR_4++)
    {
 VAR_3 = 0;
 for(VAR_2=0; VAR_2<7; VAR_2++)
 {
     VAR_3 |= FUNC_3(VAR_0, VAR_2, VAR_6[VAR_2]);
 }

 VAR_7 = FUNC_2(VAR_0, 0x0);
 if ((VAR_7 & 0xf) == (VAR_6[0] & 0xf))
     break;
    }

    return (VAR_3 ? -1 : 0);

 tm_invalid:
    return -1;
}
