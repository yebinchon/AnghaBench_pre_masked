
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_parse_attr {scalar_t__* selected_registrar; int authorized_macs_len; int authorized_macs; int * version2; int rf_bands; int uuid_e; int sel_reg_config_methods; int dev_password_id; int ap_setup_locked; int wps_state; int version; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct wpabuf const*,struct wps_parse_attr*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int,int) ;
 scalar_t__ FUNC_7 (scalar_t__*,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (int *,int) ;
 scalar_t__ FUNC_11 (int ,int) ;

int FUNC_12(const struct wpabuf *VAR_1)
{
 struct wps_parse_attr VAR_2;
 int VAR_3, VAR_4;

 if (VAR_1 == ((void*)0)) {
  FUNC_0(VAR_0, "WPS-STRICT: No WPS IE in Beacon frame");
  return -1;
 }
 if (FUNC_1(VAR_1, &VAR_2) < 0) {
  FUNC_0(VAR_0, "WPS-STRICT: Failed to parse WPS IE in "
      "Beacon frame");
  return -1;
 }

 VAR_3 = VAR_2.version2 != ((void*)0);
 VAR_4 = VAR_2.selected_registrar != ((void*)0) &&
  *VAR_2.selected_registrar != 0;
 if (FUNC_9(VAR_2.version, 1) ||
     FUNC_11(VAR_2.wps_state, 1) ||
     FUNC_2(VAR_2.ap_setup_locked, 0) ||
     FUNC_7(VAR_2.selected_registrar, 0) ||
     FUNC_4(VAR_2.dev_password_id, VAR_4) ||
     FUNC_6(VAR_2.sel_reg_config_methods,
      VAR_3, VAR_4) ||
     FUNC_8(VAR_2.uuid_e, 0) ||
     FUNC_5(VAR_2.rf_bands, 0) ||
     FUNC_10(VAR_2.version2, VAR_3) ||
     FUNC_3(VAR_2.authorized_macs,
      VAR_2.authorized_macs_len, 0)) {
  FUNC_0(VAR_0, "WPS-STRICT: Invalid Beacon frame");
  return -1;
 }

 return 0;
}
