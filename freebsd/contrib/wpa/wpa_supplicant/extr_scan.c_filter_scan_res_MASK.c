
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int * bssid_filter; } ;
struct wpa_scan_results {size_t num; TYPE_1__** res; } ;
struct TYPE_2__ {int bssid; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (struct wpa_supplicant*,int ) ;

void FUNC_3(struct wpa_supplicant *VAR_1,
       struct wpa_scan_results *VAR_2)
{
 size_t VAR_3, VAR_4;

 if (VAR_1->bssid_filter == ((void*)0))
  return;

 for (VAR_3 = 0, VAR_4 = 0; VAR_3 < VAR_2->num; VAR_3++) {
  if (FUNC_2(VAR_1,
            VAR_2->res[VAR_3]->bssid)) {
   VAR_2->res[VAR_4++] = VAR_2->res[VAR_3];
  } else {
   FUNC_0(VAR_2->res[VAR_3]);
   VAR_2->res[VAR_3] = ((void*)0);
  }
 }

 if (VAR_2->num != VAR_4) {
  FUNC_1(VAR_0, "Filtered out %d scan results",
      (int) (VAR_2->num - VAR_4));
  VAR_2->num = VAR_4;
 }
}
