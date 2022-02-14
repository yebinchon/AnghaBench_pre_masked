
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct timespec {scalar_t__ tv_nsec; int tv_sec; } ;
struct clocktime {int sec; int min; int hour; int dow; int day; int mon; int year; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct timespec*,struct clocktime*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;
 scalar_t__ FUNC_5 (struct clocktime*) ;

int FUNC_6(uint32_t VAR_1)
{
    struct clocktime VAR_2;
    struct timespec VAR_3;
    int VAR_4, VAR_5, VAR_6;
    uint8_t VAR_7[8];
    uint8_t VAR_8;

    VAR_3.tv_sec = VAR_1;
    VAR_3.tv_nsec = 0;

    FUNC_1(&VAR_3, &VAR_2);

    if (FUNC_5(&VAR_2))
    {
 FUNC_2("Error: RTC was passed wrong calendar values, write failed\n");
 goto ct_invalid;
    }

    VAR_7[0] = FUNC_0(VAR_2.sec);
    VAR_7[1] = FUNC_0(VAR_2.min);
    VAR_7[2] = FUNC_0(VAR_2.hour);
    VAR_7[3] = FUNC_0(VAR_2.dow + 1);
    VAR_7[4] = FUNC_0(VAR_2.day);
    VAR_7[5] = FUNC_0(VAR_2.mon);

    if (VAR_2.year >= 2000)
    {
 VAR_7[5] |= 0x80;
    }

    VAR_7[6] = FUNC_0(VAR_2.year % 100);


    for(VAR_6=0; VAR_6<2; VAR_6++)
    {
 VAR_5 = 0;
 for(VAR_4=0; VAR_4<7; VAR_4++)
 {
     VAR_5 |= FUNC_4(VAR_0, VAR_4, VAR_7[VAR_4]);
 }

 VAR_8 = FUNC_3(VAR_0, 0x0);
 if ((VAR_8 & 0xf) == (VAR_7[0] & 0xf))
     break;
    }

    return (VAR_5 ? -1 : 0);

 ct_invalid:
    return -1;
}
