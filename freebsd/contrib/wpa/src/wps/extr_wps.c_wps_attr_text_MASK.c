
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_parse_attr {scalar_t__* wps_state; char* dev_name; int dev_name_len; scalar_t__ config_methods; scalar_t__ primary_dev_type; scalar_t__ sel_reg_config_methods; scalar_t__ dev_password_id; scalar_t__* selected_registrar; scalar_t__* ap_setup_locked; } ;
struct wpabuf {int dummy; } ;
typedef int devtype ;


 char* FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,int,char*,...) ;
 scalar_t__ FUNC_5 (int,int) ;
 char* FUNC_6 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_7 (struct wpabuf*,struct wps_parse_attr*) ;

int FUNC_8(struct wpabuf *VAR_3, char *VAR_4, char *VAR_5)
{
 struct wps_parse_attr VAR_6;
 char *VAR_7 = VAR_4;
 int VAR_8;

 if (FUNC_7(VAR_3, &VAR_6) < 0)
  return -1;

 if (VAR_6.wps_state) {
  if (*VAR_6.wps_state == VAR_2)
   VAR_8 = FUNC_4(VAR_7, VAR_5 - VAR_7,
       "wps_state=unconfigured\n");
  else if (*VAR_6.wps_state == VAR_1)
   VAR_8 = FUNC_4(VAR_7, VAR_5 - VAR_7,
       "wps_state=configured\n");
  else
   VAR_8 = 0;
  if (FUNC_5(VAR_5 - VAR_7, VAR_8))
   return VAR_7 - VAR_4;
  VAR_7 += VAR_8;
 }

 if (VAR_6.ap_setup_locked && *VAR_6.ap_setup_locked) {
  VAR_8 = FUNC_4(VAR_7, VAR_5 - VAR_7,
      "wps_ap_setup_locked=1\n");
  if (FUNC_5(VAR_5 - VAR_7, VAR_8))
   return VAR_7 - VAR_4;
  VAR_7 += VAR_8;
 }

 if (VAR_6.selected_registrar && *VAR_6.selected_registrar) {
  VAR_8 = FUNC_4(VAR_7, VAR_5 - VAR_7,
      "wps_selected_registrar=1\n");
  if (FUNC_5(VAR_5 - VAR_7, VAR_8))
   return VAR_7 - VAR_4;
  VAR_7 += VAR_8;
 }

 if (VAR_6.dev_password_id) {
  VAR_8 = FUNC_4(VAR_7, VAR_5 - VAR_7,
      "wps_device_password_id=%u\n",
      FUNC_0(VAR_6.dev_password_id));
  if (FUNC_5(VAR_5 - VAR_7, VAR_8))
   return VAR_7 - VAR_4;
  VAR_7 += VAR_8;
 }

 if (VAR_6.sel_reg_config_methods) {
  VAR_8 = FUNC_4(VAR_7, VAR_5 - VAR_7,
      "wps_selected_registrar_config_methods="
      "0x%04x\n",
      FUNC_0(VAR_6.sel_reg_config_methods));
  if (FUNC_5(VAR_5 - VAR_7, VAR_8))
   return VAR_7 - VAR_4;
  VAR_7 += VAR_8;
 }

 if (VAR_6.primary_dev_type) {
  char VAR_9[VAR_0];
  VAR_8 = FUNC_4(VAR_7, VAR_5 - VAR_7,
      "wps_primary_device_type=%s\n",
      FUNC_6(VAR_6.primary_dev_type,
             VAR_9,
             sizeof(VAR_9)));
  if (FUNC_5(VAR_5 - VAR_7, VAR_8))
   return VAR_7 - VAR_4;
  VAR_7 += VAR_8;
 }

 if (VAR_6.dev_name) {
  char *VAR_10 = FUNC_3(VAR_6.dev_name_len + 1);
  size_t VAR_11;
  if (VAR_10 == ((void*)0))
   return VAR_7 - VAR_4;
  for (VAR_11 = 0; VAR_11 < VAR_6.dev_name_len; VAR_11++) {
   if (VAR_6.dev_name[VAR_11] == 0 ||
       FUNC_1(VAR_6.dev_name[VAR_11]))
    VAR_10[VAR_11] = '_';
   else
    VAR_10[VAR_11] = VAR_6.dev_name[VAR_11];
  }
  VAR_10[VAR_11] = '\0';
  VAR_8 = FUNC_4(VAR_7, VAR_5 - VAR_7, "wps_device_name=%s\n", VAR_10);
  FUNC_2(VAR_10);
  if (FUNC_5(VAR_5 - VAR_7, VAR_8))
   return VAR_7 - VAR_4;
  VAR_7 += VAR_8;
 }

 if (VAR_6.config_methods) {
  VAR_8 = FUNC_4(VAR_7, VAR_5 - VAR_7,
      "wps_config_methods=0x%04x\n",
      FUNC_0(VAR_6.config_methods));
  if (FUNC_5(VAR_5 - VAR_7, VAR_8))
   return VAR_7 - VAR_4;
  VAR_7 += VAR_8;
 }

 return VAR_7 - VAR_4;
}
