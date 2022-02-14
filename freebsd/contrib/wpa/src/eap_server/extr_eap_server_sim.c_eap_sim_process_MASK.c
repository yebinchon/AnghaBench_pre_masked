
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_sim_data {int state; void* notification; } ;
struct eap_sim_attrs {int dummy; } ;



 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 scalar_t__* FUNC_0 (int ,int ,struct wpabuf*,size_t*) ;
 scalar_t__ FUNC_1 (scalar_t__ const*,scalar_t__ const*,struct eap_sim_attrs*,int ,int ) ;
 int FUNC_2 (struct eap_sm*,struct eap_sim_data*,struct wpabuf*,struct eap_sim_attrs*) ;
 int FUNC_3 (struct eap_sm*,struct eap_sim_data*,struct wpabuf*,struct eap_sim_attrs*) ;
 int FUNC_4 (struct eap_sm*,struct eap_sim_data*,struct wpabuf*,struct eap_sim_attrs*) ;
 int FUNC_5 (struct eap_sm*,struct eap_sim_data*,struct wpabuf*,struct eap_sim_attrs*) ;
 int FUNC_6 (struct eap_sm*,struct eap_sim_data*,struct wpabuf*,struct eap_sim_attrs*) ;
 int FUNC_7 (struct eap_sim_data*,int) ;
 scalar_t__ FUNC_8 (struct eap_sim_data*,scalar_t__) ;
 int FUNC_9 (int ,char*,...) ;

__attribute__((used)) static void FUNC_10(struct eap_sm *VAR_6, void *VAR_7,
       struct wpabuf *VAR_8)
{
 struct eap_sim_data *VAR_9 = VAR_7;
 const u8 *VAR_10, *VAR_11;
 u8 VAR_12;
 size_t VAR_13;
 struct eap_sim_attrs VAR_14;

 VAR_10 = FUNC_0(VAR_3, VAR_2, VAR_8, &VAR_13);
 if (VAR_10 == ((void*)0) || VAR_13 < 3)
  return;

 VAR_11 = VAR_10 + VAR_13;
 VAR_12 = *VAR_10;
 VAR_10 += 3;

 if (FUNC_8(VAR_9, VAR_12)) {
  FUNC_9(VAR_5, "EAP-SIM: Unrecognized or unexpected "
      "EAP-SIM Subtype in EAP Response");
  VAR_9->notification = VAR_0;
  FUNC_7(VAR_9, 130);
  return;
 }

 if (FUNC_1(VAR_10, VAR_11, &VAR_14, 0, 0)) {
  FUNC_9(VAR_5, "EAP-SIM: Failed to parse attributes");
  if (VAR_12 != VAR_1 &&
      (VAR_9->state == 128 || VAR_9->state == 131 ||
       VAR_9->state == 129)) {
   VAR_9->notification =
    VAR_0;
   FUNC_7(VAR_9, 130);
   return;
  }
  FUNC_7(VAR_9, VAR_4);
  return;
 }

 if (VAR_12 == VAR_1) {
  FUNC_3(VAR_6, VAR_9, VAR_8, &VAR_14);
  return;
 }

 switch (VAR_9->state) {
 case 128:
  FUNC_6(VAR_6, VAR_9, VAR_8, &VAR_14);
  break;
 case 131:
  FUNC_2(VAR_6, VAR_9, VAR_8, &VAR_14);
  break;
 case 129:
  FUNC_5(VAR_6, VAR_9, VAR_8, &VAR_14);
  break;
 case 130:
  FUNC_4(VAR_6, VAR_9, VAR_8, &VAR_14);
  break;
 default:
  FUNC_9(VAR_5, "EAP-SIM: Unknown state %d in "
      "process", VAR_9->state);
  break;
 }
}
