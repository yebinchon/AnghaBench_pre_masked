
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wps_registrar {int sel_reg_dev_password_id_override; int sel_reg_config_methods_override; scalar_t__ pbc; TYPE_1__* wps; scalar_t__ selected_registrar; scalar_t__ authorized_macs_union; int authorized_macs; scalar_t__ sel_reg_union; } ;
struct TYPE_2__ {int config_methods; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__,int ,int) ;
 int FUNC_1 (int ,char*,int *,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct wps_registrar*) ;
 int FUNC_4 (struct wps_registrar*) ;
 int FUNC_5 (struct wps_registrar*) ;
 int FUNC_6 (int*,int) ;

void FUNC_7(struct wps_registrar *VAR_7,
           u16 VAR_8)
{
 FUNC_2(VAR_2, "WPS: Selected registrar information changed");

 VAR_7->sel_reg_union = VAR_7->selected_registrar;
 VAR_7->sel_reg_dev_password_id_override = -1;
 VAR_7->sel_reg_config_methods_override = -1;
 FUNC_0(VAR_7->authorized_macs_union, VAR_7->authorized_macs,
    VAR_6 * VAR_1);
 FUNC_1(VAR_2, "WPS: Authorized MACs union (start with own)",
      (u8 *) VAR_7->authorized_macs_union,
      sizeof(VAR_7->authorized_macs_union));
 if (VAR_7->selected_registrar) {
  u16 VAR_9;

  VAR_9 = VAR_7->wps->config_methods & ~VAR_4;
  VAR_9 &= ~(VAR_5 |
        VAR_3);
  if (VAR_7->pbc) {
   VAR_7->sel_reg_dev_password_id_override =
    VAR_0;
   FUNC_6(&VAR_9, VAR_7->wps->config_methods);
  } else if (VAR_8)
   VAR_7->sel_reg_dev_password_id_override = VAR_8;
  FUNC_2(VAR_2, "WPS: Internal Registrar selected "
      "(pbc=%d)", VAR_7->pbc);
  VAR_7->sel_reg_config_methods_override = VAR_9;
 } else
  FUNC_2(VAR_2, "WPS: Internal Registrar not selected");

 FUNC_4(VAR_7);

 FUNC_5(VAR_7);
 FUNC_3(VAR_7);
}
