
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_parse_attr {int * version2; int os_version; int config_error; int assoc_state; int rf_bands; int dev_name_len; int dev_name; int primary_dev_type; int serial_number_len; int serial_number; int model_number_len; int model_number; int model_name_len; int model_name; int manufacturer_len; int manufacturer; int config_methods; int conn_type_flags; int encr_type_flags; int auth_type_flags; int uuid_r; int registrar_nonce; int enrollee_nonce; int msg_type; int version; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct wpabuf const*,struct wps_parse_attr*) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int,int) ;
 scalar_t__ FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int ,int ,int) ;
 scalar_t__ FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (int ,int ,int) ;
 scalar_t__ FUNC_11 (int ,int ,int) ;
 scalar_t__ FUNC_12 (int ,int ,int) ;
 scalar_t__ FUNC_13 (int ,int) ;
 scalar_t__ FUNC_14 (int ,int) ;
 scalar_t__ FUNC_15 (int ,int) ;
 scalar_t__ FUNC_16 (int ,int) ;
 scalar_t__ FUNC_17 (int ,int) ;
 scalar_t__ FUNC_18 (int ,int ,int) ;
 scalar_t__ FUNC_19 (int ,int) ;
 scalar_t__ FUNC_20 (int ,int) ;
 scalar_t__ FUNC_21 (int *,int) ;

int FUNC_22(const struct wpabuf *VAR_1)
{
 struct wps_parse_attr VAR_2;
 int VAR_3;

 if (VAR_1 == ((void*)0)) {
  FUNC_0(VAR_0, "WPS-STRICT: No TLVs in M2D");
  return -1;
 }
 if (FUNC_1(VAR_1, &VAR_2) < 0) {
  FUNC_0(VAR_0, "WPS-STRICT: Failed to parse attributes "
      "in M2D");
  return -1;
 }

 VAR_3 = VAR_2.version2 != ((void*)0);
 if (FUNC_20(VAR_2.version, 1) ||
     FUNC_13(VAR_2.msg_type, 1) ||
     FUNC_9(VAR_2.enrollee_nonce, 1) ||
     FUNC_16(VAR_2.registrar_nonce, 1) ||
     FUNC_19(VAR_2.uuid_r, 1) ||
     FUNC_3(VAR_2.auth_type_flags, 1) ||
     FUNC_8(VAR_2.encr_type_flags, 1) ||
     FUNC_6(VAR_2.conn_type_flags, 1) ||
     FUNC_5(VAR_2.config_methods, VAR_3, 1) ||
     FUNC_10(VAR_2.manufacturer, VAR_2.manufacturer_len,
          1) ||
     FUNC_11(VAR_2.model_name, VAR_2.model_name_len, 1) ||
     FUNC_12(VAR_2.model_number, VAR_2.model_number_len,
          1) ||
     FUNC_18(VAR_2.serial_number,
           VAR_2.serial_number_len, 1) ||
     FUNC_15(VAR_2.primary_dev_type, 1) ||
     FUNC_7(VAR_2.dev_name, VAR_2.dev_name_len, 1) ||
     FUNC_17(VAR_2.rf_bands, 1) ||
     FUNC_2(VAR_2.assoc_state, 1) ||
     FUNC_4(VAR_2.config_error, 1) ||
     FUNC_14(VAR_2.os_version, 1) ||
     FUNC_21(VAR_2.version2, VAR_3)) {
  FUNC_0(VAR_0, "WPS-STRICT: Invalid M2D");




  return -1;

 }

 return 0;
}
