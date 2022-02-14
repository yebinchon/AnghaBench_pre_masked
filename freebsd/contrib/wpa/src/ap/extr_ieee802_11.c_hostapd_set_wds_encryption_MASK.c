
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sta_info {int dummy; } ;
struct TYPE_4__ {int idx; int * len; scalar_t__* key; } ;
struct hostapd_ssid {TYPE_2__ wep; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_3__ {scalar_t__ wpa; scalar_t__ ieee802_1x; struct hostapd_ssid ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,struct hostapd_data*,int ,int *,int,int,int *,int ,scalar_t__,int ) ;
 int FUNC_1 (int ,char*,char*) ;

__attribute__((used)) static void FUNC_2(struct hostapd_data *VAR_2,
           struct sta_info *VAR_3,
           char *VAR_4)
{
 int VAR_5;
 struct hostapd_ssid *VAR_6 = &VAR_2->conf->ssid;

 if (VAR_2->conf->ieee802_1x || VAR_2->conf->wpa)
  return;

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  if (VAR_6->wep.key[VAR_5] &&
      FUNC_0(VAR_4, VAR_2, VAR_1, ((void*)0), VAR_5,
     VAR_5 == VAR_6->wep.idx, ((void*)0), 0,
     VAR_6->wep.key[VAR_5], VAR_6->wep.len[VAR_5])) {
   FUNC_1(VAR_0,
       "Could not set WEP keys for WDS interface; %s",
       VAR_4);
   break;
  }
 }
}
