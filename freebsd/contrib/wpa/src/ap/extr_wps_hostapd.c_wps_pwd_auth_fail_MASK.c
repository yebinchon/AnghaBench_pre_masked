
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wps_event_pwd_auth_fail {int enrollee; } ;
struct hostapd_data {int ap_pin_failures; int ap_pin_failures_consecutive; int ap_pin_lockout_time; TYPE_2__* conf; TYPE_1__* wps; int msg_ctx; } ;
struct TYPE_4__ {int ap_setup_locked; int * ap_pin; } ;
struct TYPE_3__ {int ap_setup_locked; int registrar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct hostapd_data*,int *) ;
 int FUNC_1 (int,int ,int ,struct hostapd_data*,int *) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct hostapd_data *VAR_4, void *VAR_5)
{
 struct wps_event_pwd_auth_fail *VAR_6 = VAR_5;

 if (!VAR_6->enrollee || VAR_4->conf->ap_pin == ((void*)0) || VAR_4->wps == ((void*)0))
  return 0;






 VAR_4->ap_pin_failures++;
 VAR_4->ap_pin_failures_consecutive++;
 FUNC_3(VAR_0, "WPS: AP PIN authentication failure number %u "
     "(%u consecutive)",
     VAR_4->ap_pin_failures, VAR_4->ap_pin_failures_consecutive);
 if (VAR_4->ap_pin_failures < 3)
  return 0;

 FUNC_2(VAR_4->msg_ctx, VAR_1, VAR_2);
 VAR_4->wps->ap_setup_locked = 1;

 FUNC_4(VAR_4->wps->registrar);

 if (!VAR_4->conf->ap_setup_locked &&
     VAR_4->ap_pin_failures_consecutive >= 10) {




  FUNC_0(VAR_3, VAR_4, ((void*)0));
  FUNC_3(VAR_0, "WPS: AP PIN disabled indefinitely");
 } else if (!VAR_4->conf->ap_setup_locked) {
  if (VAR_4->ap_pin_lockout_time == 0)
   VAR_4->ap_pin_lockout_time = 60;
  else if (VAR_4->ap_pin_lockout_time < 365 * 24 * 60 * 60 &&
    (VAR_4->ap_pin_failures % 3) == 0)
   VAR_4->ap_pin_lockout_time *= 2;

  FUNC_3(VAR_0, "WPS: Disable AP PIN for %u seconds",
      VAR_4->ap_pin_lockout_time);
  FUNC_0(VAR_3, VAR_4, ((void*)0));
  FUNC_1(VAR_4->ap_pin_lockout_time, 0,
           VAR_3, VAR_4,
           ((void*)0));
 }

 return 0;
}
