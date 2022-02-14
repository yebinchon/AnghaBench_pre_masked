
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid_value {int dummy; } ;
typedef struct wpa_ssid_value u8 ;
struct wpabuf {int dummy; } ;
struct hostapd_neighbor_entry {int stationary; void* civic; int lci_date; void* lci; void* nr; int ssid; int * bssid; } ;
struct hostapd_data {int dummy; } ;


 int VAR_0 ;
 struct hostapd_neighbor_entry* FUNC_0 (struct hostapd_data*) ;
 int FUNC_1 (struct hostapd_neighbor_entry*) ;
 struct hostapd_neighbor_entry* FUNC_2 (struct hostapd_data*,struct wpa_ssid_value const*,struct wpa_ssid_value const*) ;
 int FUNC_3 (struct hostapd_data*,struct wpa_ssid_value const*,struct wpa_ssid_value const*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,struct wpa_ssid_value const*,int) ;
 void* FUNC_6 (struct wpabuf const*) ;
 scalar_t__ FUNC_7 (struct wpabuf const*) ;

int FUNC_8(struct hostapd_data *VAR_1, const u8 *VAR_2,
    const struct wpa_ssid_value *VAR_3,
    const struct wpabuf *VAR_4, const struct wpabuf *VAR_5,
    const struct wpabuf *VAR_6, int VAR_7)
{
 struct hostapd_neighbor_entry *VAR_8;

 VAR_8 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (!VAR_8)
  VAR_8 = FUNC_0(VAR_1);
 if (!VAR_8)
  return -1;

 FUNC_1(VAR_8);

 FUNC_5(VAR_8->bssid, VAR_2, VAR_0);
 FUNC_5(&VAR_8->ssid, VAR_3, sizeof(VAR_8->ssid));

 VAR_8->nr = FUNC_6(VAR_4);
 if (!VAR_8->nr)
  goto fail;

 if (VAR_5 && FUNC_7(VAR_5)) {
  VAR_8->lci = FUNC_6(VAR_5);
  if (!VAR_8->lci || FUNC_4(&VAR_8->lci_date))
   goto fail;
 }

 if (VAR_6 && FUNC_7(VAR_6)) {
  VAR_8->civic = FUNC_6(VAR_6);
  if (!VAR_8->civic)
   goto fail;
 }

 VAR_8->stationary = VAR_7;

 return 0;

fail:
 FUNC_3(VAR_1, VAR_2, VAR_3);
 return -1;
}
