
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_fast_tlv_parse {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (struct eap_fast_tlv_parse*,int,int*,size_t) ;
 struct wpabuf* FUNC_2 (int ,int) ;
 int FUNC_3 (struct eap_fast_tlv_parse*,int ,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct wpabuf*) ;
 int* FUNC_6 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_7(struct wpabuf *VAR_2,
        struct eap_fast_tlv_parse *VAR_3,
        struct wpabuf **VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 size_t VAR_8;
 u8 *VAR_9, *VAR_10;

 FUNC_3(VAR_3, 0, sizeof(*VAR_3));


 VAR_9 = FUNC_6(VAR_2);
 VAR_10 = VAR_9 + FUNC_5(VAR_2);
 while (VAR_10 - VAR_9 > 4) {
  VAR_5 = VAR_9[0] & 0x80;
  VAR_6 = FUNC_0(VAR_9) & 0x3fff;
  VAR_9 += 2;
  VAR_8 = FUNC_0(VAR_9);
  VAR_9 += 2;
  if (VAR_8 > (size_t) (VAR_10 - VAR_9)) {
   FUNC_4(VAR_1, "EAP-FAST: TLV overflow");
   return -1;
  }
  FUNC_4(VAR_0, "EAP-FAST: Received Phase 2: "
      "TLV type %d length %u%s",
      VAR_6, (unsigned int) VAR_8,
      VAR_5 ? " (mandatory)" : "");

  VAR_7 = FUNC_1(VAR_3, VAR_6, VAR_9, VAR_8);
  if (VAR_7 == -2)
   break;
  if (VAR_7 < 0) {
   if (VAR_5) {
    FUNC_4(VAR_0, "EAP-FAST: Nak unknown "
        "mandatory TLV type %d", VAR_6);
    *VAR_4 = FUNC_2(0, VAR_6);
    break;
   } else {
    FUNC_4(VAR_0, "EAP-FAST: ignored "
        "unknown optional TLV type %d",
        VAR_6);
   }
  }

  VAR_9 += VAR_8;
 }

 return 0;
}
