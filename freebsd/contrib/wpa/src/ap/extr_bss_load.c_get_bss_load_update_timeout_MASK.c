
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hostapd_data {TYPE_2__* iconf; TYPE_1__* conf; } ;
struct TYPE_4__ {unsigned int beacon_int; } ;
struct TYPE_3__ {unsigned int bss_load_update_period; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct hostapd_data *VAR_1,
           unsigned int *VAR_2, unsigned int *VAR_3)
{
 unsigned int VAR_4 = VAR_1->conf->bss_load_update_period;
 unsigned int VAR_5 = VAR_1->iconf->beacon_int;
 unsigned int VAR_6;

 if (!VAR_4 || !VAR_5) {
  FUNC_0(VAR_0,
      "BSS Load: Invalid BSS load update configuration (period=%u beacon_int=%u)",
      VAR_4, VAR_5);
  return -1;
 }

 VAR_6 = VAR_4 * VAR_5;

 *VAR_2 = ((VAR_6 / 1000) * 1024) / 1000;
 *VAR_3 = (VAR_6 % 1000) * 1024;

 return 0;
}
