
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
struct wpa_cred {int dummy; } ;
struct wpa_bss {int dummy; } ;


 struct wpa_cred* FUNC_0 (struct wpa_supplicant*,struct wpa_bss*,int,int*) ;

__attribute__((used)) static struct wpa_cred * FUNC_1(
 struct wpa_supplicant *VAR_0, struct wpa_bss *VAR_1, int *VAR_2)
{
 struct wpa_cred *VAR_3;

 if (VAR_2)
  *VAR_2 = 0;
 VAR_3 = FUNC_0(VAR_0, VAR_1, 0,
        VAR_2);
 if (VAR_3)
  return VAR_3;
 return FUNC_0(VAR_0, VAR_1, 1,
        VAR_2);
}
