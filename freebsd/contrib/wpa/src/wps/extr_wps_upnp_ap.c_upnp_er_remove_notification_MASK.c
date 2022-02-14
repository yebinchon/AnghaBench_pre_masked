
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_registrar {int dummy; } ;
struct subscription {scalar_t__ selected_registrar; } ;


 int FUNC_0 (int ,struct subscription*,struct wps_registrar*) ;
 int VAR_0 ;
 int FUNC_1 (struct wps_registrar*,int ) ;

void FUNC_2(struct wps_registrar *VAR_1,
     struct subscription *VAR_2)
{
 VAR_2->selected_registrar = 0;
 FUNC_0(VAR_0, VAR_2, VAR_1);
 if (VAR_1)
  FUNC_1(VAR_1, 0);
}
