
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;
struct eap_wsc_data {scalar_t__ state; scalar_t__ out_used; int * out_buf; int out_op_code; int wps; struct wpabuf* in_buf; } ;
struct eap_sm {int ClientTimeout; } ;
struct eap_method_ret {scalar_t__ methodState; int decision; void* ignore; } ;
typedef enum wps_process_res { ____Placeholder_wps_process_res } wps_process_res ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int const*) ;




 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct wpabuf const*) ;
 int* FUNC_2 (int ,int ,struct wpabuf const*,size_t*) ;
 struct wpabuf* FUNC_3 (struct eap_wsc_data*,struct eap_method_ret*,int) ;
 scalar_t__ FUNC_4 (struct eap_wsc_data*,int const*,int,int) ;
 struct wpabuf* FUNC_5 (struct eap_wsc_data*,struct eap_method_ret*,int,int,int,int,int const*,int) ;
 int FUNC_6 (struct eap_wsc_data*,scalar_t__) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (struct wpabuf*) ;
 int FUNC_9 (struct wpabuf*,int const*,int) ;
 int * FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int,struct wpabuf*) ;

__attribute__((used)) static struct wpabuf * FUNC_12(struct eap_sm *VAR_18, void *VAR_19,
           struct eap_method_ret *VAR_20,
           const struct wpabuf *VAR_21)
{
 struct eap_wsc_data *VAR_22 = VAR_19;
 const u8 *VAR_23, *VAR_24, *VAR_25;
 size_t VAR_26;
 u8 VAR_27, VAR_28, VAR_29;
 u16 VAR_30 = 0;
 enum wps_process_res VAR_31;
 struct wpabuf VAR_32;
 struct wpabuf *VAR_33;

 VAR_24 = FUNC_2(VAR_2, VAR_1, VAR_21,
          &VAR_26);
 if (VAR_24 == ((void*)0) || VAR_26 < 2) {
  VAR_20->ignore = VAR_7;
  return ((void*)0);
 }

 VAR_29 = FUNC_1(VAR_21);

 VAR_23 = VAR_24;
 VAR_25 = VAR_23 + VAR_26;

 VAR_27 = *VAR_24++;
 VAR_28 = *VAR_24++;
 if (VAR_28 & VAR_12) {
  if (VAR_25 - VAR_24 < 2) {
   FUNC_7(VAR_6, "EAP-WSC: Message underflow");
   VAR_20->ignore = VAR_7;
   return ((void*)0);
  }
  VAR_30 = FUNC_0(VAR_24);
  VAR_24 += 2;

  if (VAR_30 < VAR_25 - VAR_24 || VAR_30 > 50000) {
   FUNC_7(VAR_6, "EAP-WSC: Invalid Message "
       "Length");
   VAR_20->ignore = VAR_7;
   return ((void*)0);
  }
 }

 FUNC_7(VAR_6, "EAP-WSC: Received packet: Op-Code %d "
     "Flags 0x%x Message Length %d",
     VAR_27, VAR_28, VAR_30);

 if (VAR_22->state == VAR_8) {
  if (VAR_27 != VAR_14) {
   FUNC_7(VAR_6, "EAP-WSC: Unexpected Op-Code %d "
       "in WAIT_FRAG_ACK state", VAR_27);
   VAR_20->ignore = VAR_7;
   return ((void*)0);
  }
  FUNC_7(VAR_6, "EAP-WSC: Fragment acknowledged");
  FUNC_6(VAR_22, VAR_4);
  return FUNC_3(VAR_22, VAR_20, VAR_29);
 }

 if (VAR_27 != VAR_10 && VAR_27 != VAR_16 && VAR_27 != VAR_15 &&
     VAR_27 != VAR_11 && VAR_27 != VAR_17) {
  FUNC_7(VAR_6, "EAP-WSC: Unexpected Op-Code %d",
      VAR_27);
  VAR_20->ignore = VAR_7;
  return ((void*)0);
 }

 if (VAR_22->state == VAR_9) {
  if (VAR_27 != VAR_17) {
   FUNC_7(VAR_6, "EAP-WSC: Unexpected Op-Code %d "
       "in WAIT_START state", VAR_27);
   VAR_20->ignore = VAR_7;
   return ((void*)0);
  }
  FUNC_7(VAR_6, "EAP-WSC: Received start");
  FUNC_6(VAR_22, VAR_4);

  goto send_msg;
 } else if (VAR_27 == VAR_17) {
  FUNC_7(VAR_6, "EAP-WSC: Unexpected Op-Code %d",
      VAR_27);
  VAR_20->ignore = VAR_7;
  return ((void*)0);
 }

 if (VAR_22->in_buf &&
     FUNC_4(VAR_22, VAR_24, VAR_25 - VAR_24, VAR_27) < 0) {
  VAR_20->ignore = VAR_7;
  return ((void*)0);
 }

 if (VAR_28 & VAR_13) {
  return FUNC_5(VAR_22, VAR_20, VAR_29, VAR_28, VAR_27,
      VAR_30, VAR_24,
      VAR_25 - VAR_24);
 }

 if (VAR_22->in_buf == ((void*)0)) {

  FUNC_9(&VAR_32, VAR_24, VAR_25 - VAR_24);
  VAR_22->in_buf = &VAR_32;
 }

 VAR_31 = FUNC_11(VAR_22->wps, VAR_27, VAR_22->in_buf);
 switch (VAR_31) {
 case 130:
  FUNC_7(VAR_6, "EAP-WSC: WPS processing completed "
      "successfully - wait for EAP failure");
  FUNC_6(VAR_22, VAR_3);
  break;
 case 131:
  FUNC_6(VAR_22, VAR_4);
  break;
 case 129:
 case 128:
  FUNC_7(VAR_6, "EAP-WSC: WPS processing failed");
  FUNC_6(VAR_22, VAR_3);
  break;
 }

 if (VAR_22->in_buf != &VAR_32)
  FUNC_8(VAR_22->in_buf);
 VAR_22->in_buf = ((void*)0);

send_msg:
 if (VAR_22->out_buf == ((void*)0)) {
  VAR_22->out_buf = FUNC_10(VAR_22->wps, &VAR_22->out_op_code);
  if (VAR_22->out_buf == ((void*)0)) {
   FUNC_7(VAR_6, "EAP-WSC: Failed to receive "
       "message from WPS");
   FUNC_6(VAR_22, VAR_3);
   VAR_20->methodState = VAR_5;
   VAR_20->decision = VAR_0;
   return ((void*)0);
  }
  VAR_22->out_used = 0;
 }

 FUNC_6(VAR_22, VAR_4);
 VAR_33 = FUNC_3(VAR_22, VAR_20, VAR_29);
 if (VAR_22->state == VAR_3 && VAR_20->methodState == VAR_5) {

  if (VAR_18->ClientTimeout > 2)
   VAR_18->ClientTimeout = 2;
 }
 return VAR_33;
}
