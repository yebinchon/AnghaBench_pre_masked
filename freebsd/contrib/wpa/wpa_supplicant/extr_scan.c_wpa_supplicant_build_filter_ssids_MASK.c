
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {scalar_t__ ssid_len; scalar_t__ ssid; struct wpa_ssid* next; } ;
struct wpa_driver_scan_filter {scalar_t__ ssid_len; int ssid; } ;
struct wpa_config {struct wpa_ssid* ssid; int filter_ssids; } ;


 struct wpa_driver_scan_filter* FUNC_0 (size_t,int) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static struct wpa_driver_scan_filter *
FUNC_2(struct wpa_config *VAR_0, size_t *VAR_1)
{
 struct wpa_driver_scan_filter *VAR_2;
 struct wpa_ssid *VAR_3;
 size_t VAR_4;

 *VAR_1 = 0;
 if (!VAR_0->filter_ssids)
  return ((void*)0);

 for (VAR_4 = 0, VAR_3 = VAR_0->ssid; VAR_3; VAR_3 = VAR_3->next) {
  if (VAR_3->ssid && VAR_3->ssid_len)
   VAR_4++;
 }
 if (VAR_4 == 0)
  return ((void*)0);
 VAR_2 = FUNC_0(VAR_4, sizeof(struct wpa_driver_scan_filter));
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 for (VAR_3 = VAR_0->ssid; VAR_3; VAR_3 = VAR_3->next) {
  if (!VAR_3->ssid || !VAR_3->ssid_len)
   continue;
  FUNC_1(VAR_2[*VAR_1].ssid, VAR_3->ssid, VAR_3->ssid_len);
  VAR_2[*VAR_1].ssid_len = VAR_3->ssid_len;
  (*VAR_1)++;
 }

 return VAR_2;
}
