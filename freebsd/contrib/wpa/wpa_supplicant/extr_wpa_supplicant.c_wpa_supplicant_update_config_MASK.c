
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; } ;
struct wpa_driver_capa {int dummy; } ;
struct TYPE_2__ {int changed_parameters; char* country; char* wowlan_triggers; int sched_scan_plans; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct wpa_supplicant*,struct wpa_driver_capa*) ;
 scalar_t__ FUNC_1 (struct wpa_supplicant*,char*) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (struct wpa_supplicant*) ;
 int FUNC_4 (struct wpa_supplicant*) ;
 int FUNC_5 (struct wpa_supplicant*) ;
 int FUNC_6 (struct wpa_supplicant*,int ) ;
 scalar_t__ FUNC_7 (struct wpa_supplicant*,struct wpa_driver_capa*) ;
 int FUNC_8 (struct wpa_supplicant*) ;

void FUNC_9(struct wpa_supplicant *VAR_6)
{
 if ((VAR_6->conf->changed_parameters & VAR_0) &&
     VAR_6->conf->country[0] && VAR_6->conf->country[1]) {
  char VAR_7[3];
  VAR_7[0] = VAR_6->conf->country[0];
  VAR_7[1] = VAR_6->conf->country[1];
  VAR_7[2] = '\0';
  if (FUNC_1(VAR_6, VAR_7) < 0) {
   FUNC_2(VAR_5, "Failed to set country code "
       "'%s'", VAR_7);
  }
 }

 if (VAR_6->conf->changed_parameters & VAR_2)
  FUNC_4(VAR_6);

 if (VAR_6->conf->changed_parameters & VAR_3)
  FUNC_6(VAR_6, VAR_6->conf->sched_scan_plans);

 if (VAR_6->conf->changed_parameters & VAR_4) {
  struct wpa_driver_capa VAR_8;
  int VAR_9 = FUNC_0(VAR_6, &VAR_8);

  if (VAR_9 == 0 && FUNC_7(VAR_6, &VAR_8) < 0)
   FUNC_2(VAR_5,
       "Failed to update wowlan_triggers to '%s'",
       VAR_6->conf->wowlan_triggers);
 }

 if (VAR_6->conf->changed_parameters & VAR_1)
  FUNC_3(VAR_6);




 FUNC_5(VAR_6);
 VAR_6->conf->changed_parameters = 0;
}
