
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct os_tm {int sec; int min; int hour; int day; int month; int year; } ;
struct os_time {int sec; } ;
struct hostapd_data {int time_update_counter; int * time_adv; TYPE_1__* conf; } ;
struct TYPE_2__ {int time_advertisement; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct os_time*) ;
 scalar_t__ FUNC_2 (int ,struct os_tm*) ;
 int * FUNC_3 (int const) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *,int const) ;

int FUNC_6(struct hostapd_data *VAR_1)
{
 const int VAR_2 = 2 + 1 + 10 + 5 + 1;
 struct os_time VAR_3;
 struct os_tm VAR_4;
 u8 *VAR_5;

 if (VAR_1->conf->time_advertisement != 2)
  return 0;

 if (FUNC_1(&VAR_3) < 0 || FUNC_2(VAR_3.sec, &VAR_4) < 0)
  return -1;

 if (!VAR_1->time_adv) {
  VAR_1->time_adv = FUNC_3(VAR_2);
  if (VAR_1->time_adv == ((void*)0))
   return -1;
  VAR_5 = FUNC_5(VAR_1->time_adv, VAR_2);
 } else
  VAR_5 = FUNC_4(VAR_1->time_adv);

 *VAR_5++ = VAR_0;
 *VAR_5++ = 1 + 10 + 5 + 1;

 *VAR_5++ = 2;



 FUNC_0(VAR_5, VAR_4.year);
 VAR_5 += 2;
 *VAR_5++ = VAR_4.month;
 *VAR_5++ = VAR_4.day;
 *VAR_5++ = VAR_4.hour;
 *VAR_5++ = VAR_4.min;
 *VAR_5++ = VAR_4.sec;
 FUNC_0(VAR_5, 0);
 VAR_5 += 2;
 *VAR_5++ = 0;



 *VAR_5++ = 0;
 *VAR_5++ = 0;
 *VAR_5++ = 0;
 *VAR_5++ = 0;
 *VAR_5++ = 0;

 *VAR_5++ = VAR_1->time_update_counter++;

 return 0;
}
