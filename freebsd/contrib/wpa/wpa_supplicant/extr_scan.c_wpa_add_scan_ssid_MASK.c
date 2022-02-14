
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int dummy; } ;
struct wpa_driver_scan_params {unsigned int num_ssids; TYPE_1__* ssids; } ;
struct TYPE_2__ {size_t ssid_len; int const* ssid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int const*,size_t) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int const*,size_t) ;

__attribute__((used)) static void FUNC_3(struct wpa_supplicant *VAR_1,
         struct wpa_driver_scan_params *VAR_2,
         size_t VAR_3, const u8 *VAR_4, size_t VAR_5)
{
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2->num_ssids; VAR_6++) {
  if (VAR_2->ssids[VAR_6].ssid_len == VAR_5 &&
      VAR_2->ssids[VAR_6].ssid &&
      FUNC_0(VAR_2->ssids[VAR_6].ssid, VAR_4, VAR_5) == 0)
   return;
 }

 if (VAR_2->num_ssids + 1 > VAR_3) {
  FUNC_1(VAR_0, "Over max scan SSIDs for manual request");
  return;
 }

 FUNC_1(VAR_0, "Scan SSID (manual request): %s",
     FUNC_2(VAR_4, VAR_5));

 VAR_2->ssids[VAR_2->num_ssids].ssid = VAR_4;
 VAR_2->ssids[VAR_2->num_ssids].ssid_len = VAR_5;
 VAR_2->num_ssids++;
}
