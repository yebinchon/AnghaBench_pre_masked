
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wps_er_ap {TYPE_1__* ap_settings; } ;
struct wps_er {int dummy; } ;
struct wps_credential {int dummy; } ;
struct TYPE_3__ {int * cred_attr; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (struct wps_credential const*,int) ;
 int FUNC_2 (int ,char*) ;
 struct wps_er_ap* FUNC_3 (struct wps_er*,int *,int const*,int const*) ;

int FUNC_4(struct wps_er *VAR_1, const u8 *VAR_2, const u8 *VAR_3,
        const struct wps_credential *VAR_4)
{
 struct wps_er_ap *VAR_5;

 if (VAR_1 == ((void*)0))
  return -1;

 VAR_5 = FUNC_3(VAR_1, ((void*)0), VAR_2, VAR_3);
 if (VAR_5 == ((void*)0)) {
  FUNC_2(VAR_0, "WPS ER: AP not found for set config "
      "request");
  return -1;
 }

 FUNC_0(VAR_5->ap_settings);
 VAR_5->ap_settings = FUNC_1(VAR_4, sizeof(*VAR_4));
 if (VAR_5->ap_settings == ((void*)0))
  return -1;
 VAR_5->ap_settings->cred_attr = ((void*)0);
 FUNC_2(VAR_0, "WPS ER: Updated local AP settings based set "
     "config request");

 return 0;
}
