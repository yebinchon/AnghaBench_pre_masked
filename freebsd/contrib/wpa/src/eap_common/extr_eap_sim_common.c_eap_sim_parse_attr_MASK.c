
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sim_attrs {int notification; int counter; int selected_version; int client_error_code; int const* rand; size_t num_chal; int const* autn; int const* nonce_mt; int const* mac; int const* identity; size_t identity_len; int const* version_list; size_t version_list_len; int counter_too_small; int const* nonce_s; int const* iv; int const* encr_data; size_t encr_data_len; int const* next_pseudonym; size_t next_pseudonym_len; int const* next_reauth_id; size_t next_reauth_id_len; int const* res; size_t res_len; int const* auts; int const* checkcode; size_t checkcode_len; int result_ind; int const* kdf_input; size_t kdf_input_len; size_t kdf_count; int const* bidding; void** kdf; void* res_len_bits; int id_req; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* FUNC_0 (int const*) ;
 int FUNC_1 (struct eap_sim_attrs*,int ,int) ;
 int FUNC_2 (int ,char*,int const*,size_t) ;
 int FUNC_3 (int ,char*,...) ;

int FUNC_4(const u8 *VAR_21, const u8 *VAR_22,
         struct eap_sim_attrs *VAR_23, int VAR_24, int VAR_25)
{
 const u8 *VAR_26 = VAR_21, *VAR_27;
 size_t VAR_28, VAR_29, VAR_30, VAR_31;

 FUNC_1(VAR_23, 0, sizeof(*VAR_23));
 VAR_23->id_req = VAR_19;
 VAR_23->notification = -1;
 VAR_23->counter = -1;
 VAR_23->selected_version = -1;
 VAR_23->client_error_code = -1;

 while (VAR_26 < VAR_22) {
  if (VAR_26 + 2 > VAR_22) {
   FUNC_3(VAR_16, "EAP-SIM: Attribute overflow(1)");
   return -1;
  }
  FUNC_3(VAR_17, "EAP-SIM: Attribute: Type=%d Len=%d",
      VAR_26[0], VAR_26[1] * 4);
  if (VAR_26 + VAR_26[1] * 4 > VAR_22) {
   FUNC_3(VAR_16, "EAP-SIM: Attribute overflow "
       "(pos=%p len=%d end=%p)",
       VAR_26, VAR_26[1] * 4, VAR_22);
   return -1;
  }
  if (VAR_26[1] == 0) {
   FUNC_3(VAR_16, "EAP-SIM: Attribute underflow");
   return -1;
  }
  VAR_27 = VAR_26 + 2;
  VAR_28 = VAR_26[1] * 4 - 2;
  FUNC_2(VAR_17, "EAP-SIM: Attribute data",
       VAR_27, VAR_28);

  switch (VAR_26[0]) {
  case 132:
   FUNC_3(VAR_14, "EAP-SIM: AT_RAND");
   VAR_27 += 2;
   VAR_28 -= 2;
   if ((!VAR_24 && (VAR_28 % VAR_13)) ||
       (VAR_24 && VAR_28 != VAR_8)) {
    FUNC_3(VAR_16, "EAP-SIM: Invalid AT_RAND"
        " (len %lu)",
        (unsigned long) VAR_28);
    return -1;
   }
   VAR_23->rand = VAR_27;
   VAR_23->num_chal = VAR_28 / VAR_13;
   break;
  case 153:
   FUNC_3(VAR_14, "EAP-AKA: AT_AUTN");
   if (!VAR_24) {
    FUNC_3(VAR_14, "EAP-SIM: "
        "Unexpected AT_AUTN");
    return -1;
   }
   VAR_27 += 2;
   VAR_28 -= 2;
   if (VAR_28 != VAR_1) {
    FUNC_3(VAR_16, "EAP-AKA: Invalid AT_AUTN"
        " (len %lu)",
        (unsigned long) VAR_28);
    return -1;
   }
   VAR_23->autn = VAR_27;
   break;
  case 134:
   if (!VAR_25) {
    FUNC_3(VAR_15, "EAP-SIM: Unencrypted "
        "AT_PADDING");
    return -1;
   }
   FUNC_3(VAR_14, "EAP-SIM: (encr) AT_PADDING");
   for (VAR_30 = 2; VAR_30 < VAR_28; VAR_30++) {
    if (VAR_27[VAR_30] != 0) {
     FUNC_3(VAR_16, "EAP-SIM: (encr) "
         "AT_PADDING used a non-zero"
         " padding byte");
     FUNC_2(VAR_14, "EAP-SIM: "
          "(encr) padding bytes",
          VAR_27 + 2, VAR_28 - 2);
     return -1;
    }
   }
   break;
  case 137:
   FUNC_3(VAR_14, "EAP-SIM: AT_NONCE_MT");
   if (VAR_28 != 2 + VAR_10) {
    FUNC_3(VAR_16, "EAP-SIM: Invalid "
        "AT_NONCE_MT length");
    return -1;
   }
   VAR_23->nonce_mt = VAR_27 + 2;
   break;
  case 133:
   FUNC_3(VAR_14, "EAP-SIM: AT_PERMANENT_ID_REQ");
   VAR_23->id_req = VAR_20;
   break;
  case 140:
   FUNC_3(VAR_14, "EAP-SIM: AT_MAC");
   if (VAR_28 != 2 + VAR_9) {
    FUNC_3(VAR_16, "EAP-SIM: Invalid AT_MAC "
        "length");
    return -1;
   }
   VAR_23->mac = VAR_27 + 2;
   break;
  case 135:
   if (VAR_28 != 2) {
    FUNC_3(VAR_16, "EAP-SIM: Invalid "
        "AT_NOTIFICATION length %lu",
        (unsigned long) VAR_28);
    return -1;
   }
   VAR_23->notification = VAR_27[0] * 256 + VAR_27[1];
   FUNC_3(VAR_14, "EAP-SIM: AT_NOTIFICATION %d",
       VAR_23->notification);
   break;
  case 154:
   FUNC_3(VAR_14, "EAP-SIM: AT_ANY_ID_REQ");
   VAR_23->id_req = VAR_0;
   break;
  case 144:
   FUNC_3(VAR_14, "EAP-SIM: AT_IDENTITY");
   VAR_29 = FUNC_0(VAR_27);
   VAR_27 += 2;
   VAR_28 -= 2;
   if (VAR_29 > VAR_28) {
    FUNC_3(VAR_16, "EAP-SIM: Invalid "
        "AT_IDENTITY (Actual Length %lu, "
        "remaining length %lu)",
        (unsigned long) VAR_29,
        (unsigned long) VAR_28);
    return -1;
   }

   VAR_23->identity = VAR_27;
   VAR_23->identity_len = VAR_29;
   break;
  case 128:
   if (VAR_24) {
    FUNC_3(VAR_14, "EAP-AKA: "
        "Unexpected AT_VERSION_LIST");
    return -1;
   }
   VAR_31 = VAR_27[0] * 256 + VAR_27[1];
   FUNC_3(VAR_14, "EAP-SIM: AT_VERSION_LIST");
   if (VAR_31 < 2 || VAR_31 > VAR_28 - 2) {
    FUNC_3(VAR_18, "EAP-SIM: Invalid "
        "AT_VERSION_LIST (list_len=%lu "
        "attr_len=%lu)",
        (unsigned long) VAR_31,
        (unsigned long) VAR_28);
    return -1;
   }
   VAR_23->version_list = VAR_27 + 2;
   VAR_23->version_list_len = VAR_31;
   break;
  case 129:
   FUNC_3(VAR_14, "EAP-SIM: AT_SELECTED_VERSION");
   if (VAR_28 != 2) {
    FUNC_3(VAR_16, "EAP-SIM: Invalid "
        "AT_SELECTED_VERSION length %lu",
        (unsigned long) VAR_28);
    return -1;
   }
   VAR_23->selected_version = VAR_27[0] * 256 + VAR_27[1];
   FUNC_3(VAR_14, "EAP-SIM: AT_SELECTED_VERSION "
       "%d", VAR_23->selected_version);
   break;
  case 145:
   FUNC_3(VAR_14, "EAP-SIM: AT_FULLAUTH_ID_REQ");
   VAR_23->id_req = VAR_12;
   break;
  case 148:
   if (!VAR_25) {
    FUNC_3(VAR_15, "EAP-SIM: Unencrypted "
        "AT_COUNTER");
    return -1;
   }
   if (VAR_28 != 2) {
    FUNC_3(VAR_16, "EAP-SIM: (encr) Invalid "
        "AT_COUNTER (alen=%lu)",
        (unsigned long) VAR_28);
    return -1;
   }
   VAR_23->counter = VAR_27[0] * 256 + VAR_27[1];
   FUNC_3(VAR_14, "EAP-SIM: (encr) AT_COUNTER %d",
       VAR_23->counter);
   break;
  case 147:
   if (!VAR_25) {
    FUNC_3(VAR_15, "EAP-SIM: Unencrypted "
        "AT_COUNTER_TOO_SMALL");
    return -1;
   }
   if (VAR_28 != 2) {
    FUNC_3(VAR_16, "EAP-SIM: (encr) Invalid "
        "AT_COUNTER_TOO_SMALL (alen=%lu)",
        (unsigned long) VAR_28);
    return -1;
   }
   FUNC_3(VAR_14, "EAP-SIM: (encr) "
       "AT_COUNTER_TOO_SMALL");
   VAR_23->counter_too_small = 1;
   break;
  case 136:
   if (!VAR_25) {
    FUNC_3(VAR_15, "EAP-SIM: Unencrypted "
        "AT_NONCE_S");
    return -1;
   }
   FUNC_3(VAR_14, "EAP-SIM: (encr) "
       "AT_NONCE_S");
   if (VAR_28 != 2 + VAR_11) {
    FUNC_3(VAR_16, "EAP-SIM: (encr) Invalid "
        "AT_NONCE_S (alen=%lu)",
        (unsigned long) VAR_28);
    return -1;
   }
   VAR_23->nonce_s = VAR_27 + 2;
   break;
  case 149:
   if (VAR_28 != 2) {
    FUNC_3(VAR_16, "EAP-SIM: Invalid "
        "AT_CLIENT_ERROR_CODE length %lu",
        (unsigned long) VAR_28);
    return -1;
   }
   VAR_23->client_error_code = VAR_27[0] * 256 + VAR_27[1];
   FUNC_3(VAR_14, "EAP-SIM: AT_CLIENT_ERROR_CODE "
       "%d", VAR_23->client_error_code);
   break;
  case 143:
   FUNC_3(VAR_14, "EAP-SIM: AT_IV");
   if (VAR_28 != 2 + VAR_9) {
    FUNC_3(VAR_16, "EAP-SIM: Invalid AT_IV "
        "length %lu", (unsigned long) VAR_28);
    return -1;
   }
   VAR_23->iv = VAR_27 + 2;
   break;
  case 146:
   FUNC_3(VAR_14, "EAP-SIM: AT_ENCR_DATA");
   VAR_23->encr_data = VAR_27 + 2;
   VAR_23->encr_data_len = VAR_28 - 2;
   if (VAR_23->encr_data_len % 16) {
    FUNC_3(VAR_16, "EAP-SIM: Invalid "
        "AT_ENCR_DATA length %lu",
        (unsigned long)
        VAR_23->encr_data_len);
    return -1;
   }
   break;
  case 139:
   if (!VAR_25) {
    FUNC_3(VAR_15, "EAP-SIM: Unencrypted "
        "AT_NEXT_PSEUDONYM");
    return -1;
   }
   FUNC_3(VAR_14, "EAP-SIM: (encr) "
       "AT_NEXT_PSEUDONYM");
   VAR_29 = VAR_27[0] * 256 + VAR_27[1];
   if (VAR_29 > VAR_28 - 2) {
    FUNC_3(VAR_16, "EAP-SIM: (encr) Invalid"
        " AT_NEXT_PSEUDONYM (actual"
        " len %lu, attr len %lu)",
        (unsigned long) VAR_29,
        (unsigned long) VAR_28);
    return -1;
   }
   VAR_23->next_pseudonym = VAR_26 + 4;
   VAR_23->next_pseudonym_len = VAR_29;
   break;
  case 138:
   if (!VAR_25) {
    FUNC_3(VAR_15, "EAP-SIM: Unencrypted "
        "AT_NEXT_REAUTH_ID");
    return -1;
   }
   FUNC_3(VAR_14, "EAP-SIM: (encr) "
       "AT_NEXT_REAUTH_ID");
   VAR_29 = VAR_27[0] * 256 + VAR_27[1];
   if (VAR_29 > VAR_28 - 2) {
    FUNC_3(VAR_16, "EAP-SIM: (encr) Invalid"
        " AT_NEXT_REAUTH_ID (actual"
        " len %lu, attr len %lu)",
        (unsigned long) VAR_29,
        (unsigned long) VAR_28);
    return -1;
   }
   VAR_23->next_reauth_id = VAR_26 + 4;
   VAR_23->next_reauth_id_len = VAR_29;
   break;
  case 131:
   FUNC_3(VAR_14, "EAP-SIM: AT_RES");
   VAR_23->res_len_bits = FUNC_0(VAR_27);
   VAR_27 += 2;
   VAR_28 -= 2;
   if (!VAR_24 || VAR_28 < VAR_5 ||
       VAR_28 > VAR_4) {
    FUNC_3(VAR_16, "EAP-SIM: Invalid AT_RES "
        "(len %lu)",
        (unsigned long) VAR_28);
    return -1;
   }
   VAR_23->res = VAR_27;
   VAR_23->res_len = VAR_28;
   break;
  case 152:
   FUNC_3(VAR_14, "EAP-AKA: AT_AUTS");
   if (!VAR_24) {
    FUNC_3(VAR_14, "EAP-SIM: "
        "Unexpected AT_AUTS");
    return -1;
   }
   if (VAR_28 != VAR_2) {
    FUNC_3(VAR_16, "EAP-AKA: Invalid AT_AUTS"
        " (len %lu)",
        (unsigned long) VAR_28);
    return -1;
   }
   VAR_23->auts = VAR_27;
   break;
  case 150:
   FUNC_3(VAR_14, "EAP-AKA: AT_CHECKCODE");
   if (!VAR_24) {
    FUNC_3(VAR_14, "EAP-SIM: "
        "Unexpected AT_CHECKCODE");
    return -1;
   }
   VAR_27 += 2;
   VAR_28 -= 2;
   if (VAR_28 != 0 && VAR_28 != VAR_3 &&
       VAR_28 != VAR_6) {
    FUNC_3(VAR_16, "EAP-AKA: Invalid "
        "AT_CHECKCODE (len %lu)",
        (unsigned long) VAR_28);
    return -1;
   }
   VAR_23->checkcode = VAR_27;
   VAR_23->checkcode_len = VAR_28;
   break;
  case 130:
   if (VAR_25) {
    FUNC_3(VAR_15, "EAP-SIM: Encrypted "
        "AT_RESULT_IND");
    return -1;
   }
   if (VAR_28 != 2) {
    FUNC_3(VAR_16, "EAP-SIM: Invalid "
        "AT_RESULT_IND (alen=%lu)",
        (unsigned long) VAR_28);
    return -1;
   }
   FUNC_3(VAR_14, "EAP-SIM: AT_RESULT_IND");
   VAR_23->result_ind = 1;
   break;
  default:
   if (VAR_26[0] < 128) {
    FUNC_3(VAR_16, "EAP-SIM: Unrecognized "
        "non-skippable attribute %d",
        VAR_26[0]);
    return -1;
   }

   FUNC_3(VAR_14, "EAP-SIM: Unrecognized skippable"
       " attribute %d ignored", VAR_26[0]);
   break;
  }

  VAR_26 += VAR_26[1] * 4;
 }

 FUNC_3(VAR_14, "EAP-SIM: Attributes parsed successfully "
     "(aka=%d encr=%d)", VAR_24, VAR_25);

 return 0;
}
