
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hostapd_data {int ap_pin_failures_consecutive; TYPE_2__* wps; int msg_ctx; TYPE_1__* conf; } ;
struct TYPE_4__ {int registrar; scalar_t__ ap_setup_locked; } ;
struct TYPE_3__ {scalar_t__ ap_setup_locked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_3, void *VAR_4)
{
 struct hostapd_data *VAR_5 = VAR_3;

 if (VAR_5->conf->ap_setup_locked)
  return;
 if (VAR_5->ap_pin_failures_consecutive >= 10)
  return;

 FUNC_1(VAR_0, "WPS: Re-enable AP PIN");
 FUNC_0(VAR_5->msg_ctx, VAR_1, VAR_2);
 VAR_5->wps->ap_setup_locked = 0;
 FUNC_2(VAR_5->wps->registrar);
}
