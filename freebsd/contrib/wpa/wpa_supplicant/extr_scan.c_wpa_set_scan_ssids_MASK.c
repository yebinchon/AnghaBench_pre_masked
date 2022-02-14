
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {unsigned int scan_id_count; int * scan_id; int conf; } ;
struct wpa_ssid {int ssid_len; int ssid; scalar_t__ scan_ssid; } ;
struct wpa_driver_scan_params {int dummy; } ;


 int FUNC_0 (struct wpa_supplicant*,struct wpa_driver_scan_params*,struct wpa_ssid*,size_t) ;
 int FUNC_1 (struct wpa_supplicant*,struct wpa_driver_scan_params*,size_t,int ,int ) ;
 struct wpa_ssid* FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct wpa_supplicant *VAR_0,
          struct wpa_driver_scan_params *VAR_1,
          size_t VAR_2)
{
 unsigned int VAR_3;
 struct wpa_ssid *VAR_4;





 VAR_2 = VAR_2 > 1 ? VAR_2 - 1 : VAR_2;

 for (VAR_3 = 0; VAR_3 < VAR_0->scan_id_count; VAR_3++) {
  VAR_4 = FUNC_2(VAR_0->conf, VAR_0->scan_id[VAR_3]);
  if (!VAR_4)
   continue;
  if (VAR_4->scan_ssid)
   FUNC_1(VAR_0, VAR_1, VAR_2,
       VAR_4->ssid, VAR_4->ssid_len);




  FUNC_0(VAR_0, VAR_1, VAR_4, VAR_2);
 }

 VAR_0->scan_id_count = 0;
}
