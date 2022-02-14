
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int own_addr; } ;
struct wpa_ssid {int dummy; } ;
struct ibss_rsn {struct wpa_supplicant* wpa_s; } ;


 scalar_t__ FUNC_0 (struct ibss_rsn*,int ,struct wpa_ssid*) ;
 int FUNC_1 (struct ibss_rsn*) ;
 struct ibss_rsn* FUNC_2 (int) ;

struct ibss_rsn * FUNC_3(struct wpa_supplicant *VAR_0,
    struct wpa_ssid *VAR_1)
{
 struct ibss_rsn *VAR_2;

 VAR_2 = FUNC_2(sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 VAR_2->wpa_s = VAR_0;

 if (FUNC_0(VAR_2, VAR_0->own_addr, VAR_1) < 0) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }

 return VAR_2;
}
