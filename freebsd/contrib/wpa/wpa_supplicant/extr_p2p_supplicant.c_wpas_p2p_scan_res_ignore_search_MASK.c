
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* global; struct wpa_radio_work* p2p_scan_work; } ;
struct wpa_scan_results {int dummy; } ;
struct wpa_radio_work {int dummy; } ;
struct TYPE_2__ {int * p2p; scalar_t__ p2p_disabled; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct wpa_radio_work*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct wpa_supplicant *VAR_1,
         struct wpa_scan_results *VAR_2)
{
 FUNC_2(VAR_0, "P2P: Ignore scan results");

 if (VAR_1->p2p_scan_work) {
  struct wpa_radio_work *VAR_3 = VAR_1->p2p_scan_work;
  VAR_1->p2p_scan_work = ((void*)0);
  FUNC_1(VAR_3);
 }

 if (VAR_1->global->p2p_disabled || VAR_1->global->p2p == ((void*)0))
  return;





 FUNC_0(VAR_1->global->p2p);
}
