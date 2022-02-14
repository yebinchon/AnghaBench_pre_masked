
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_cred {size_t num_excluded_ssid; struct excluded_ssid* excluded_ssid; } ;
struct wpa_bss {scalar_t__ ssid_len; int ssid; } ;
struct excluded_ssid {scalar_t__ ssid_len; int ssid; } ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct wpa_cred *VAR_0, struct wpa_bss *VAR_1)
{
 size_t VAR_2;

 if (!VAR_0->excluded_ssid)
  return 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_excluded_ssid; VAR_2++) {
  struct excluded_ssid *VAR_3 = &VAR_0->excluded_ssid[VAR_2];
  if (VAR_1->ssid_len == VAR_3->ssid_len &&
      FUNC_0(VAR_1->ssid, VAR_3->ssid, VAR_3->ssid_len) == 0)
   return 1;
 }

 return 0;
}
