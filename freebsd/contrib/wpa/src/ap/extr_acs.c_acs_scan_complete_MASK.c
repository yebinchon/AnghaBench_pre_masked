
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_iface {scalar_t__ acs_num_completed_scans; TYPE_1__* conf; int * bss; int * scan_cb; } ;
struct TYPE_2__ {scalar_t__ acs_num_scans; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hostapd_iface*) ;
 int FUNC_1 (struct hostapd_iface*) ;
 int FUNC_2 (struct hostapd_iface*) ;
 int FUNC_3 (struct hostapd_iface*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static void FUNC_6(struct hostapd_iface *VAR_2)
{
 int VAR_3;

 VAR_2->scan_cb = ((void*)0);

 FUNC_5(VAR_0, "ACS: Using survey based algorithm (acs_num_scans=%d)",
     VAR_2->conf->acs_num_scans);

 VAR_3 = FUNC_4(VAR_2->bss[0], 0);
 if (VAR_3) {
  FUNC_5(VAR_1, "ACS: Failed to get survey data");
  goto fail;
 }

 if (++VAR_2->acs_num_completed_scans < VAR_2->conf->acs_num_scans) {
  VAR_3 = FUNC_1(VAR_2);
  if (VAR_3) {
   FUNC_5(VAR_1, "ACS: Failed to request scan");
   goto fail;
  }

  return;
 }

 FUNC_2(VAR_2);
 return;
fail:
 FUNC_3(VAR_2, 1);
 FUNC_0(VAR_2);
}
