
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_supplicant {int ap_configured_cb_data; int ap_configured_cb_ctx; int (* ap_configured_cb ) (int ,int ) ;TYPE_2__* ap_iface; TYPE_1__* current_ssid; int assoc_freq; } ;
struct TYPE_4__ {scalar_t__ state; int freq; } ;
struct TYPE_3__ {int frequency; scalar_t__ acs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct wpa_supplicant*) ;
 int FUNC_4 (struct wpa_supplicant*,int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_3)
{
 struct wpa_supplicant *VAR_4 = VAR_3;

 FUNC_2(VAR_1, "AP interface setup completed - state %s",
     FUNC_0(VAR_4->ap_iface->state));
 if (VAR_4->ap_iface->state == VAR_0) {
  FUNC_3(VAR_4);
  return;
 }
 FUNC_4(VAR_4, VAR_2);

 if (VAR_4->ap_configured_cb)
  VAR_4->ap_configured_cb(VAR_4->ap_configured_cb_ctx,
     VAR_4->ap_configured_cb_data);
}
