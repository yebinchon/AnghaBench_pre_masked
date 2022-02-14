
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;
struct eap_teap_tlv_parse {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (struct eap_teap_tlv_parse*,int,int*,size_t) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct eap_teap_tlv_parse*,int ,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct wpabuf*) ;
 int* FUNC_6 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_7(struct wpabuf *VAR_2,
          struct eap_teap_tlv_parse *VAR_3)
{
 u16 VAR_4;
 int VAR_5, VAR_6;
 size_t VAR_7;
 u8 *VAR_8, *VAR_9;

 FUNC_3(VAR_3, 0, sizeof(*VAR_3));

 VAR_8 = FUNC_6(VAR_2);
 VAR_9 = VAR_8 + FUNC_5(VAR_2);
 while (VAR_9 - VAR_8 > 4) {
  VAR_5 = VAR_8[0] & 0x80;
  VAR_4 = FUNC_0(VAR_8) & 0x3fff;
  VAR_8 += 2;
  VAR_7 = FUNC_0(VAR_8);
  VAR_8 += 2;
  if (VAR_7 > (size_t) (VAR_9 - VAR_8)) {
   FUNC_4(VAR_1, "EAP-TEAP: TLV overflow");
   return -1;
  }
  FUNC_4(VAR_0,
      "EAP-TEAP: Received Phase 2: TLV type %u (%s) length %u%s",
      VAR_4, FUNC_2(VAR_4),
      (unsigned int) VAR_7,
      VAR_5 ? " (mandatory)" : "");

  VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_8, VAR_7);
  if (VAR_6 == -2)
   break;
  if (VAR_6 < 0) {
   if (VAR_5) {
    FUNC_4(VAR_0,
        "EAP-TEAP: NAK unknown mandatory TLV type %u",
        VAR_4);

    break;
   }

   FUNC_4(VAR_0,
       "EAP-TEAP: Ignore unknown optional TLV type %u",
       VAR_4);
  }

  VAR_8 += VAR_7;
 }

 return 0;
}
