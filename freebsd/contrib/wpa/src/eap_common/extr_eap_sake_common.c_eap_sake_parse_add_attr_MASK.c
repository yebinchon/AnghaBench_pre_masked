
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sake_parse_attr {int const* rand_s; int const* rand_p; int const* mic_s; int const* mic_p; int const* serverid; int serverid_len; int const* peerid; int peerid_len; int const* spi_s; int spi_s_len; int const* spi_p; int spi_p_len; int const* any_id_req; int const* perm_id_req; int const* encr_data; int encr_data_len; int const* iv; int iv_len; int const* next_tmpid; int next_tmpid_len; int const* msk_life; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static int FUNC_1(struct eap_sake_parse_attr *VAR_3,
       u8 VAR_4, u8 VAR_5, const u8 *VAR_6)
{
 size_t VAR_7;

 switch (VAR_4) {
 case 131:
  FUNC_0(VAR_2, "EAP-SAKE: Parse: AT_RAND_S");
  if (VAR_5 != VAR_1) {
   FUNC_0(VAR_2, "EAP-SAKE: AT_RAND_S with "
       "invalid payload length %d", VAR_5);
   return -1;
  }
  VAR_3->rand_s = VAR_6;
  break;
 case 132:
  FUNC_0(VAR_2, "EAP-SAKE: Parse: AT_RAND_P");
  if (VAR_5 != VAR_1) {
   FUNC_0(VAR_2, "EAP-SAKE: AT_RAND_P with "
       "invalid payload length %d", VAR_5);
   return -1;
  }
  VAR_3->rand_p = VAR_6;
  break;
 case 138:
  FUNC_0(VAR_2, "EAP-SAKE: Parse: AT_MIC_S");
  if (VAR_5 != VAR_0) {
   FUNC_0(VAR_2, "EAP-SAKE: AT_MIC_S with "
       "invalid payload length %d", VAR_5);
   return -1;
  }
  VAR_3->mic_s = VAR_6;
  break;
 case 139:
  FUNC_0(VAR_2, "EAP-SAKE: Parse: AT_MIC_P");
  if (VAR_5 != VAR_0) {
   FUNC_0(VAR_2, "EAP-SAKE: AT_MIC_P with "
       "invalid payload length %d", VAR_5);
   return -1;
  }
  VAR_3->mic_p = VAR_6;
  break;
 case 130:
  FUNC_0(VAR_2, "EAP-SAKE: Parse: AT_SERVERID");
  VAR_3->serverid = VAR_6;
  VAR_3->serverid_len = VAR_5;
  break;
 case 134:
  FUNC_0(VAR_2, "EAP-SAKE: Parse: AT_PEERID");
  VAR_3->peerid = VAR_6;
  VAR_3->peerid_len = VAR_5;
  break;
 case 128:
  FUNC_0(VAR_2, "EAP-SAKE: Parse: AT_SPI_S");
  VAR_3->spi_s = VAR_6;
  VAR_3->spi_s_len = VAR_5;
  break;
 case 129:
  FUNC_0(VAR_2, "EAP-SAKE: Parse: AT_SPI_P");
  VAR_3->spi_p = VAR_6;
  VAR_3->spi_p_len = VAR_5;
  break;
 case 142:
  FUNC_0(VAR_2, "EAP-SAKE: Parse: AT_ANY_ID_REQ");
  if (VAR_5 != 2) {
   FUNC_0(VAR_2, "EAP-SAKE: Invalid AT_ANY_ID_REQ"
       " payload length %d", VAR_5);
   return -1;
  }
  VAR_3->any_id_req = VAR_6;
  break;
 case 133:
  FUNC_0(VAR_2, "EAP-SAKE: Parse: AT_PERM_ID_REQ");
  if (VAR_5 != 2) {
   FUNC_0(VAR_2, "EAP-SAKE: Invalid "
       "AT_PERM_ID_REQ payload length %d", VAR_5);
   return -1;
  }
  VAR_3->perm_id_req = VAR_6;
  break;
 case 141:
  FUNC_0(VAR_2, "EAP-SAKE: Parse: AT_ENCR_DATA");
  VAR_3->encr_data = VAR_6;
  VAR_3->encr_data_len = VAR_5;
  break;
 case 140:
  FUNC_0(VAR_2, "EAP-SAKE: Parse: AT_IV");
  VAR_3->iv = VAR_6;
  VAR_3->iv_len = VAR_5;
  break;
 case 135:
  FUNC_0(VAR_2, "EAP-SAKE: Parse: AT_PADDING");
  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
   if (VAR_6[VAR_7]) {
    FUNC_0(VAR_2, "EAP-SAKE: AT_PADDING "
        "with non-zero pad byte");
    return -1;
   }
  }
  break;
 case 136:
  FUNC_0(VAR_2, "EAP-SAKE: Parse: AT_NEXT_TMPID");
  VAR_3->next_tmpid = VAR_6;
  VAR_3->next_tmpid_len = VAR_5;
  break;
 case 137:
  FUNC_0(VAR_2, "EAP-SAKE: Parse: AT_MSK_LIFE");
  if (VAR_5 != 4) {
   FUNC_0(VAR_2, "EAP-SAKE: Invalid "
       "AT_MSK_LIFE payload length %d", VAR_5);
   return -1;
  }
  VAR_3->msk_life = VAR_6;
  break;
 default:
  if (VAR_4 < 128) {
   FUNC_0(VAR_2, "EAP-SAKE: Unknown non-skippable"
       " attribute %d", VAR_4);
   return -1;
  }
  FUNC_0(VAR_2, "EAP-SAKE: Ignoring unknown skippable "
      "attribute %d", VAR_4);
  break;
 }

 if (VAR_3->iv && !VAR_3->encr_data) {
  FUNC_0(VAR_2, "EAP-SAKE: AT_IV included without "
      "AT_ENCR_DATA");
  return -1;
 }

 return 0;
}
