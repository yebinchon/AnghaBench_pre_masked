
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_peap_data {scalar_t__ crypto_binding; } ;
struct eap_method_ret {int methodState; void* decision; } ;


 void* VAR_0 ;
 void* VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (struct wpabuf const*) ;
 int* FUNC_2 (int ,int ,struct wpabuf const*,size_t*) ;
 struct wpabuf* FUNC_3 (int ,int) ;
 struct wpabuf* FUNC_4 (struct eap_sm*,struct eap_peap_data*,int ,int ,int) ;
 scalar_t__ FUNC_5 (struct eap_sm*,struct eap_peap_data*,int const*,size_t) ;
 int FUNC_6 (int ,char*,int const*,size_t) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static int FUNC_8(struct eap_sm *VAR_11, struct eap_peap_data *VAR_12,
      struct eap_method_ret *VAR_13,
      const struct wpabuf *VAR_14, struct wpabuf **VAR_15,
      int VAR_16)
{
 size_t VAR_17, VAR_18;
 const u8 *VAR_19;
 const u8 *VAR_20 = ((void*)0), *VAR_21 = ((void*)0);
 size_t VAR_22 = 0, VAR_23 = 0;
 int VAR_24, VAR_25;


 VAR_19 = FUNC_2(VAR_5, VAR_4, VAR_14, &VAR_17);
 if (VAR_19 == ((void*)0))
  return -1;
 FUNC_6(VAR_7, "EAP-TLV: Received TLVs", VAR_19, VAR_17);
 while (VAR_17 >= 4) {
  VAR_25 = !!(VAR_19[0] & 0x80);
  VAR_24 = FUNC_0(VAR_19) & 0x3fff;
  VAR_19 += 2;
  VAR_18 = FUNC_0(VAR_19);
  VAR_19 += 2;
  VAR_17 -= 4;
  if (VAR_18 > VAR_17) {
   FUNC_7(VAR_7, "EAP-TLV: TLV underrun "
       "(tlv_len=%lu left=%lu)",
       (unsigned long) VAR_18,
       (unsigned long) VAR_17);
   return -1;
  }
  switch (VAR_24) {
  case 128:
   VAR_20 = VAR_19;
   VAR_22 = VAR_18;
   break;
  case 129:
   VAR_21 = VAR_19;
   VAR_23 = VAR_18;
   break;
  default:
   FUNC_7(VAR_7, "EAP-TLV: Unsupported TLV Type "
       "%d%s", VAR_24,
       VAR_25 ? " (mandatory)" : "");
   if (VAR_25) {


    *VAR_15 = FUNC_3(FUNC_1(VAR_14),
         VAR_24);
    return *VAR_15 == ((void*)0) ? -1 : 0;
   }

   break;
  }

  VAR_19 += VAR_18;
  VAR_17 -= VAR_18;
 }
 if (VAR_17) {
  FUNC_7(VAR_7, "EAP-TLV: Last TLV too short in "
      "Request (left=%lu)", (unsigned long) VAR_17);
  return -1;
 }


 if (VAR_21 && VAR_12->crypto_binding != VAR_9) {
  FUNC_6(VAR_7, "EAP-PEAP: Cryptobinding TLV",
       VAR_21, VAR_23);
  if (FUNC_5(VAR_11, VAR_12, VAR_21 - 4,
         VAR_23 + 4) < 0) {
   if (VAR_20 == ((void*)0))
    return -1;
   VAR_16 = 1;
   VAR_21 = ((void*)0);


  }
 } else if (!VAR_21 && VAR_12->crypto_binding == VAR_10) {
  FUNC_7(VAR_7, "EAP-PEAP: No cryptobinding TLV");
  return -1;
 }

 if (VAR_20) {
  int VAR_26, VAR_27;
  FUNC_6(VAR_7, "EAP-TLV: Result TLV",
       VAR_20, VAR_22);
  if (VAR_22 < 2) {
   FUNC_7(VAR_8, "EAP-TLV: Too short Result TLV "
       "(len=%lu)",
       (unsigned long) VAR_22);
   return -1;
  }
  VAR_26 = FUNC_0(VAR_20);
  if (VAR_26 == VAR_3) {
   FUNC_7(VAR_8, "EAP-TLV: TLV Result - Success "
       "- EAP-TLV/Phase2 Completed");
   if (VAR_16) {
    FUNC_7(VAR_8, "EAP-TLV: Earlier failure"
        " - force failed Phase 2");
    VAR_27 = VAR_2;
    VAR_13->decision = VAR_0;
   } else {
    VAR_27 = VAR_3;
    VAR_13->decision = VAR_1;
   }
  } else if (VAR_26 == VAR_2) {
   FUNC_7(VAR_8, "EAP-TLV: TLV Result - Failure");
   VAR_27 = VAR_2;
   VAR_13->decision = VAR_0;
  } else {
   FUNC_7(VAR_8, "EAP-TLV: Unknown TLV Result "
       "Status %d", VAR_26);
   VAR_27 = VAR_2;
   VAR_13->decision = VAR_0;
  }
  VAR_13->methodState = VAR_6;

  *VAR_15 = FUNC_4(VAR_11, VAR_12, VAR_21 != ((void*)0),
          FUNC_1(VAR_14), VAR_27);
 }

 return 0;
}
