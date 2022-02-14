
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_registrar {int dummy; } ;
struct wps_parse_attr {scalar_t__* selected_registrar; int authorized_macs_len; int version2; scalar_t__ authorized_macs; scalar_t__ sel_reg_config_methods; scalar_t__ dev_password_id; } ;
struct wpabuf {int dummy; } ;
struct subscription {int selected_registrar; int dev_password_id; int config_methods; int authorized_macs; struct wps_registrar* reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,struct subscription*,struct wps_registrar*) ;
 int FUNC_2 (int ,int ,int ,struct subscription*,struct wps_registrar*) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 int FUNC_4 (int ,int,int) ;
 int VAR_6 ;
 int FUNC_5 (int ,char*,struct wpabuf const*) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (struct wpabuf const*,struct wps_parse_attr*) ;
 int FUNC_8 (struct wps_registrar*,int ) ;
 scalar_t__ FUNC_9 (struct wpabuf const*) ;

int FUNC_10(struct wps_registrar *VAR_7,
       struct subscription *VAR_8,
       const struct wpabuf *VAR_9)
{
 struct wps_parse_attr VAR_10;

 FUNC_5(VAR_3, "WPS: SetSelectedRegistrar attributes",
   VAR_9);
 if (FUNC_9(VAR_9) < 0 ||
     FUNC_7(VAR_9, &VAR_10) < 0)
  return -1;

 VAR_8->reg = VAR_7;
 FUNC_1(VAR_6, VAR_8, VAR_7);

 FUNC_4(VAR_8->authorized_macs, 0, sizeof(VAR_8->authorized_macs));
 if (VAR_10.selected_registrar == ((void*)0) || *VAR_10.selected_registrar == 0) {
  FUNC_6(VAR_2, "WPS: SetSelectedRegistrar: Disable "
      "Selected Registrar");
  VAR_8->selected_registrar = 0;
 } else {
  VAR_8->selected_registrar = 1;
  VAR_8->dev_password_id = VAR_10.dev_password_id ?
   FUNC_0(VAR_10.dev_password_id) : VAR_0;
  VAR_8->config_methods = VAR_10.sel_reg_config_methods ?
   FUNC_0(VAR_10.sel_reg_config_methods) : -1;
  if (VAR_10.authorized_macs) {
   int VAR_11 = VAR_10.authorized_macs_len / VAR_1;
   if (VAR_11 > VAR_4)
    VAR_11 = VAR_4;
   FUNC_3(VAR_8->authorized_macs, VAR_10.authorized_macs,
      VAR_11 * VAR_1);
  } else if (!VAR_10.version2) {
   FUNC_6(VAR_2, "WPS: Add broadcast "
       "AuthorizedMACs for WPS 1.0 ER");
   FUNC_4(VAR_8->authorized_macs, 0xff, VAR_1);
  }
  FUNC_2(VAR_5, 0,
           VAR_6, VAR_8, VAR_7);
 }

 FUNC_8(VAR_7, 0);

 return 0;
}
