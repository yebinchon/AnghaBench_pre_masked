
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct csrreg {int key; int val; } ;
struct csrdirectory {int crc_len; int crc; int * entry; } ;
struct crom_context {int dummy; } ;






 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int,char*,int) ;
 struct csrreg* FUNC_2 (struct crom_context*) ;
 int FUNC_3 (struct crom_context*,char*,int) ;
 int FUNC_4 (char*,int,char*,int,...) ;
 int FUNC_5 (char*) ;

char *
FUNC_6(struct crom_context *VAR_1, char *VAR_2, int VAR_3)
{
 struct csrreg *VAR_4;
 struct csrdirectory *VAR_5;
 char *VAR_6;
 uint16_t VAR_7;

 VAR_4 = FUNC_2(VAR_1);
 switch (VAR_4->key & VAR_0) {
 case 129:




  *VAR_2 = '\0';

  break;
 case 131:
  VAR_3 -= FUNC_4(VAR_2, VAR_3, "offset=0x%04x(%d)",
      VAR_4->val, VAR_4->val);
  VAR_2 += FUNC_5(VAR_2);
  break;
 case 128:

 case 130:
  VAR_5 = (struct csrdirectory *)(VAR_4 + VAR_4->val);
  VAR_7 = FUNC_0((uint32_t *)&VAR_5->entry[0], VAR_5->crc_len);
  VAR_3 -= FUNC_4(VAR_2, VAR_3, "len=%d crc=0x%04x(%s) ",
      VAR_5->crc_len, VAR_5->crc,
      (VAR_7 == VAR_5->crc) ? "OK" : "NG");
  VAR_2 += FUNC_5(VAR_2);
 }
 switch (VAR_4->key) {
 case 0x03:
  VAR_6 = "module_vendor_ID";
  break;
 case 0x04:
  VAR_6 = "hardware_version";
  break;
 case 0x0c:
  VAR_6 = "node_capabilities";
  break;
 case 0x12:
  VAR_6 = "unit_spec_ID";
  break;
 case 0x13:
  VAR_6 = "unit_sw_version";
  FUNC_1(0, VAR_4->val, VAR_2, VAR_3);
  break;
 case 0x14:
  VAR_6 = "logical_unit_number";
  break;
 case 0x17:
  VAR_6 = "model_ID";
  break;
 case 0x38:
  VAR_6 = "command_set_spec_ID";
  break;
 case 0x39:
  VAR_6 = "command_set";
  break;
 case 0x3a:
  VAR_6 = "unit_characteristics";
  break;
 case 0x3b:
  VAR_6 = "command_set_revision";
  break;
 case 0x3c:
  VAR_6 = "firmware_revision";
  break;
 case 0x3d:
  VAR_6 = "reconnect_timeout";
  break;
 case 0x54:
  VAR_6 = "management_agent";
  break;
 case 0x81:
  VAR_6 = "text_leaf";
  FUNC_3(VAR_1, VAR_2 + FUNC_5(VAR_2), VAR_3);
  break;
 case 0xd1:
  VAR_6 = "unit_directory";
  break;
 case 0xd4:
  VAR_6 = "logical_unit_directory";
  break;
 default:
  VAR_6 = "unknown";
 }
 return VAR_6;
}
