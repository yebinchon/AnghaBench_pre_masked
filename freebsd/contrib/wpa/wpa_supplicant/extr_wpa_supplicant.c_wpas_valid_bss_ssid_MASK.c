
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
struct wpa_ssid {int dummy; } ;
struct wpa_bss {int dummy; } ;


 int FUNC_0 (struct wpa_supplicant*,struct wpa_bss*) ;
 scalar_t__ FUNC_1 (struct wpa_supplicant*,struct wpa_ssid*) ;

int FUNC_2(struct wpa_supplicant *VAR_0, struct wpa_bss *VAR_1,
   struct wpa_ssid *VAR_2)
{
 if (VAR_1 && !FUNC_0(VAR_0, VAR_1))
  return 0;

 return VAR_2 == ((void*)0) || FUNC_1(VAR_0, VAR_2);
}
