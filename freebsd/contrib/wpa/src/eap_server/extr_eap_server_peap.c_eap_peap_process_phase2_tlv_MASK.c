
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_peap_data {int crypto_binding_used; scalar_t__ crypto_binding; scalar_t__ tlv_request; scalar_t__ crypto_binding_sent; } ;



 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int const*) ;
 int* FUNC_1 (int ,int ,struct wpabuf*,size_t*) ;
 int FUNC_2 (struct eap_peap_data*,int ) ;
 int FUNC_3 (struct eap_sm*,struct eap_peap_data*) ;
 scalar_t__ FUNC_4 (struct eap_sm*,struct eap_peap_data*,int const*,size_t) ;
 int FUNC_5 (int ,char*,int const*,size_t) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static void FUNC_7(struct eap_sm *VAR_10,
     struct eap_peap_data *VAR_11,
     struct wpabuf *VAR_12)
{
 const u8 *VAR_13;
 size_t VAR_14;
 const u8 *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
 size_t VAR_17 = 0, VAR_18 = 0;
 int VAR_19, VAR_20, VAR_21;

 VAR_13 = FUNC_1(VAR_3, VAR_2, VAR_12, &VAR_14);
 if (VAR_13 == ((void*)0)) {
  FUNC_6(VAR_5, "EAP-PEAP: Invalid EAP-TLV header");
  return;
 }


 FUNC_5(VAR_5, "EAP-PEAP: Received TLVs", VAR_13, VAR_14);
 while (VAR_14 >= 4) {
  VAR_20 = !!(VAR_13[0] & 0x80);
  VAR_19 = VAR_13[0] & 0x3f;
  VAR_19 = (VAR_19 << 8) | VAR_13[1];
  VAR_21 = ((int) VAR_13[2] << 8) | VAR_13[3];
  VAR_13 += 4;
  VAR_14 -= 4;
  if ((size_t) VAR_21 > VAR_14) {
   FUNC_6(VAR_5, "EAP-PEAP: TLV underrun "
       "(tlv_len=%d left=%lu)", VAR_21,
       (unsigned long) VAR_14);
   FUNC_2(VAR_11, VAR_4);
   return;
  }
  switch (VAR_19) {
  case 128:
   VAR_15 = VAR_13;
   VAR_17 = VAR_21;
   break;
  case 129:
   VAR_16 = VAR_13;
   VAR_18 = VAR_21;
   break;
  default:
   FUNC_6(VAR_5, "EAP-PEAP: Unsupported TLV Type "
       "%d%s", VAR_19,
       VAR_20 ? " (mandatory)" : "");
   if (VAR_20) {
    FUNC_2(VAR_11, VAR_4);
    return;
   }

   break;
  }

  VAR_13 += VAR_21;
  VAR_14 -= VAR_21;
 }
 if (VAR_14) {
  FUNC_6(VAR_5, "EAP-PEAP: Last TLV too short in "
      "Request (left=%lu)", (unsigned long) VAR_14);
  FUNC_2(VAR_11, VAR_4);
  return;
 }


 if (VAR_16 && VAR_11->crypto_binding_sent) {
  FUNC_5(VAR_5, "EAP-PEAP: Cryptobinding TLV",
       VAR_16, VAR_18);
  if (FUNC_4(VAR_10, VAR_11, VAR_16 - 4,
         VAR_18 + 4) < 0) {
   FUNC_2(VAR_11, VAR_4);
   return;
  }
  VAR_11->crypto_binding_used = 1;
 } else if (!VAR_16 && VAR_11->crypto_binding_sent &&
     VAR_11->crypto_binding == VAR_7) {
  FUNC_6(VAR_5, "EAP-PEAP: No cryptobinding TLV");
  FUNC_2(VAR_11, VAR_4);
  return;
 }

 if (VAR_15) {
  int VAR_22;
  const char *VAR_23;

  FUNC_5(VAR_5, "EAP-PEAP: Result TLV",
       VAR_15, VAR_17);
  if (VAR_17 < 2) {
   FUNC_6(VAR_6, "EAP-PEAP: Too short Result TLV "
       "(len=%lu)",
       (unsigned long) VAR_17);
   FUNC_2(VAR_11, VAR_4);
   return;
  }
  VAR_23 = VAR_11->tlv_request == VAR_9 ? "Success" :
   "Failure";
  VAR_22 = FUNC_0(VAR_15);
  if (VAR_22 == VAR_1) {
   FUNC_6(VAR_6, "EAP-PEAP: TLV Result - Success "
       "- requested %s", VAR_23);
   if (VAR_11->tlv_request == VAR_9) {
    FUNC_2(VAR_11, VAR_8);
    FUNC_3(VAR_10, VAR_11);
   } else {
    FUNC_2(VAR_11, VAR_4);
   }

  } else if (VAR_22 == VAR_0) {
   FUNC_6(VAR_6, "EAP-PEAP: TLV Result - Failure "
       "- requested %s", VAR_23);
   FUNC_2(VAR_11, VAR_4);
  } else {
   FUNC_6(VAR_6, "EAP-PEAP: Unknown TLV Result "
       "Status %d", VAR_22);
   FUNC_2(VAR_11, VAR_4);
  }
 }
}
