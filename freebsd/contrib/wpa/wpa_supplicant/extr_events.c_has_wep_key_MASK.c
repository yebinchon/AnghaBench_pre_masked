
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {scalar_t__* wep_key_len; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct wpa_ssid *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->wep_key_len[VAR_2])
   return 1;
 }

 return 0;
}
