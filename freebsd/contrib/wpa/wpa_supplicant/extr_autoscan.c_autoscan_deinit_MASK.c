
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int scan_interval; scalar_t__ sched_scan_plans_num; int * sched_scan_plans; int * autoscan_priv; TYPE_1__* autoscan; } ;
struct TYPE_2__ {int (* deinit ) (int *) ;int name; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ) ;

void FUNC_3(struct wpa_supplicant *VAR_1)
{
 if (VAR_1->autoscan && VAR_1->autoscan_priv) {
  FUNC_2(VAR_0, "autoscan: Deinitializing module '%s'",
      VAR_1->autoscan->name);
  VAR_1->autoscan->deinit(VAR_1->autoscan_priv);
  VAR_1->autoscan = ((void*)0);
  VAR_1->autoscan_priv = ((void*)0);

  VAR_1->scan_interval = 5;

  FUNC_0(VAR_1->sched_scan_plans);
  VAR_1->sched_scan_plans = ((void*)0);
  VAR_1->sched_scan_plans_num = 0;
 }
}
