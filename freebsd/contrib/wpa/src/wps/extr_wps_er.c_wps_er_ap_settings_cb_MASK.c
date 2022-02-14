
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct wps_credential const* cred; int uuid; } ;
union wps_event_data {TYPE_1__ ap_settings; } ;
struct wps_er_ap {TYPE_3__* er; int uuid; TYPE_4__* ap_settings; } ;
struct wps_credential {int dummy; } ;
typedef int data ;
struct TYPE_10__ {int * cred_attr; } ;
struct TYPE_9__ {TYPE_2__* wps; } ;
struct TYPE_8__ {int cb_ctx; int (* event_cb ) (int ,int ,union wps_event_data*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_4__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,struct wps_credential const*,int) ;
 int FUNC_3 (union wps_event_data*,int ,int) ;
 int FUNC_4 (int ,int ,union wps_event_data*) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void FUNC_6(void *VAR_2, const struct wps_credential *VAR_3)
{
 struct wps_er_ap *VAR_4 = VAR_2;
 union wps_event_data VAR_5;

 FUNC_5(VAR_0, "WPS ER: AP Settings received");
 FUNC_0(VAR_4->ap_settings);
 VAR_4->ap_settings = FUNC_1(sizeof(*VAR_3));
 if (VAR_4->ap_settings) {
  FUNC_2(VAR_4->ap_settings, VAR_3, sizeof(*VAR_3));
  VAR_4->ap_settings->cred_attr = ((void*)0);
 }

 FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.ap_settings.uuid = VAR_4->uuid;
 VAR_5.ap_settings.cred = VAR_3;
 VAR_4->er->wps->event_cb(VAR_4->er->wps->cb_ctx, VAR_1,
         &VAR_5);
}
