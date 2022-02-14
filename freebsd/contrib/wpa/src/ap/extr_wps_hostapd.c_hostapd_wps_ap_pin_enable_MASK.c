
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hostapd_data {TYPE_2__* wps; int msg_ctx; TYPE_1__* conf; scalar_t__ ap_pin_failures_consecutive; scalar_t__ ap_pin_failures; } ;
struct TYPE_4__ {int registrar; scalar_t__ ap_setup_locked; } ;
struct TYPE_3__ {scalar_t__ ap_setup_locked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct hostapd_data*,int *) ;
 int FUNC_1 (int,int ,int ,struct hostapd_data*,int *) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct hostapd_data *VAR_4, int VAR_5)
{
 FUNC_3(VAR_0, "WPS: Enabling AP PIN (timeout=%d)", VAR_5);
 VAR_4->ap_pin_failures = 0;
 VAR_4->ap_pin_failures_consecutive = 0;
 VAR_4->conf->ap_setup_locked = 0;
 if (VAR_4->wps->ap_setup_locked) {
  FUNC_2(VAR_4->msg_ctx, VAR_1, VAR_2);
  VAR_4->wps->ap_setup_locked = 0;
  FUNC_4(VAR_4->wps->registrar);
 }
 FUNC_0(VAR_3, VAR_4, ((void*)0));
 if (VAR_5 > 0)
  FUNC_1(VAR_5, 0,
           VAR_3, VAR_4, ((void*)0));
}
