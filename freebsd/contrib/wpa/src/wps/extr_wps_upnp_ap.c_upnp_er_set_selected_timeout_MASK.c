
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_registrar {int dummy; } ;
struct subscription {scalar_t__ selected_registrar; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wps_registrar*,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, void *VAR_2)
{
 struct subscription *VAR_3 = VAR_1;
 struct wps_registrar *VAR_4 = VAR_2;
 FUNC_0(VAR_0, "WPS: SetSelectedRegistrar from ER timed out");
 VAR_3->selected_registrar = 0;
 FUNC_1(VAR_4, 0);
}
