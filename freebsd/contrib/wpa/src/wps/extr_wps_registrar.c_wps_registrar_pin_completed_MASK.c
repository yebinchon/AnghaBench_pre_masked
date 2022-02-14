
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_registrar {scalar_t__ selected_registrar; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct wps_registrar*,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wps_registrar*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct wps_registrar *VAR_2)
{
 FUNC_1(VAR_0, "WPS: PIN completed using internal Registrar");
 FUNC_0(VAR_1, VAR_2, ((void*)0));
 VAR_2->selected_registrar = 0;
 FUNC_2(VAR_2, 0);
}
