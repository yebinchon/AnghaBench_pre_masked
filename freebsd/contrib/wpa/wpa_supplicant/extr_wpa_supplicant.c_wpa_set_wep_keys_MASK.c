
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
struct wpa_ssid {scalar_t__* wep_key_len; int wep_tx_keyidx; int * wep_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpa_supplicant*,int ,int *,int,int,int *,int ,int ,scalar_t__) ;

int FUNC_1(struct wpa_supplicant *VAR_2, struct wpa_ssid *VAR_3)
{
 int VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_3->wep_key_len[VAR_4] == 0)
   continue;

  VAR_5 = 1;
  FUNC_0(VAR_2, VAR_1, ((void*)0),
    VAR_4, VAR_4 == VAR_3->wep_tx_keyidx, ((void*)0), 0,
    VAR_3->wep_key[VAR_4], VAR_3->wep_key_len[VAR_4]);
 }

 return VAR_5;
}
