
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct wpabuf const wpabuf ;
struct eap_sm {int ssl_ctx; } ;
struct TYPE_2__ {int conn; } ;
struct eap_peap_data {scalar_t__ peap_version; scalar_t__ state; TYPE_1__ ssl; struct wpabuf const* pending_phase2_resp; } ;
struct eap_hdr {long code; int identifier; int length; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct eap_sm*,struct eap_peap_data*,struct wpabuf const*) ;
 int FUNC_2 (struct eap_sm*,struct eap_peap_data*) ;
 int FUNC_3 (struct eap_peap_data*,int ) ;
 int FUNC_4 (struct eap_sm*,struct eap_peap_data*) ;
 int FUNC_5 (size_t) ;
 struct wpabuf const* FUNC_6 (int ,int ,struct wpabuf const*) ;
 int FUNC_7 (int ,char*,struct wpabuf const*) ;
 int FUNC_8 (int ,char*,...) ;
 struct wpabuf const* FUNC_9 (size_t) ;
 int FUNC_10 (struct wpabuf const*) ;
 struct eap_hdr* FUNC_11 (struct wpabuf const*) ;
 size_t FUNC_12 (struct wpabuf const*) ;
 struct eap_hdr* FUNC_13 (struct wpabuf const*,int) ;
 int FUNC_14 (struct wpabuf const*,struct wpabuf const*) ;

__attribute__((used)) static void FUNC_15(struct eap_sm *VAR_6,
        struct eap_peap_data *VAR_7,
        const struct wpabuf *VAR_8,
        struct wpabuf *VAR_9)
{
 struct wpabuf *VAR_10;
 const struct eap_hdr *VAR_11;
 size_t VAR_12;

 FUNC_8(VAR_1, "EAP-PEAP: received %lu bytes encrypted data for"
     " Phase 2", (unsigned long) FUNC_12(VAR_9));

 if (VAR_7->pending_phase2_resp) {
  FUNC_8(VAR_1, "EAP-PEAP: Pending Phase 2 response - "
      "skip decryption and use old data");
  FUNC_1(VAR_6, VAR_7,
       VAR_7->pending_phase2_resp);
  FUNC_10(VAR_7->pending_phase2_resp);
  VAR_7->pending_phase2_resp = ((void*)0);
  return;
 }

 VAR_10 = FUNC_6(VAR_6->ssl_ctx, VAR_7->ssl.conn,
           VAR_9);
 if (VAR_10 == ((void*)0)) {
  FUNC_8(VAR_2, "EAP-PEAP: Failed to decrypt Phase 2 "
      "data");
  FUNC_3(VAR_7, VAR_0);
  return;
 }

 FUNC_7(VAR_1, "EAP-PEAP: Decrypted Phase 2 EAP",
       VAR_10);

 if (VAR_7->peap_version == 0 && VAR_7->state != VAR_3) {
  const struct eap_hdr *VAR_13;
  struct eap_hdr *VAR_14;
  struct wpabuf *VAR_15 =
   FUNC_9(sizeof(struct eap_hdr) +
         FUNC_12(VAR_10));
  if (VAR_15 == ((void*)0)) {
   FUNC_10(VAR_10);
   return;
  }

  VAR_13 = FUNC_11(VAR_8);
  VAR_14 = FUNC_13(VAR_15, sizeof(*VAR_14));
  VAR_14->code = VAR_13->code;
  VAR_14->identifier = VAR_13->identifier;
  VAR_14->length = FUNC_5(sizeof(struct eap_hdr) +
         FUNC_12(VAR_10));
  FUNC_14(VAR_15, VAR_10);
  FUNC_10(VAR_10);

  VAR_10 = VAR_15;
 }

 VAR_11 = FUNC_11(VAR_10);
 if (FUNC_12(VAR_10) < (int) sizeof(*VAR_11)) {
  FUNC_8(VAR_2, "EAP-PEAP: Too short Phase 2 "
      "EAP frame (len=%lu)",
      (unsigned long) FUNC_12(VAR_10));
  FUNC_10(VAR_10);
  FUNC_2(VAR_6, VAR_7);
  return;
 }
 VAR_12 = FUNC_0(VAR_11->length);
 if (VAR_12 > FUNC_12(VAR_10)) {
  FUNC_8(VAR_2, "EAP-PEAP: Length mismatch in "
      "Phase 2 EAP frame (len=%lu hdr->length=%lu)",
      (unsigned long) FUNC_12(VAR_10),
      (unsigned long) VAR_12);
  FUNC_10(VAR_10);
  FUNC_2(VAR_6, VAR_7);
  return;
 }
 FUNC_8(VAR_1, "EAP-PEAP: received Phase 2: code=%d "
     "identifier=%d length=%lu", VAR_11->code, VAR_11->identifier,
     (unsigned long) VAR_12);
 switch (VAR_11->code) {
 case 129:
  FUNC_1(VAR_6, VAR_7, VAR_10);
  break;
 case 128:
  FUNC_8(VAR_1, "EAP-PEAP: Phase 2 Success");
  if (VAR_7->state == VAR_5) {
   FUNC_3(VAR_7, VAR_4);
   FUNC_4(VAR_6, VAR_7);
  }
  break;
 case 130:
  FUNC_8(VAR_1, "EAP-PEAP: Phase 2 Failure");
  FUNC_3(VAR_7, VAR_0);
  break;
 default:
  FUNC_8(VAR_2, "EAP-PEAP: Unexpected code=%d in "
      "Phase 2 EAP header", VAR_11->code);
  break;
 }

 FUNC_10(VAR_10);
}
