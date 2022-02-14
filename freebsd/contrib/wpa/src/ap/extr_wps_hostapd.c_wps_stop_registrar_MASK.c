
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_stop_reg_data {int dev_pw_len; int dev_pw; int uuid_e; struct hostapd_data* current_hapd; } ;
struct hostapd_data {TYPE_1__* wps; } ;
struct TYPE_2__ {int registrar; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hostapd_data *VAR_0, void *VAR_1)
{
 struct wps_stop_reg_data *VAR_2 = VAR_1;
 if (VAR_0 != VAR_2->current_hapd && VAR_0->wps != ((void*)0))
  FUNC_0(VAR_0->wps->registrar, VAR_2->uuid_e,
           VAR_2->dev_pw, VAR_2->dev_pw_len);
 return 0;
}
