
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int conf; } ;
struct wpa_ssid {int disabled; } ;


 struct wpa_ssid* FUNC_0 (int ) ;
 int FUNC_1 (struct wpa_ssid*) ;
 int FUNC_2 (struct wpa_supplicant*,struct wpa_ssid*) ;

struct wpa_ssid * FUNC_3(struct wpa_supplicant *VAR_0)
{
 struct wpa_ssid *VAR_1;

 VAR_1 = FUNC_0(VAR_0->conf);
 if (!VAR_1)
  return ((void*)0);
 FUNC_2(VAR_0, VAR_1);
 VAR_1->disabled = 1;
 FUNC_1(VAR_1);

 return VAR_1;
}
