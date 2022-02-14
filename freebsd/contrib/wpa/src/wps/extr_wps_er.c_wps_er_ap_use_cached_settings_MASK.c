
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_er_ap_settings {int ap_settings; } ;
struct wps_er_ap {int * ap_settings; int uuid; int er; } ;
struct wps_er {int dummy; } ;


 int VAR_0 ;
 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int ,char*) ;
 struct wps_er_ap_settings* FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct wps_er *VAR_1,
      struct wps_er_ap *VAR_2)
{
 struct wps_er_ap_settings *VAR_3;

 if (VAR_2->ap_settings)
  return 0;

 VAR_3 = FUNC_2(VAR_2->er, VAR_2->uuid);
 if (!VAR_3)
  return -1;

 VAR_2->ap_settings = FUNC_0(&VAR_3->ap_settings, sizeof(*VAR_2->ap_settings));
 if (VAR_2->ap_settings == ((void*)0))
  return -1;

 FUNC_1(VAR_0, "WPS ER: Use cached AP settings");
 return 0;
}
