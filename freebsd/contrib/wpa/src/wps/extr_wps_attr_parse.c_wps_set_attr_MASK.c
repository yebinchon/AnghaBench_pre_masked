
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wps_parse_attr {int oob_dev_password_len; int manufacturer_len; int model_name_len; int model_number_len; int serial_number_len; int dev_name_len; int public_key_len; int encr_settings_len; size_t num_cred; int* cred_len; int ssid_len; int network_key_len; size_t num_req_dev_type; int sec_dev_type_list_len; int const* ap_channel; int const* sec_dev_type_list; int const** req_dev_type; int const* ap_setup_locked; int const* network_key; int const* ssid; int const** cred; int const* encr_settings; int const* public_key; int const* dev_name; int const* serial_number; int const* model_number; int const* model_name; int const* manufacturer; int const* response_type; int const* request_type; int const* selected_registrar; int const* mac_addr; int const* network_key_idx; int const* network_idx; int const* encr_type; int const* auth_type; int const* key_wrap_auth; int const* e_snonce2; int const* e_snonce1; int const* r_snonce2; int const* r_snonce1; int const* e_hash2; int const* e_hash1; int const* r_hash2; int const* r_hash1; int const* authenticator; int const* wps_state; int const* os_version; int const* oob_dev_password; int const* dev_password_id; int const* config_error; int const* assoc_state; int const* rf_bands; int const* primary_dev_type; int const* sel_reg_config_methods; int const* config_methods; int const* conn_type_flags; int const* encr_type_flags; int const* auth_type_flags; int const* uuid_r; int const* uuid_e; int const* registrar_nonce; int const* enrollee_nonce; int const* msg_type; int const* version; } ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int const*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct wps_parse_attr*,int const*,int) ;

__attribute__((used)) static int FUNC_3(struct wps_parse_attr *VAR_22, u16 VAR_23,
   const u8 *VAR_24, u16 VAR_25)
{
 switch (VAR_23) {
 case 129:
  if (VAR_25 != 1) {
   FUNC_1(VAR_4, "WPS: Invalid Version length %u",
       VAR_25);
   return -1;
  }
  VAR_22->version = VAR_24;
  break;
 case 154:
  if (VAR_25 != 1) {
   FUNC_1(VAR_4, "WPS: Invalid Message Type "
       "length %u", VAR_25);
   return -1;
  }
  VAR_22->msg_type = VAR_24;
  break;
 case 164:
  if (VAR_25 != VAR_14) {
   FUNC_1(VAR_4, "WPS: Invalid Enrollee Nonce "
       "length %u", VAR_25);
   return -1;
  }
  VAR_22->enrollee_nonce = VAR_24;
  break;
 case 146:
  if (VAR_25 != VAR_14) {
   FUNC_1(VAR_4, "WPS: Invalid Registrar Nonce "
       "length %u", VAR_25);
   return -1;
  }
  VAR_22->registrar_nonce = VAR_24;
  break;
 case 132:
  if (VAR_25 != VAR_21) {
   FUNC_1(VAR_4, "WPS: Invalid UUID-E length %u",
       VAR_25);
   return -1;
  }
  VAR_22->uuid_e = VAR_24;
  break;
 case 131:
  if (VAR_25 != VAR_21) {
   FUNC_1(VAR_4, "WPS: Invalid UUID-R length %u",
       VAR_25);
   return -1;
  }
  VAR_22->uuid_r = VAR_24;
  break;
 case 174:
  if (VAR_25 != 2) {
   FUNC_1(VAR_4, "WPS: Invalid Authentication "
       "Type Flags length %u", VAR_25);
   return -1;
  }
  VAR_22->auth_type_flags = VAR_24;
  break;
 case 165:
  if (VAR_25 != 2) {
   FUNC_1(VAR_4, "WPS: Invalid Encryption Type "
       "Flags length %u", VAR_25);
   return -1;
  }
  VAR_22->encr_type_flags = VAR_24;
  break;
 case 171:
  if (VAR_25 != 1) {
   FUNC_1(VAR_4, "WPS: Invalid Connection Type "
       "Flags length %u", VAR_25);
   return -1;
  }
  VAR_22->conn_type_flags = VAR_24;
  break;
 case 172:
  if (VAR_25 != 2) {
   FUNC_1(VAR_4, "WPS: Invalid Config Methods "
       "length %u", VAR_25);
   return -1;
  }
  VAR_22->config_methods = VAR_24;
  break;
 case 135:
  if (VAR_25 != 2) {
   FUNC_1(VAR_4, "WPS: Invalid Selected "
       "Registrar Config Methods length %u", VAR_25);
   return -1;
  }
  VAR_22->sel_reg_config_methods = VAR_24;
  break;
 case 148:
  if (VAR_25 != VAR_8) {
   FUNC_1(VAR_4, "WPS: Invalid Primary Device "
       "Type length %u", VAR_25);
   return -1;
  }
  VAR_22->primary_dev_type = VAR_24;
  break;
 case 142:
  if (VAR_25 != 1) {
   FUNC_1(VAR_4, "WPS: Invalid RF Bands length "
       "%u", VAR_25);
   return -1;
  }
  VAR_22->rf_bands = VAR_24;
  break;
 case 177:
  if (VAR_25 != 2) {
   FUNC_1(VAR_4, "WPS: Invalid Association State "
       "length %u", VAR_25);
   return -1;
  }
  VAR_22->assoc_state = VAR_24;
  break;
 case 173:
  if (VAR_25 != 2) {
   FUNC_1(VAR_4, "WPS: Invalid Configuration "
       "Error length %u", VAR_25);
   return -1;
  }
  VAR_22->config_error = VAR_24;
  break;
 case 168:
  if (VAR_25 != 2) {
   FUNC_1(VAR_4, "WPS: Invalid Device Password "
       "ID length %u", VAR_25);
   return -1;
  }
  VAR_22->dev_password_id = VAR_24;
  break;
 case 150:
  if (VAR_25 < VAR_17 + 2 ||
      VAR_25 > VAR_17 + 2 +
      VAR_15 ||
      (VAR_25 < VAR_17 + 2 +
       VAR_16 &&
       FUNC_0(VAR_24 + VAR_17) !=
       VAR_0)) {
   FUNC_1(VAR_4, "WPS: Invalid OOB Device "
       "Password length %u", VAR_25);
   return -1;
  }
  VAR_22->oob_dev_password = VAR_24;
  VAR_22->oob_dev_password_len = VAR_25;
  break;
 case 149:
  if (VAR_25 != 4) {
   FUNC_1(VAR_4, "WPS: Invalid OS Version length "
       "%u", VAR_25);
   return -1;
  }
  VAR_22->os_version = VAR_24;
  break;
 case 128:
  if (VAR_25 != 1) {
   FUNC_1(VAR_4, "WPS: Invalid Wi-Fi Protected "
       "Setup State length %u", VAR_25);
   return -1;
  }
  VAR_22->wps_state = VAR_24;
  break;
 case 176:
  if (VAR_25 != VAR_6) {
   FUNC_1(VAR_4, "WPS: Invalid Authenticator "
       "length %u", VAR_25);
   return -1;
  }
  VAR_22->authenticator = VAR_24;
  break;
 case 141:
  if (VAR_25 != VAR_9) {
   FUNC_1(VAR_4, "WPS: Invalid R-Hash1 length %u",
       VAR_25);
   return -1;
  }
  VAR_22->r_hash1 = VAR_24;
  break;
 case 140:
  if (VAR_25 != VAR_9) {
   FUNC_1(VAR_4, "WPS: Invalid R-Hash2 length %u",
       VAR_25);
   return -1;
  }
  VAR_22->r_hash2 = VAR_24;
  break;
 case 163:
  if (VAR_25 != VAR_9) {
   FUNC_1(VAR_4, "WPS: Invalid E-Hash1 length %u",
       VAR_25);
   return -1;
  }
  VAR_22->e_hash1 = VAR_24;
  break;
 case 162:
  if (VAR_25 != VAR_9) {
   FUNC_1(VAR_4, "WPS: Invalid E-Hash2 length %u",
       VAR_25);
   return -1;
  }
  VAR_22->e_hash2 = VAR_24;
  break;
 case 139:
  if (VAR_25 != VAR_18) {
   FUNC_1(VAR_4, "WPS: Invalid R-SNonce1 length "
       "%u", VAR_25);
   return -1;
  }
  VAR_22->r_snonce1 = VAR_24;
  break;
 case 138:
  if (VAR_25 != VAR_18) {
   FUNC_1(VAR_4, "WPS: Invalid R-SNonce2 length "
       "%u", VAR_25);
   return -1;
  }
  VAR_22->r_snonce2 = VAR_24;
  break;
 case 161:
  if (VAR_25 != VAR_18) {
   FUNC_1(VAR_4, "WPS: Invalid E-SNonce1 length "
       "%u", VAR_25);
   return -1;
  }
  VAR_22->e_snonce1 = VAR_24;
  break;
 case 160:
  if (VAR_25 != VAR_18) {
   FUNC_1(VAR_4, "WPS: Invalid E-SNonce2 length "
       "%u", VAR_25);
   return -1;
  }
  VAR_22->e_snonce2 = VAR_24;
  break;
 case 159:
  if (VAR_25 != VAR_10) {
   FUNC_1(VAR_4, "WPS: Invalid Key Wrap "
       "Authenticator length %u", VAR_25);
   return -1;
  }
  VAR_22->key_wrap_auth = VAR_24;
  break;
 case 175:
  if (VAR_25 != 2) {
   FUNC_1(VAR_4, "WPS: Invalid Authentication "
       "Type length %u", VAR_25);
   return -1;
  }
  VAR_22->auth_type = VAR_24;
  break;
 case 166:
  if (VAR_25 != 2) {
   FUNC_1(VAR_4, "WPS: Invalid Encryption "
       "Type length %u", VAR_25);
   return -1;
  }
  VAR_22->encr_type = VAR_24;
  break;
 case 153:
  if (VAR_25 != 1) {
   FUNC_1(VAR_4, "WPS: Invalid Network Index "
       "length %u", VAR_25);
   return -1;
  }
  VAR_22->network_idx = VAR_24;
  break;
 case 151:
  if (VAR_25 != 1) {
   FUNC_1(VAR_4, "WPS: Invalid Network Key Index "
       "length %u", VAR_25);
   return -1;
  }
  VAR_22->network_key_idx = VAR_24;
  break;
 case 158:
  if (VAR_25 != VAR_1) {
   FUNC_1(VAR_4, "WPS: Invalid MAC Address "
       "length %u", VAR_25);
   return -1;
  }
  VAR_22->mac_addr = VAR_24;
  break;
 case 136:
  if (VAR_25 != 1) {
   FUNC_1(VAR_4, "WPS: Invalid Selected Registrar"
       " length %u", VAR_25);
   return -1;
  }
  VAR_22->selected_registrar = VAR_24;
  break;
 case 144:
  if (VAR_25 != 1) {
   FUNC_1(VAR_4, "WPS: Invalid Request Type "
       "length %u", VAR_25);
   return -1;
  }
  VAR_22->request_type = VAR_24;
  break;
 case 143:
  if (VAR_25 != 1) {
   FUNC_1(VAR_4, "WPS: Invalid Response Type "
       "length %u", VAR_25);
   return -1;
  }
  VAR_22->response_type = VAR_24;
  break;
 case 157:
  VAR_22->manufacturer = VAR_24;
  if (VAR_25 > VAR_11)
   VAR_22->manufacturer_len = VAR_11;
  else
   VAR_22->manufacturer_len = VAR_25;
  break;
 case 156:
  VAR_22->model_name = VAR_24;
  if (VAR_25 > VAR_12)
   VAR_22->model_name_len = VAR_12;
  else
   VAR_22->model_name_len = VAR_25;
  break;
 case 155:
  VAR_22->model_number = VAR_24;
  if (VAR_25 > VAR_13)
   VAR_22->model_number_len = VAR_13;
  else
   VAR_22->model_number_len = VAR_25;
  break;
 case 134:
  VAR_22->serial_number = VAR_24;
  if (VAR_25 > VAR_20)
   VAR_22->serial_number_len = VAR_20;
  else
   VAR_22->serial_number_len = VAR_25;
  break;
 case 169:
  if (VAR_25 > VAR_7) {
   FUNC_1(VAR_4,
       "WPS: Ignore too long Device Name (len=%u)",
       VAR_25);
   break;
  }
  VAR_22->dev_name = VAR_24;
  VAR_22->dev_name_len = VAR_25;
  break;
 case 147:






  if (VAR_25 < 190 || VAR_25 > 192) {
   FUNC_1(VAR_4,
       "WPS: Ignore Public Key with unexpected length %u",
       VAR_25);
   break;
  }
  VAR_22->public_key = VAR_24;
  VAR_22->public_key_len = VAR_25;
  break;
 case 167:
  VAR_22->encr_settings = VAR_24;
  VAR_22->encr_settings_len = VAR_25;
  break;
 case 170:
  if (VAR_22->num_cred >= VAR_2) {
   FUNC_1(VAR_4, "WPS: Skipped Credential "
       "attribute (max %d credentials)",
       VAR_2);
   break;
  }
  VAR_22->cred[VAR_22->num_cred] = VAR_24;
  VAR_22->cred_len[VAR_22->num_cred] = VAR_25;
  VAR_22->num_cred++;
  break;
 case 133:
  if (VAR_25 > VAR_5) {
   FUNC_1(VAR_4,
       "WPS: Ignore too long SSID (len=%u)", VAR_25);
   break;
  }
  VAR_22->ssid = VAR_24;
  VAR_22->ssid_len = VAR_25;
  break;
 case 152:
  VAR_22->network_key = VAR_24;
  VAR_22->network_key_len = VAR_25;
  break;
 case 178:
  if (VAR_25 != 1) {
   FUNC_1(VAR_4, "WPS: Invalid AP Setup Locked "
       "length %u", VAR_25);
   return -1;
  }
  VAR_22->ap_setup_locked = VAR_24;
  break;
 case 145:
  if (VAR_25 != VAR_8) {
   FUNC_1(VAR_4, "WPS: Invalid Requested Device "
       "Type length %u", VAR_25);
   return -1;
  }
  if (VAR_22->num_req_dev_type >= VAR_3) {
   FUNC_1(VAR_4, "WPS: Skipped Requested Device "
       "Type attribute (max %u types)",
       VAR_3);
   break;
  }
  VAR_22->req_dev_type[VAR_22->num_req_dev_type] = VAR_24;
  VAR_22->num_req_dev_type++;
  break;
 case 137:
  if (VAR_25 > VAR_19 ||
      (VAR_25 % VAR_8) > 0) {
   FUNC_1(VAR_4, "WPS: Invalid Secondary Device "
       "Type length %u", VAR_25);
   return -1;
  }
  VAR_22->sec_dev_type_list = VAR_24;
  VAR_22->sec_dev_type_list_len = VAR_25;
  break;
 case 130:
  if (FUNC_2(VAR_22, VAR_24, VAR_25) < 0)
   return -1;
  break;
 case 179:
  if (VAR_25 != 2) {
   FUNC_1(VAR_4, "WPS: Invalid AP Channel "
       "length %u", VAR_25);
   return -1;
  }
  VAR_22->ap_channel = VAR_24;
  break;
 default:
  FUNC_1(VAR_4, "WPS: Unsupported attribute type 0x%x "
      "len=%u", VAR_23, VAR_25);
  break;
 }

 return 0;
}
