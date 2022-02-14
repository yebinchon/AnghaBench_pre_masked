
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wps_er_ap {TYPE_2__* wps; TYPE_1__* er; } ;
struct wps_config {int registrar; int wps; } ;
struct wpabuf {int dummy; } ;
typedef int cfg ;
struct TYPE_4__ {struct wps_er_ap* ap_settings_cb_ctx; int ap_settings_cb; } ;
struct TYPE_3__ {int wps; } ;


 int VAR_0 ;
 int FUNC_0 (struct wps_config*,int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wps_er_ap*,struct wpabuf*) ;
 int VAR_1 ;
 TYPE_2__* FUNC_3 (struct wps_config*) ;

__attribute__((used)) static void FUNC_4(struct wps_er_ap *VAR_2, struct wpabuf *VAR_3)
{
 struct wps_config VAR_4;

 if (VAR_2->wps) {
  FUNC_1(VAR_0, "WPS ER: Protocol run already in "
      "progress with this AP");
  return;
 }

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.wps = VAR_2->er->wps;
 VAR_4.registrar = 1;
 VAR_2->wps = FUNC_3(&VAR_4);
 if (VAR_2->wps == ((void*)0))
  return;
 VAR_2->wps->ap_settings_cb = VAR_1;
 VAR_2->wps->ap_settings_cb_ctx = VAR_2;

 FUNC_2(VAR_2, VAR_3);
}
