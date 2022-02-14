
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;
struct eap_wsc_data {scalar_t__ state; struct wpabuf* in_buf; int wps; scalar_t__ ext_reg_timeout; } ;
struct eap_sm {int method_pending; } ;
typedef enum wps_process_res { ____Placeholder_wps_process_res } wps_process_res ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int const*) ;




 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int* FUNC_1 (int ,int ,struct wpabuf*,size_t*) ;
 int VAR_15 ;
 scalar_t__ FUNC_2 (struct eap_wsc_data*,int const*,int,int) ;
 scalar_t__ FUNC_3 (struct eap_wsc_data*,int,int,int,int const*,int) ;
 int FUNC_4 (struct eap_wsc_data*,int ) ;
 int FUNC_5 (int ,struct eap_sm*,struct eap_wsc_data*) ;
 int FUNC_6 (int,int ,int ,struct eap_sm*,struct eap_wsc_data*) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (struct wpabuf*) ;
 int FUNC_9 (struct wpabuf*,int const*,int) ;
 int FUNC_10 (int ,int,struct wpabuf*) ;

__attribute__((used)) static void FUNC_11(struct eap_sm *VAR_16, void *VAR_17,
       struct wpabuf *VAR_18)
{
 struct eap_wsc_data *VAR_19 = VAR_17;
 const u8 *VAR_20, *VAR_21, *VAR_22;
 size_t VAR_23;
 u8 VAR_24, VAR_25;
 u16 VAR_26 = 0;
 enum wps_process_res VAR_27;
 struct wpabuf VAR_28;

 FUNC_5(VAR_15, VAR_16, VAR_19);
 if (VAR_19->ext_reg_timeout) {
  FUNC_4(VAR_19, VAR_2);
  return;
 }

 VAR_21 = FUNC_1(VAR_1, VAR_0,
          VAR_18, &VAR_23);
 if (VAR_21 == ((void*)0) || VAR_23 < 2)
  return;

 VAR_20 = VAR_21;
 VAR_22 = VAR_20 + VAR_23;

 VAR_24 = *VAR_21++;
 VAR_25 = *VAR_21++;
 if (VAR_25 & VAR_10) {
  if (VAR_22 - VAR_21 < 2) {
   FUNC_7(VAR_6, "EAP-WSC: Message underflow");
   return;
  }
  VAR_26 = FUNC_0(VAR_21);
  VAR_21 += 2;

  if (VAR_26 < VAR_22 - VAR_21 || VAR_26 > 50000) {
   FUNC_7(VAR_6, "EAP-WSC: Invalid Message "
       "Length");
   return;
  }
 }

 FUNC_7(VAR_6, "EAP-WSC: Received packet: Op-Code %d "
     "Flags 0x%x Message Length %d",
     VAR_24, VAR_25, VAR_26);

 if (VAR_19->state == VAR_7) {
  if (VAR_24 != VAR_12) {
   FUNC_7(VAR_6, "EAP-WSC: Unexpected Op-Code %d "
       "in WAIT_FRAG_ACK state", VAR_24);
   FUNC_4(VAR_19, VAR_2);
   return;
  }
  FUNC_7(VAR_6, "EAP-WSC: Fragment acknowledged");
  FUNC_4(VAR_19, VAR_4);
  return;
 }

 if (VAR_24 != VAR_8 && VAR_24 != VAR_14 && VAR_24 != VAR_13 &&
     VAR_24 != VAR_9) {
  FUNC_7(VAR_6, "EAP-WSC: Unexpected Op-Code %d",
      VAR_24);
  FUNC_4(VAR_19, VAR_2);
  return;
 }

 if (VAR_19->in_buf &&
     FUNC_2(VAR_19, VAR_21, VAR_22 - VAR_21, VAR_24) < 0) {
  FUNC_4(VAR_19, VAR_2);
  return;
 }

 if (VAR_25 & VAR_11) {
  if (FUNC_3(VAR_19, VAR_25, VAR_24,
          VAR_26, VAR_21, VAR_22 - VAR_21) <
      0)
   FUNC_4(VAR_19, VAR_2);
  else
   FUNC_4(VAR_19, VAR_3);
  return;
 }

 if (VAR_19->in_buf == ((void*)0)) {

  FUNC_9(&VAR_28, VAR_21, VAR_22 - VAR_21);
  VAR_19->in_buf = &VAR_28;
 }

 VAR_27 = FUNC_10(VAR_19->wps, VAR_24, VAR_19->in_buf);
 switch (VAR_27) {
 case 130:
  FUNC_7(VAR_6, "EAP-WSC: WPS processing completed "
      "successfully - report EAP failure");
  FUNC_4(VAR_19, VAR_2);
  break;
 case 131:
  FUNC_4(VAR_19, VAR_4);
  break;
 case 129:
  FUNC_7(VAR_6, "EAP-WSC: WPS processing failed");
  FUNC_4(VAR_19, VAR_2);
  break;
 case 128:
  FUNC_4(VAR_19, VAR_4);
  VAR_16->method_pending = VAR_5;
  FUNC_5(VAR_15, VAR_16, VAR_19);
  FUNC_6(5, 0, VAR_15,
           VAR_16, VAR_19);
  break;
 }

 if (VAR_19->in_buf != &VAR_28)
  FUNC_8(VAR_19->in_buf);
 VAR_19->in_buf = ((void*)0);
}
