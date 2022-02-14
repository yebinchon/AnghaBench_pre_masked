
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_parse_attr {int dev_name_len; int oob_dev_password_len; int oob_dev_password; int serial_number_len; int serial_number; int model_number_len; int model_number; int model_name_len; int model_name; int manufacturer_len; int manufacturer; int * vendor_ext_len; int * vendor_ext; int sec_dev_type_list_len; scalar_t__ sec_dev_type_list; scalar_t__ primary_dev_type; scalar_t__ dev_password_id; scalar_t__ config_methods; scalar_t__ dev_name; } ;
struct wpabuf {int dummy; } ;
struct p2p_message {int dev_password_id_present; int oob_dev_password_len; int oob_dev_password; int serial_number_len; int serial_number; int model_number_len; int model_number; int model_name_len; int model_name; int manufacturer_len; int manufacturer; int * wps_vendor_ext_len; int * wps_vendor_ext; int wps_sec_dev_type_list_len; scalar_t__ wps_sec_dev_type_list; scalar_t__ wps_pri_dev_type; void* dev_password_id; void* wps_config_methods; int * device_name; } ;
typedef int devtype ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (int *,scalar_t__,int) ;
 int FUNC_2 (int ,char*,...) ;
 void* FUNC_3 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_4 (struct wpabuf const*,struct wps_parse_attr*) ;

__attribute__((used)) static int FUNC_5(const struct wpabuf *VAR_3, struct p2p_message *VAR_4)
{
 struct wps_parse_attr VAR_5;
 int VAR_6;

 FUNC_2(VAR_0, "P2P: Parsing WPS IE");
 if (FUNC_4(VAR_3, &VAR_5))
  return -1;
 if (VAR_5.dev_name && VAR_5.dev_name_len < sizeof(VAR_4->device_name) &&
     !VAR_4->device_name[0])
  FUNC_1(VAR_4->device_name, VAR_5.dev_name, VAR_5.dev_name_len);
 if (VAR_5.config_methods) {
  VAR_4->wps_config_methods =
   FUNC_0(VAR_5.config_methods);
  FUNC_2(VAR_0, "P2P: Config Methods (WPS): 0x%x",
      VAR_4->wps_config_methods);
 }
 if (VAR_5.dev_password_id) {
  VAR_4->dev_password_id = FUNC_0(VAR_5.dev_password_id);
  FUNC_2(VAR_0, "P2P: Device Password ID: %d",
      VAR_4->dev_password_id);
  VAR_4->dev_password_id_present = 1;
 }
 if (VAR_5.primary_dev_type) {
  char VAR_7[VAR_2];
  VAR_4->wps_pri_dev_type = VAR_5.primary_dev_type;
  FUNC_2(VAR_0, "P2P: Primary Device Type (WPS): %s",
      FUNC_3(VAR_4->wps_pri_dev_type, VAR_7,
      sizeof(VAR_7)));
 }
 if (VAR_5.sec_dev_type_list) {
  VAR_4->wps_sec_dev_type_list = VAR_5.sec_dev_type_list;
  VAR_4->wps_sec_dev_type_list_len = VAR_5.sec_dev_type_list_len;
 }

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_4->wps_vendor_ext[VAR_6] = VAR_5.vendor_ext[VAR_6];
  VAR_4->wps_vendor_ext_len[VAR_6] = VAR_5.vendor_ext_len[VAR_6];
 }

 VAR_4->manufacturer = VAR_5.manufacturer;
 VAR_4->manufacturer_len = VAR_5.manufacturer_len;
 VAR_4->model_name = VAR_5.model_name;
 VAR_4->model_name_len = VAR_5.model_name_len;
 VAR_4->model_number = VAR_5.model_number;
 VAR_4->model_number_len = VAR_5.model_number_len;
 VAR_4->serial_number = VAR_5.serial_number;
 VAR_4->serial_number_len = VAR_5.serial_number_len;

 VAR_4->oob_dev_password = VAR_5.oob_dev_password;
 VAR_4->oob_dev_password_len = VAR_5.oob_dev_password_len;

 return 0;
}
