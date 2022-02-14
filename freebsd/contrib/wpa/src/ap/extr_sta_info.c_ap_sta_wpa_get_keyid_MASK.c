
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sta_info {int wpa_sm; } ;
struct hostapd_wpa_psk {char const* keyid; int psk; struct hostapd_wpa_psk* next; } ;
struct hostapd_ssid {struct hostapd_wpa_psk* wpa_psk; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {struct hostapd_ssid ssid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int ,int) ;
 int * FUNC_1 (int ,int*) ;

const char * FUNC_2(struct hostapd_data *VAR_1,
      struct sta_info *VAR_2)
{
 struct hostapd_wpa_psk *VAR_3;
 struct hostapd_ssid *VAR_4;
 const u8 *VAR_5;
 int VAR_6;

 VAR_4 = &VAR_1->conf->ssid;

 VAR_5 = FUNC_1(VAR_2->wpa_sm, &VAR_6);
 if (!VAR_5 || VAR_6 != VAR_0)
  return ((void*)0);

 for (VAR_3 = VAR_4->wpa_psk; VAR_3; VAR_3 = VAR_3->next)
  if (FUNC_0(VAR_5, VAR_3->psk, VAR_0) == 0)
   break;
 if (!VAR_3)
  return ((void*)0);
 if (!VAR_3 || !VAR_3->keyid[0])
  return ((void*)0);

 return VAR_3->keyid;
}
