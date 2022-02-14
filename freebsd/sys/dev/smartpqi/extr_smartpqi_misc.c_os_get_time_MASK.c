
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
struct timespec {int dummy; } ;
struct clocktime {int hour; int min; int sec; int mon; int day; int year; } ;
struct bmic_host_wellness_time {void* year; void* century; void* day; void* month; scalar_t__ reserved; void* sec; void* min; void* hour; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct timespec*,struct clocktime*) ;
 int FUNC_2 (struct timespec*) ;

void FUNC_3(struct bmic_host_wellness_time *VAR_0)
{
 struct timespec VAR_1;
 struct clocktime VAR_2;

 FUNC_2(&VAR_1);
 FUNC_1(&VAR_1, &VAR_2);



 VAR_0->hour= (uint8_t)FUNC_0(VAR_2.hour);
 VAR_0->min = (uint8_t)FUNC_0(VAR_2.min);
 VAR_0->sec= (uint8_t)FUNC_0(VAR_2.sec);
 VAR_0->reserved = 0;
 VAR_0->month = (uint8_t)FUNC_0(VAR_2.mon);
 VAR_0->day = (uint8_t)FUNC_0(VAR_2.day);
 VAR_0->century = (uint8_t)FUNC_0(VAR_2.year / 100);
 VAR_0->year = (uint8_t)FUNC_0(VAR_2.year % 100);

}
