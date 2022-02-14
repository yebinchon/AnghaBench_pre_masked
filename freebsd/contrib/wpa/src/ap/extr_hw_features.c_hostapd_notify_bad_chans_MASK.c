
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hostapd_iface {int * bss; TYPE_2__* current_mode; TYPE_1__* conf; } ;
struct TYPE_4__ {int mode; } ;
struct TYPE_3__ {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,int ,char*,...) ;

__attribute__((used)) static void FUNC_2(struct hostapd_iface *VAR_2)
{
 if (!VAR_2->current_mode) {
  FUNC_1(VAR_2->bss[0], ((void*)0), VAR_1,
          VAR_0,
          "Hardware does not support configured mode");
  return;
 }
 FUNC_1(VAR_2->bss[0], ((void*)0),
         VAR_1,
         VAR_0,
         "Configured channel (%d) not found from the "
         "channel list of current mode (%d) %s",
         VAR_2->conf->channel,
         VAR_2->current_mode->mode,
         FUNC_0(VAR_2->current_mode->mode));
 FUNC_1(VAR_2->bss[0], ((void*)0), VAR_1,
         VAR_0,
         "Hardware does not support configured channel");
}
