
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_ap_info {int bssid; } ;
struct wpa_supplicant {size_t num_wps_ap; struct wps_ap_info* wps_ap; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int const*,int ) ;

__attribute__((used)) static struct wps_ap_info * FUNC_1(struct wpa_supplicant *VAR_1,
       const u8 *VAR_2)
{
 size_t VAR_3;

 if (VAR_1->wps_ap == ((void*)0))
  return ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_1->num_wps_ap; VAR_3++) {
  struct wps_ap_info *VAR_4 = &VAR_1->wps_ap[VAR_3];
  if (FUNC_0(VAR_4->bssid, VAR_2, VAR_0) == 0)
   return VAR_4;
 }

 return ((void*)0);
}
