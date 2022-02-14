
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_parse_attr {int const* version2; int const* authorized_macs; int authorized_macs_len; int const* network_key_shareable; int const* request_to_enroll; int const* settings_delay_time; int const* registrar_configuration_methods; int multi_ap_ext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int FUNC_0 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_1(struct wps_parse_attr *VAR_3,
       u8 VAR_4, u8 VAR_5, const u8 *VAR_6)
{
 FUNC_0(VAR_1, "WPS: WFA subelement id=%u len=%u",
     VAR_4, VAR_5);
 switch (VAR_4) {
 case 128:
  if (VAR_5 != 1) {
   FUNC_0(VAR_0, "WPS: Invalid Version2 length "
       "%u", VAR_5);
   return -1;
  }
  VAR_3->version2 = VAR_6;
  break;
 case 134:
  VAR_3->authorized_macs = VAR_6;
  VAR_3->authorized_macs_len = VAR_5;
  break;
 case 132:
  if (VAR_5 != 1) {
   FUNC_0(VAR_0, "WPS: Invalid Network Key "
       "Shareable length %u", VAR_5);
   return -1;
  }
  VAR_3->network_key_shareable = VAR_6;
  break;
 case 130:
  if (VAR_5 != 1) {
   FUNC_0(VAR_0, "WPS: Invalid Request to Enroll "
       "length %u", VAR_5);
   return -1;
  }
  VAR_3->request_to_enroll = VAR_6;
  break;
 case 129:
  if (VAR_5 != 1) {
   FUNC_0(VAR_0, "WPS: Invalid Settings Delay "
       "Time length %u", VAR_5);
   return -1;
  }
  VAR_3->settings_delay_time = VAR_6;
  break;
 case 131:
  if (VAR_5 != 2) {
   FUNC_0(VAR_0, "WPS: Invalid Registrar Configuration Methods length %u",
       VAR_5);
   return -1;
  }
  VAR_3->registrar_configuration_methods = VAR_6;
  break;
 case 133:
  if (VAR_5 != 1) {
   FUNC_0(VAR_0,
       "WPS: Invalid Multi-AP Extension length %u",
       VAR_5);
   return -1;
  }
  VAR_3->multi_ap_ext = *VAR_6;
  FUNC_0(VAR_0, "WPS: Multi-AP Extension 0x%02x",
      VAR_3->multi_ap_ext);
  break;
 default:
  FUNC_0(VAR_2, "WPS: Skipped unknown WFA Vendor "
      "Extension subelement %u", VAR_4);
  break;
 }

 return 0;
}
