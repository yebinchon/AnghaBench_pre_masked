
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_driver_scan_ssid {scalar_t__ ssid_len; int * ssid; } ;
struct wpa_bss {scalar_t__ freq; scalar_t__ ssid_len; int ssid; } ;
struct scan_info {size_t num_freqs; scalar_t__* freqs; size_t num_ssids; struct wpa_driver_scan_ssid* ssids; } ;


 scalar_t__ FUNC_0 (int *,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(const struct wpa_bss *VAR_0,
        const struct scan_info *VAR_1)
{
 int VAR_2;
 size_t VAR_3;

 if (VAR_1 == ((void*)0))
  return 1;

 if (VAR_1->num_freqs) {
  VAR_2 = 0;
  for (VAR_3 = 0; VAR_3 < VAR_1->num_freqs; VAR_3++) {
   if (VAR_0->freq == VAR_1->freqs[VAR_3]) {
    VAR_2 = 1;
    break;
   }
  }
  if (!VAR_2)
   return 0;
 }

 if (VAR_1->num_ssids) {
  VAR_2 = 0;
  for (VAR_3 = 0; VAR_3 < VAR_1->num_ssids; VAR_3++) {
   const struct wpa_driver_scan_ssid *VAR_4 = &VAR_1->ssids[VAR_3];
   if ((VAR_4->ssid == ((void*)0) || VAR_4->ssid_len == 0) ||
       (VAR_4->ssid_len == VAR_0->ssid_len &&
        FUNC_0(VAR_4->ssid, VAR_0->ssid, VAR_0->ssid_len) ==
        0)) {
    VAR_2 = 1;
    break;
   }
  }
  if (!VAR_2)
   return 0;
 }

 return 1;
}
