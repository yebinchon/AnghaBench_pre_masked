
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wpabuf {int dummy; } ;
struct eap_teap_data {scalar_t__ state; int ssl; struct wpabuf* peer_outer_tlvs; } ;
struct eap_sm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int* FUNC_2 (int ,int ,struct wpabuf*,size_t*) ;
 scalar_t__ FUNC_3 (struct eap_sm*,int *,struct wpabuf*,struct eap_teap_data*,int ,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct eap_teap_data*,int ) ;
 int FUNC_5 (int ,char*,struct wpabuf*) ;
 int FUNC_6 (int ,char*,...) ;
 struct wpabuf* FUNC_7 (int) ;
 struct wpabuf* FUNC_8 (int const*,int) ;
 int FUNC_9 (struct wpabuf*) ;
 int* FUNC_10 (struct wpabuf*) ;
 int FUNC_11 (struct wpabuf*) ;
 int FUNC_12 (struct wpabuf*,int) ;
 int FUNC_13 (struct wpabuf*,int) ;
 int FUNC_14 (struct wpabuf*,int const*,size_t) ;
 int FUNC_15 (struct wpabuf*,int) ;

__attribute__((used)) static void FUNC_16(struct eap_sm *VAR_11, void *VAR_12,
        struct wpabuf *VAR_13)
{
 struct eap_teap_data *VAR_14 = VAR_12;
 const u8 *VAR_15;
 size_t VAR_16;
 struct wpabuf *VAR_17 = VAR_13;
 u8 VAR_18;

 VAR_15 = FUNC_2(VAR_3, VAR_2, VAR_13, &VAR_16);
 if (!VAR_15 || VAR_16 < 1)
  return;

 VAR_18 = *VAR_15++;
 VAR_16--;

 if (VAR_18 & VAR_0) {


  u32 VAR_19 = 0, VAR_20;
  const u8 *VAR_21;

  if (VAR_14->state != VAR_7) {
   FUNC_6(VAR_6,
       "EAP-TEAP: Unexpected Outer TLVs in a message that is not the first message from the peer");
   return;
  }

  if (VAR_18 & VAR_1) {
   if (VAR_16 < 4) {
    FUNC_6(VAR_6,
        "EAP-TEAP: Too short message to include Message Length field");
    return;
   }

   VAR_19 = FUNC_1(VAR_15);
   VAR_15 += 4;
   VAR_16 -= 4;
   if (VAR_19 < 4) {
    FUNC_6(VAR_6,
        "EAP-TEAP: Message Length field has too msall value to include Outer TLV Length field");
    return;
   }
  }

  if (VAR_16 < 4) {
   FUNC_6(VAR_6,
       "EAP-TEAP: Too short message to include Outer TLVs Length field");
   return;
  }

  VAR_20 = FUNC_1(VAR_15);
  VAR_15 += 4;
  VAR_16 -= 4;

  FUNC_6(VAR_5,
      "EAP-TEAP: Message Length %u Outer TLV Length %u",
     VAR_19, VAR_20);
  if (VAR_16 < VAR_20) {
   FUNC_6(VAR_6,
       "EAP-TEAP: Too short message to include Outer TLVs field");
   return;
  }

  if (VAR_19 &&
      (VAR_19 < VAR_20 ||
       VAR_19 < 4 + VAR_20)) {
   FUNC_6(VAR_6,
       "EAP-TEAP: Message Length field has too small value to include Outer TLVs");
   return;
  }

  if (FUNC_11(VAR_13) < 4 + VAR_20 ||
      VAR_16 < VAR_20)
   return;
  VAR_17 = FUNC_7(FUNC_11(VAR_13) - 4 - VAR_20);
  if (!VAR_17)
   return;
  VAR_21 = FUNC_10(VAR_13);
  FUNC_15(VAR_17, *VAR_21++);
  FUNC_15(VAR_17, *VAR_21++);
  FUNC_12(VAR_17, FUNC_0(VAR_21) - 4 - VAR_20);
  VAR_21 += 2;
  FUNC_15(VAR_17, *VAR_21++);

  FUNC_15(VAR_17, VAR_18 & ~VAR_0);

  if (VAR_18 & VAR_1)
   FUNC_13(VAR_17, VAR_19 - 4 - VAR_20);

  FUNC_14(VAR_17, VAR_15, VAR_16 - VAR_20);
  VAR_15 += VAR_16 - VAR_20;
  FUNC_9(VAR_14->peer_outer_tlvs);
  VAR_14->peer_outer_tlvs = FUNC_8(VAR_15, VAR_20);
  if (!VAR_14->peer_outer_tlvs)
   return;
  FUNC_5(VAR_5, "EAP-TEAP: Outer TLVs",
    VAR_14->peer_outer_tlvs);

  FUNC_5(VAR_5,
    "EAP-TEAP: TLS Data message after Outer TLV removal",
    VAR_17);
  VAR_15 = FUNC_2(VAR_3, VAR_2, VAR_17,
           &VAR_16);
  if (!VAR_15 || VAR_16 < 1) {
   FUNC_6(VAR_6,
       "EAP-TEAP: Invalid frame after Outer TLV removal");
   return;
  }
 }

 if (VAR_14->state == VAR_7)
  FUNC_4(VAR_14, VAR_8);

 if (FUNC_3(VAR_11, &VAR_14->ssl, VAR_17, VAR_14,
       VAR_2, VAR_10,
       VAR_9) < 0)
  FUNC_4(VAR_14, VAR_4);

 if (VAR_17 != VAR_13)
  FUNC_9(VAR_17);
}
