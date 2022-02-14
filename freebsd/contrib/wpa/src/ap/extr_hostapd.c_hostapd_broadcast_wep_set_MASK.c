
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int idx; int * len; int * key; scalar_t__ default_len; } ;
struct hostapd_ssid {TYPE_2__ wep; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_3__ {int iface; struct hostapd_ssid ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,struct hostapd_data*,int ,int ,int,int,int *,int ,int ,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct hostapd_data *VAR_3)
{
 int VAR_4 = 0, VAR_5;
 struct hostapd_ssid *VAR_6 = &VAR_3->conf->ssid;

 VAR_5 = VAR_6->wep.idx;
 if (VAR_6->wep.default_len &&
     FUNC_0(VAR_3->conf->iface,
    VAR_3, VAR_1, VAR_2, VAR_5,
    1, ((void*)0), 0, VAR_6->wep.key[VAR_5],
    VAR_6->wep.len[VAR_5])) {
  FUNC_1(VAR_0, "Could not set WEP encryption.");
  VAR_4++;
 }

 return VAR_4;
}
