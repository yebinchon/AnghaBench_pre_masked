
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_registrar {scalar_t__ selected_registrar; scalar_t__ pbc; } ;


 int VAR_0 ;
 int FUNC_0 (int (*) (struct wps_registrar*,int *),struct wps_registrar*,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wps_registrar*,int *,int ) ;
 int FUNC_3 (struct wps_registrar*,int *) ;
 int FUNC_4 (struct wps_registrar*) ;

int FUNC_5(struct wps_registrar *VAR_1)
{
 if (VAR_1->pbc) {
  FUNC_1(VAR_0, "WPS: PBC is set - cancelling it");
  FUNC_3(VAR_1, ((void*)0));
  FUNC_0(FUNC_3, VAR_1, ((void*)0));
  return 1;
 } else if (VAR_1->selected_registrar) {

  FUNC_1(VAR_0, "WPS: PIN is set - cancelling it");
  FUNC_4(VAR_1);
  FUNC_2(VAR_1, ((void*)0), 0);
  return 1;
 }
 return 0;
}
