
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;
struct teap_tlv_hdr {int dummy; } ;
struct teap_tlv_crypto_binding {int msk_compound_mac; int emsk_compound_mac; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int const*,int ,int *,size_t,int *,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (size_t) ;
 int FUNC_4 (int *,struct teap_tlv_crypto_binding const*,size_t) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,char*,int *,size_t) ;
 int FUNC_7 (int ,char*,int const*,int ) ;
 struct teap_tlv_crypto_binding const* FUNC_8 (struct wpabuf const*) ;
 size_t FUNC_9 (struct wpabuf const*) ;

int FUNC_10(u16 VAR_4, const struct teap_tlv_crypto_binding *VAR_5,
     const struct wpabuf *VAR_6,
     const struct wpabuf *VAR_7,
     const u8 *VAR_8, u8 *VAR_9)
{
 u8 *VAR_10, *VAR_11;
 size_t VAR_12, VAR_13;
 struct teap_tlv_crypto_binding *VAR_14;
 int VAR_15;


 VAR_12 = sizeof(struct teap_tlv_hdr) + FUNC_0(VAR_5->length);
 VAR_13 = VAR_12 + 1;
 if (VAR_6)
  VAR_13 += FUNC_9(VAR_6);
 if (VAR_7)
  VAR_13 += FUNC_9(VAR_7);
 VAR_11 = FUNC_3(VAR_13);
 if (!VAR_11)
  return -1;

 VAR_10 = VAR_11;


 FUNC_4(VAR_10, VAR_5, VAR_12);
 VAR_10 += VAR_12;
 VAR_14 = (struct teap_tlv_crypto_binding *) VAR_11;
 FUNC_5(VAR_14->emsk_compound_mac, 0, VAR_1);
 FUNC_5(VAR_14->msk_compound_mac, 0, VAR_1);






 *VAR_10++ = VAR_2;



 if (VAR_6) {
  FUNC_4(VAR_10, FUNC_8(VAR_6),
     FUNC_9(VAR_6));
  VAR_10 += FUNC_9(VAR_6);
 }



 if (VAR_7) {
  FUNC_4(VAR_10, FUNC_8(VAR_7),
     FUNC_9(VAR_7));
  VAR_10 += FUNC_9(VAR_7);
 }

 VAR_13 = VAR_10 - VAR_11;

 FUNC_7(VAR_3,
   "EAP-TEAP: CMK for Compound MAC calculation",
   VAR_8, VAR_0);
 FUNC_6(VAR_3,
      "EAP-TEAP: BUFFER for Compound MAC calculation",
      VAR_11, VAR_13);
 VAR_15 = FUNC_1(VAR_4, VAR_8, VAR_0,
          VAR_11, VAR_13,
          VAR_9, VAR_1);
 FUNC_2(VAR_11);

 return VAR_15;
}
