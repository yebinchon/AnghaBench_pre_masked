
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_iface {TYPE_1__* conf; } ;
struct TYPE_2__ {unsigned int airtime_update_interval; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct hostapd_iface *VAR_1,
          unsigned int *VAR_2,
          unsigned int *VAR_3)
{
 unsigned int VAR_4 = VAR_1->conf->airtime_update_interval;

 if (!VAR_4) {
  FUNC_0(VAR_0,
      "Airtime policy: Invalid airtime policy update interval %u",
      VAR_4);
  return -1;
 }

 *VAR_2 = VAR_4 / 1000;
 *VAR_3 = (VAR_4 % 1000) * 1000;

 return 0;
}
