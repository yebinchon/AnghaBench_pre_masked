
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
 struct wpabuf* FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct eap_teap_tlv_parse*,int ,int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct wpabuf*) ;
 int* FUNC_7 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_8(struct wpabuf *VAR_2,
        struct eap_teap_tlv_parse *VAR_3,
        struct wpabuf **VAR_4)
{
 u16 VAR_5;
 int VAR_6, VAR_7;
 size_t VAR_8;
 u8 *VAR_9, *VAR_10;

 FUNC_4(VAR_3, 0, sizeof(*VAR_3));


 VAR_9 = FUNC_7(VAR_2);
 VAR_10 = VAR_9 + FUNC_6(VAR_2);
 while (VAR_10 - VAR_9 >= 4) {
  VAR_6 = VAR_9[0] & 0x80;
  VAR_5 = FUNC_0(VAR_9) & 0x3fff;
  VAR_9 += 2;
  VAR_8 = FUNC_0(VAR_9);
  VAR_9 += 2;
  if (VAR_8 > (size_t) (VAR_10 - VAR_9)) {
   FUNC_5(VAR_1, "EAP-TEAP: TLV overflow");
   return -1;
  }
  FUNC_5(VAR_0,
      "EAP-TEAP: Received Phase 2: TLV type %u (%s) length %u%s",
      VAR_5, FUNC_3(VAR_5),
      (unsigned int) VAR_8,
      VAR_6 ? " (mandatory)" : "");

  VAR_7 = FUNC_1(VAR_3, VAR_5, VAR_9, VAR_8);
  if (VAR_7 == -2)
   break;
  if (VAR_7 < 0) {
   if (VAR_6) {
    FUNC_5(VAR_0,
        "EAP-TEAP: NAK unknown mandatory TLV type %u",
        VAR_5);
    *VAR_4 = FUNC_2(0, VAR_5);
    break;
   }

   FUNC_5(VAR_0,
       "EAP-TEAP: Ignore unknown optional TLV type %u",
       VAR_5);
  }

  VAR_9 += VAR_8;
 }

 return 0;
}
