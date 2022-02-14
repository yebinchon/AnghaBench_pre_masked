
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_ssid_value {int dummy; } ;
struct hostapd_neighbor_entry {int list; } ;
struct hostapd_data {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct hostapd_neighbor_entry*) ;
 struct hostapd_neighbor_entry* FUNC_2 (struct hostapd_data*,int const*,struct wpa_ssid_value const*) ;
 int FUNC_3 (struct hostapd_neighbor_entry*) ;

int FUNC_4(struct hostapd_data *VAR_0, const u8 *VAR_1,
       const struct wpa_ssid_value *VAR_2)
{
 struct hostapd_neighbor_entry *VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (!VAR_3)
  return -1;

 FUNC_1(VAR_3);
 FUNC_0(&VAR_3->list);
 FUNC_3(VAR_3);

 return 0;
}
