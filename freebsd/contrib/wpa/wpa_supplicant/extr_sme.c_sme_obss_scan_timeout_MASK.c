
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sched_obss_scan; int obss_scan_int; } ;
struct wpa_supplicant {TYPE_1__ sme; int current_bss; } ;
struct wpa_driver_scan_params {int low_priority; int freqs; } ;
typedef int params ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,void (*) (void*,void*),struct wpa_supplicant*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct wpa_driver_scan_params*,int ,int) ;
 int FUNC_3 (struct wpa_supplicant*,struct wpa_driver_scan_params*) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (struct wpa_supplicant*,struct wpa_driver_scan_params*) ;

__attribute__((used)) static void FUNC_6(void *VAR_1, void *VAR_2)
{
 struct wpa_supplicant *VAR_3 = VAR_1;
 struct wpa_driver_scan_params VAR_4;

 if (!VAR_3->current_bss) {
  FUNC_4(VAR_0, "SME OBSS: Ignore scan request");
  return;
 }

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 FUNC_3(VAR_3, &VAR_4);
 VAR_4.low_priority = 1;
 FUNC_4(VAR_0, "SME OBSS: Request an OBSS scan");

 if (FUNC_5(VAR_3, &VAR_4))
  FUNC_4(VAR_0, "SME OBSS: Failed to trigger scan");
 else
  VAR_3->sme.sched_obss_scan = 1;
 FUNC_1(VAR_4.freqs);

 FUNC_0(VAR_3->sme.obss_scan_int, 0,
          FUNC_6, VAR_3, ((void*)0));
}
