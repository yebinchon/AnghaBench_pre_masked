
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wps_er_ap {TYPE_2__* ap_settings; scalar_t__ wps; int * uuid; } ;
struct wps_er {int skip_set_sel_reg; TYPE_1__* wps; } ;
struct wps_credential {int dummy; } ;
struct TYPE_5__ {int * cred_attr; } ;
struct TYPE_4__ {int registrar; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (struct wps_credential const*,int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 struct wps_er_ap* FUNC_3 (struct wps_er*,int *,int const*,int const*) ;
 scalar_t__ FUNC_4 (struct wps_er_ap*,int ) ;
 int FUNC_5 (int ,int *,int const*,int const*,size_t,int ) ;

int FUNC_6(struct wps_er *VAR_2, const u8 *VAR_3, const u8 *VAR_4,
    const u8 *VAR_5, size_t VAR_6,
    const struct wps_credential *VAR_7)
{
 struct wps_er_ap *VAR_8;

 if (VAR_2 == ((void*)0))
  return -1;

 VAR_8 = FUNC_3(VAR_2, ((void*)0), VAR_3, VAR_4);
 if (VAR_8 == ((void*)0)) {
  FUNC_2(VAR_0, "WPS ER: AP not found for config "
      "request");
  return -1;
 }
 if (VAR_3 == ((void*)0))
  VAR_3 = VAR_8->uuid;
 if (VAR_8->wps) {
  FUNC_2(VAR_0, "WPS ER: Pending operation ongoing "
      "with the AP - cannot start config");
  return -1;
 }

 FUNC_0(VAR_8->ap_settings);
 VAR_8->ap_settings = FUNC_1(VAR_7, sizeof(*VAR_7));
 if (VAR_8->ap_settings == ((void*)0))
  return -1;
 VAR_8->ap_settings->cred_attr = ((void*)0);

 if (FUNC_4(VAR_8, VAR_1) < 0)
  return -1;

 VAR_2->skip_set_sel_reg = 1;
 FUNC_5(VAR_2->wps->registrar, ((void*)0), VAR_3, VAR_5, VAR_6, 0);
 VAR_2->skip_set_sel_reg = 0;

 return 0;
}
