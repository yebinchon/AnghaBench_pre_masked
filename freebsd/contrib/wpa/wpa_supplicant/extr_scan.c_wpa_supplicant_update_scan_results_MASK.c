
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
struct wpa_scan_results {int dummy; } ;


 int FUNC_0 (struct wpa_scan_results*) ;
 struct wpa_scan_results* FUNC_1 (struct wpa_supplicant*,int *,int ) ;

int FUNC_2(struct wpa_supplicant *VAR_0)
{
 struct wpa_scan_results *VAR_1;
 VAR_1 = FUNC_1(VAR_0, ((void*)0), 0);
 if (VAR_1 == ((void*)0))
  return -1;
 FUNC_0(VAR_1);

 return 0;
}
