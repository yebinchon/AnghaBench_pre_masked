
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wpabuf {int dummy; } ;
struct eap_tnc_data {scalar_t__ state; struct wpabuf* in_buf; struct wpabuf* out_buf; int tncc; } ;
struct eap_sm {int msg_ctx; } ;
struct eap_method_ret {void* allowNotifications; int decision; int methodState; void* ignore; } ;
typedef enum tncc_process_res { ____Placeholder_tncc_process_res } tncc_process_res ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;






 void* VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (struct wpabuf const*) ;
 int* FUNC_2 (int ,int ,struct wpabuf const*,size_t*) ;
 struct wpabuf* FUNC_3 (int ,int ,int,int ,int) ;
 struct wpabuf* FUNC_4 (struct eap_tnc_data*,struct eap_method_ret*,int) ;
 scalar_t__ FUNC_5 (struct eap_tnc_data*,int const*,int) ;
 struct wpabuf* FUNC_6 (struct eap_tnc_data*,struct eap_method_ret*,int,int,int,int const*,int) ;
 int FUNC_7 (char*) ;
 size_t FUNC_8 (char*) ;
 int* FUNC_9 (int ,int*) ;
 char* FUNC_10 () ;
 char* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int ) ;
 size_t FUNC_14 (int ) ;
 int FUNC_15 (int ,char*,int ,int ) ;
 int FUNC_16 (int ,int ,char*) ;
 int FUNC_17 (int ,char*,...) ;
 struct wpabuf* FUNC_18 (size_t) ;
 int FUNC_19 (struct wpabuf*) ;
 int FUNC_20 (struct wpabuf*) ;
 int FUNC_21 (struct wpabuf*) ;
 int* FUNC_22 (struct wpabuf*,int) ;
 int FUNC_23 (struct wpabuf*,char*,size_t) ;
 int FUNC_24 (struct wpabuf*,int) ;
 int FUNC_25 (struct wpabuf*,int const*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_26(struct eap_sm *VAR_18, void *VAR_19,
           struct eap_method_ret *VAR_20,
           const struct wpabuf *VAR_21)
{
 struct eap_tnc_data *VAR_22 = VAR_19;
 struct wpabuf *VAR_23;
 const u8 *VAR_24, *VAR_25;
 u8 *VAR_26, *VAR_27;
 size_t VAR_28, VAR_29;
 size_t VAR_30;
 char *VAR_31, *VAR_32;
 size_t VAR_33, VAR_34;
 int VAR_35 = 0;
 u8 VAR_36, VAR_37;
 u32 VAR_38 = 0;
 struct wpabuf VAR_39;

 VAR_24 = FUNC_2(VAR_8, VAR_7, VAR_21, &VAR_28);
 if (VAR_24 == ((void*)0)) {
  FUNC_17(VAR_12, "EAP-TNC: Invalid frame (pos=%p len=%lu)",
      VAR_24, (unsigned long) VAR_28);
  VAR_20->ignore = VAR_15;
  return ((void*)0);
 }

 VAR_37 = FUNC_1(VAR_21);

 VAR_25 = VAR_24 + VAR_28;

 if (VAR_28 == 0)
  VAR_36 = 0;
 else
  VAR_36 = *VAR_24++;

 if (VAR_28 > 0 && (VAR_36 & VAR_6) != VAR_5) {
  FUNC_17(VAR_11, "EAP-TNC: Unsupported version %d",
      VAR_36 & VAR_6);
  VAR_20->ignore = VAR_15;
  return ((void*)0);
 }

 if (VAR_36 & VAR_2) {
  if (VAR_25 - VAR_24 < 4) {
   FUNC_17(VAR_11, "EAP-TNC: Message underflow");
   VAR_20->ignore = VAR_15;
   return ((void*)0);
  }
  VAR_38 = FUNC_0(VAR_24);
  VAR_24 += 4;

  if (VAR_38 < (u32) (VAR_25 - VAR_24) ||
      VAR_38 > 75000) {
   FUNC_17(VAR_11, "EAP-TNC: Invalid Message "
       "Length (%d; %ld remaining in this msg)",
       VAR_38, (long) (VAR_25 - VAR_24));
   VAR_20->ignore = VAR_15;
   return ((void*)0);
  }
 }

 FUNC_17(VAR_11, "EAP-TNC: Received packet: Flags 0x%x "
     "Message Length %u", VAR_36, VAR_38);

 if (VAR_22->state == VAR_16) {
  if (VAR_28 > 1) {
   FUNC_17(VAR_11, "EAP-TNC: Unexpected payload in "
       "WAIT_FRAG_ACK state");
   VAR_20->ignore = VAR_15;
   return ((void*)0);
  }
  FUNC_17(VAR_11, "EAP-TNC: Fragment acknowledged");
  VAR_22->state = VAR_14;
  return FUNC_4(VAR_22, VAR_20, VAR_37);
 }

 if (VAR_22->in_buf && FUNC_5(VAR_22, VAR_24, VAR_25 - VAR_24) < 0) {
  VAR_20->ignore = VAR_15;
  return ((void*)0);
 }

 if (VAR_36 & VAR_3) {
  return FUNC_6(VAR_22, VAR_20, VAR_37, VAR_36,
      VAR_38, VAR_24,
      VAR_25 - VAR_24);
 }

 if (VAR_22->in_buf == ((void*)0)) {

  FUNC_25(&VAR_39, VAR_24, VAR_25 - VAR_24);
  VAR_22->in_buf = &VAR_39;
 }

 if (VAR_22->state == VAR_17) {
  if (!(VAR_36 & VAR_4)) {
   FUNC_17(VAR_11, "EAP-TNC: Server did not use "
       "start flag in the first message");
   VAR_20->ignore = VAR_15;
   goto fail;
  }

  FUNC_12(VAR_22->tncc);

  VAR_22->state = VAR_14;
 } else {
  enum tncc_process_res VAR_40;

  if (VAR_36 & VAR_4) {
   FUNC_17(VAR_11, "EAP-TNC: Server used start "
       "flag again");
   VAR_20->ignore = VAR_15;
   goto fail;
  }

  VAR_40 = FUNC_13(VAR_22->tncc,
         FUNC_20(VAR_22->in_buf),
         FUNC_21(VAR_22->in_buf));
  switch (VAR_40) {
  case 133:
   VAR_20->ignore = VAR_15;
   goto fail;
  case 132:
  case 130:
   FUNC_17(VAR_11, "EAP-TNC: No "
       "TNCCS-Recommendation received");
   break;
  case 131:
   FUNC_16(VAR_18->msg_ctx, VAR_12,
    "TNC: Recommendation = allow");
   VAR_35 = 1;
   break;
  case 128:
   FUNC_16(VAR_18->msg_ctx, VAR_12,
    "TNC: Recommendation = none");
   VAR_35 = 1;
   break;
  case 129:
   FUNC_16(VAR_18->msg_ctx, VAR_12,
    "TNC: Recommendation = isolate");
   VAR_35 = 1;
   break;
  }
 }

 if (VAR_22->in_buf != &VAR_39)
  FUNC_19(VAR_22->in_buf);
 VAR_22->in_buf = ((void*)0);

 VAR_20->ignore = VAR_9;
 VAR_20->methodState = VAR_10;
 VAR_20->decision = VAR_0;
 VAR_20->allowNotifications = VAR_15;

 if (VAR_35) {
  VAR_23 = FUNC_3(VAR_8, VAR_7, 1,
         VAR_1, FUNC_1(VAR_21));
  if (VAR_23 == ((void*)0))
   return ((void*)0);

  FUNC_24(VAR_23, VAR_5);
  FUNC_17(VAR_11, "EAP-TNC: TNCS done - reply with an "
      "empty ACK message");
  return VAR_23;
 }

 VAR_30 = FUNC_14(VAR_22->tncc);

 VAR_31 = FUNC_11(VAR_22->tncc);
 if (VAR_31 == ((void*)0))
  return ((void*)0);
 VAR_33 = FUNC_8(VAR_31);
 VAR_32 = FUNC_10();
 if (VAR_32 == ((void*)0)) {
  FUNC_7(VAR_31);
  return ((void*)0);
 }
 VAR_34 = FUNC_8(VAR_32);

 VAR_29 = VAR_33 + VAR_30 + VAR_34;
 VAR_23 = FUNC_18(VAR_29);
 if (VAR_23 == ((void*)0)) {
  FUNC_7(VAR_31);
  FUNC_7(VAR_32);
  return ((void*)0);
 }

 FUNC_23(VAR_23, VAR_31, VAR_33);
 FUNC_7(VAR_31);

 VAR_27 = FUNC_22(VAR_23, 0);
 VAR_26 = FUNC_9(VAR_22->tncc, VAR_27);
 FUNC_22(VAR_23, VAR_26 - VAR_27);

 FUNC_23(VAR_23, VAR_32, VAR_34);
 FUNC_7(VAR_32);

 FUNC_15(VAR_13, "EAP-TNC: Response",
     FUNC_20(VAR_23), FUNC_21(VAR_23));

 VAR_22->out_buf = VAR_23;
 VAR_22->state = VAR_14;
 return FUNC_4(VAR_22, VAR_20, VAR_37);

fail:
 if (VAR_22->in_buf == &VAR_39)
  VAR_22->in_buf = ((void*)0);
 return ((void*)0);
}
