
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_iface {int ready_to_start_in_sync; scalar_t__ state; scalar_t__ need_to_start_in_sync; struct hostapd_data** bss; struct hapd_interfaces* interfaces; } ;
struct hostapd_data {TYPE_1__* conf; int msg_ctx; } ;
struct hapd_interfaces {unsigned int count; struct hostapd_iface** iface; scalar_t__ terminate_on_error; } ;
struct TYPE_2__ {int iface; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (struct hostapd_iface*,int ) ;
 int FUNC_2 (struct hostapd_iface*,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char*,...) ;

int FUNC_5(struct hostapd_iface *VAR_5, int VAR_6)
{
 struct hapd_interfaces *VAR_7 = VAR_5->interfaces;
 struct hostapd_data *VAR_8 = VAR_5->bss[0];
 unsigned int VAR_9;
 int VAR_10 = 0;

 if (!VAR_5->need_to_start_in_sync)
  return FUNC_2(VAR_5, VAR_6);

 if (VAR_6) {
  FUNC_4(VAR_3, "Interface initialization failed");
  FUNC_1(VAR_5, VAR_2);
  VAR_5->need_to_start_in_sync = 0;
  FUNC_3(VAR_8->msg_ctx, VAR_4, VAR_0);
  if (VAR_7 && VAR_7->terminate_on_error)
   FUNC_0();
  return -1;
 }

 if (VAR_5->ready_to_start_in_sync) {

  return 0;
 }

 for (VAR_9 = 0; VAR_9 < VAR_7->count; VAR_9++) {
  if (VAR_7->iface[VAR_9]->need_to_start_in_sync &&
      !VAR_7->iface[VAR_9]->ready_to_start_in_sync)
   VAR_10++;
 }





 if (VAR_10 > 1 && VAR_5->state == VAR_1) {




  VAR_5->need_to_start_in_sync = 0;
  FUNC_4(VAR_4,
      "%s: Finished CAC - bypass sync and start interface",
      VAR_5->bss[0]->conf->iface);
  return FUNC_2(VAR_5, VAR_6);
 }

 if (VAR_10 > 1) {

  VAR_5->ready_to_start_in_sync = 1;
  FUNC_4(VAR_4,
      "%s: Interface waiting to sync with other interfaces",
      VAR_5->bss[0]->conf->iface);
  return 0;
 }

 FUNC_4(VAR_4,
     "%s: Last interface to sync - starting all interfaces",
     VAR_5->bss[0]->conf->iface);
 VAR_5->need_to_start_in_sync = 0;
 FUNC_2(VAR_5, VAR_6);
 for (VAR_9 = 0; VAR_9 < VAR_7->count; VAR_9++) {
  if (VAR_7->iface[VAR_9]->need_to_start_in_sync &&
      VAR_7->iface[VAR_9]->ready_to_start_in_sync) {
   FUNC_2(
    VAR_7->iface[VAR_9], 0);

   VAR_7->iface[VAR_9]->need_to_start_in_sync = 0;
  }
 }

 return 0;
}
