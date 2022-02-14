
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hostapd_iface {TYPE_1__* conf; TYPE_2__* current_mode; } ;
struct ap_info {scalar_t__ channel; int erp; int* supported_rates; } ;
struct TYPE_4__ {scalar_t__ mode; } ;
struct TYPE_3__ {scalar_t__ channel; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct hostapd_iface *VAR_3, struct ap_info *VAR_4)
{
 int VAR_5;

 if (VAR_3->current_mode == ((void*)0) ||
     VAR_3->current_mode->mode != VAR_1 ||
     VAR_3->conf->channel != VAR_4->channel)
  return 0;

 if (VAR_4->erp != -1 && (VAR_4->erp & VAR_0))
  return 1;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  int VAR_6 = (VAR_4->supported_rates[VAR_5] & 0x7f) * 5;
  if (VAR_6 == 60 || VAR_6 == 90 || VAR_6 > 110)
   return 0;
 }

 return 1;
}
