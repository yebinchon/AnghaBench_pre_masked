
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {scalar_t__* wep_key_len; int * wep_key; } ;


 char* FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static char * FUNC_1(struct wpa_ssid *VAR_0, int VAR_1)
{
 if (VAR_0->wep_key_len[VAR_1] == 0)
  return ((void*)0);
 return FUNC_0(VAR_0->wep_key[VAR_1],
           VAR_0->wep_key_len[VAR_1]);
}
