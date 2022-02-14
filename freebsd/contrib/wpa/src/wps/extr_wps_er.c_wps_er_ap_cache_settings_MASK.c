
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_er_ap_settings {int ap_settings; int list; int * uuid; } ;
struct wps_er_ap {int * ap_settings; int * uuid; } ;
struct wps_er {int ap_settings; } ;
struct wps_credential {int dummy; } ;
struct in_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int) ;
 struct wps_er_ap_settings* FUNC_2 (int) ;
 struct wps_er_ap* FUNC_3 (struct wps_er*,struct in_addr*,int *,int *) ;
 struct wps_er_ap_settings* FUNC_4 (struct wps_er*,int *) ;

int FUNC_5(struct wps_er *VAR_1, struct in_addr *VAR_2)
{
 struct wps_er_ap *VAR_3;
 struct wps_er_ap_settings *VAR_4;

 VAR_3 = FUNC_3(VAR_1, VAR_2, ((void*)0), ((void*)0));
 if (VAR_3 == ((void*)0) || VAR_3->ap_settings == ((void*)0))
  return -1;

 VAR_4 = FUNC_4(VAR_1, VAR_3->uuid);
 if (!VAR_4) {
  VAR_4 = FUNC_2(sizeof(*VAR_4));
  if (VAR_4 == ((void*)0))
   return -1;
  FUNC_1(VAR_4->uuid, VAR_3->uuid, VAR_0);
  FUNC_0(&VAR_1->ap_settings, &VAR_4->list);
 }
 FUNC_1(&VAR_4->ap_settings, VAR_3->ap_settings,
    sizeof(struct wps_credential));

 return 0;
}
