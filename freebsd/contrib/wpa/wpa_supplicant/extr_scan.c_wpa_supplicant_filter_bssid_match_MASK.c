
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {size_t bssid_filter_count; int * bssid_filter; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int *,int const*,size_t) ;

int FUNC_1(struct wpa_supplicant *VAR_1,
          const u8 *VAR_2)
{
 size_t VAR_3;

 if (VAR_1->bssid_filter == ((void*)0))
  return 1;

 for (VAR_3 = 0; VAR_3 < VAR_1->bssid_filter_count; VAR_3++) {
  if (FUNC_0(VAR_1->bssid_filter + VAR_3 * VAR_0, VAR_2,
         VAR_0) == 0)
   return 1;
 }

 return 0;
}
