
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hostapd_data {TYPE_3__* conf; } ;
struct TYPE_4__ {int idx; scalar_t__* key; int * len; scalar_t__ default_len; } ;
struct TYPE_5__ {TYPE_1__ wep; } ;
struct TYPE_6__ {TYPE_2__ ssid; int auth_algs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hostapd_data*) ;
 int FUNC_1 (struct hostapd_data*,int ) ;
 scalar_t__ FUNC_2 (char*,struct hostapd_data*,int ,int *,int,int,int *,int ,scalar_t__,int ) ;
 int FUNC_3 (struct hostapd_data*,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(char *VAR_2, struct hostapd_data *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3);

 if (VAR_3->conf->ssid.wep.default_len) {
  FUNC_3(VAR_3, 1);
  return 0;
 }





 FUNC_1(VAR_3, VAR_3->conf->auth_algs);

 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  if (VAR_3->conf->ssid.wep.key[VAR_4] &&
      FUNC_2(VAR_2, VAR_3, VAR_1, ((void*)0), VAR_4,
     VAR_4 == VAR_3->conf->ssid.wep.idx, ((void*)0), 0,
     VAR_3->conf->ssid.wep.key[VAR_4],
     VAR_3->conf->ssid.wep.len[VAR_4])) {
   FUNC_4(VAR_0, "Could not set WEP "
       "encryption.");
   return -1;
  }
  if (VAR_3->conf->ssid.wep.key[VAR_4] &&
      VAR_4 == VAR_3->conf->ssid.wep.idx)
   FUNC_3(VAR_3, 1);
 }

 return 0;
}
