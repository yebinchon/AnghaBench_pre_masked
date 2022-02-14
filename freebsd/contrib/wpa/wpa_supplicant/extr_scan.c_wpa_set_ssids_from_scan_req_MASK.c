
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_supplicant {size_t num_ssids_from_scan_req; TYPE_1__* ssids_from_scan_req; } ;
struct wpa_driver_scan_params {unsigned int num_ssids; TYPE_2__* ssids; } ;
struct TYPE_4__ {int ssid_len; int ssid; } ;
struct TYPE_3__ {int ssid_len; int ssid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ,char*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct wpa_supplicant *VAR_1,
           struct wpa_driver_scan_params *VAR_2,
           size_t VAR_3)
{
 unsigned int VAR_4;

 if (VAR_1->ssids_from_scan_req == ((void*)0) ||
     VAR_1->num_ssids_from_scan_req == 0)
  return 0;

 if (VAR_1->num_ssids_from_scan_req > VAR_3) {
  VAR_1->num_ssids_from_scan_req = VAR_3;
  FUNC_1(VAR_0, "Over max scan SSIDs from scan req: %u",
      (unsigned int) VAR_3);
 }

 for (VAR_4 = 0; VAR_4 < VAR_1->num_ssids_from_scan_req; VAR_4++) {
  VAR_2->ssids[VAR_4].ssid = VAR_1->ssids_from_scan_req[VAR_4].ssid;
  VAR_2->ssids[VAR_4].ssid_len =
   VAR_1->ssids_from_scan_req[VAR_4].ssid_len;
  FUNC_0(VAR_0, "specific SSID",
      VAR_2->ssids[VAR_4].ssid,
      VAR_2->ssids[VAR_4].ssid_len);
 }

 VAR_2->num_ssids = VAR_1->num_ssids_from_scan_req;
 VAR_1->num_ssids_from_scan_req = 0;
 return 1;
}
