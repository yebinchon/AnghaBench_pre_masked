
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct os_reltime {int usec; int sec; } ;
struct sta_info {struct os_reltime backlogged_until; } ;
struct hostapd_data {TYPE_1__* iconf; } ;
struct TYPE_2__ {int airtime_update_interval; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct hostapd_data *VAR_1,
     struct sta_info *VAR_2,
     struct os_reltime *VAR_3)
{
 VAR_2->backlogged_until = *VAR_3;
 VAR_2->backlogged_until.usec += VAR_1->iconf->airtime_update_interval *
  VAR_0;
 while (VAR_2->backlogged_until.usec >= 1000000) {
  VAR_2->backlogged_until.sec++;
  VAR_2->backlogged_until.usec -= 1000000;
 }
}
