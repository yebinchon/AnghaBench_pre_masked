
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee802_11_elems {int const* assoc_delay_info; int const* fils_req_params; size_t fils_req_params_len; int const* fils_key_confirm; size_t fils_key_confirm_len; int const* fils_session; int const* fils_hlp; size_t fils_hlp_len; int const* fils_ip_addr_assign; size_t fils_ip_addr_assign_len; int const* key_delivery; size_t key_delivery_len; int const* fils_wrapped_data; size_t fils_wrapped_data_len; int const* fils_pk; size_t fils_pk_len; int const* fils_nonce; int const* owe_dh; size_t owe_dh_len; int const* password_id; size_t password_id_len; int const* he_capabilities; size_t he_capabilities_len; int const* he_operation; size_t he_operation_len; int const* oci; size_t oci_len; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static int FUNC_1(const u8 *VAR_5, size_t VAR_6,
          struct ieee802_11_elems *VAR_7,
          int VAR_8)
{
 u8 VAR_9;

 if (VAR_6 < 1) {
  if (VAR_8) {
   FUNC_0(VAR_3,
       "short information element (Ext)");
  }
  return -1;
 }

 VAR_9 = *VAR_5++;
 VAR_6--;

 switch (VAR_9) {
 case 142:
  if (VAR_6 != 1)
   break;
  VAR_7->assoc_delay_info = VAR_5;
  break;
 case 136:
  if (VAR_6 < 3)
   break;
  VAR_7->fils_req_params = VAR_5;
  VAR_7->fils_req_params_len = VAR_6;
  break;
 case 139:
  VAR_7->fils_key_confirm = VAR_5;
  VAR_7->fils_key_confirm_len = VAR_6;
  break;
 case 135:
  if (VAR_6 != VAR_2)
   break;
  VAR_7->fils_session = VAR_5;
  break;
 case 141:
  if (VAR_6 < 2 * VAR_0)
   break;
  VAR_7->fils_hlp = VAR_5;
  VAR_7->fils_hlp_len = VAR_6;
  break;
 case 140:
  if (VAR_6 < 1)
   break;
  VAR_7->fils_ip_addr_assign = VAR_5;
  VAR_7->fils_ip_addr_assign_len = VAR_6;
  break;
 case 131:
  if (VAR_6 < VAR_4)
   break;
  VAR_7->key_delivery = VAR_5;
  VAR_7->key_delivery_len = VAR_6;
  break;
 case 134:
  VAR_7->fils_wrapped_data = VAR_5;
  VAR_7->fils_wrapped_data_len = VAR_6;
  break;
 case 137:
  if (VAR_6 < 1)
   break;
  VAR_7->fils_pk = VAR_5;
  VAR_7->fils_pk_len = VAR_6;
  break;
 case 138:
  if (VAR_6 != VAR_1)
   break;
  VAR_7->fils_nonce = VAR_5;
  break;
 case 129:
  if (VAR_6 < 2)
   break;
  VAR_7->owe_dh = VAR_5;
  VAR_7->owe_dh_len = VAR_6;
  break;
 case 128:
  VAR_7->password_id = VAR_5;
  VAR_7->password_id_len = VAR_6;
  break;
 case 133:
  VAR_7->he_capabilities = VAR_5;
  VAR_7->he_capabilities_len = VAR_6;
  break;
 case 132:
  VAR_7->he_operation = VAR_5;
  VAR_7->he_operation_len = VAR_6;
  break;
 case 130:
  VAR_7->oci = VAR_5;
  VAR_7->oci_len = VAR_6;
  break;
 default:
  if (VAR_8) {
   FUNC_0(VAR_3,
       "IEEE 802.11 element parsing ignored unknown element extension (ext_id=%u elen=%u)",
       VAR_9, (unsigned int) VAR_6);
  }
  return -1;
 }

 return 0;
}
