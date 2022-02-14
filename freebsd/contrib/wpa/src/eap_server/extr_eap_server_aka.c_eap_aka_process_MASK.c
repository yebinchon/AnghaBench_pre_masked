
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_sim_attrs {int dummy; } ;
struct eap_aka_data {scalar_t__ eap_method; int state; void* notification; } ;



 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;


 int FUNC_0 (struct eap_sm*,struct eap_aka_data*,struct wpabuf*,struct eap_sim_attrs*) ;
 int FUNC_1 (struct eap_sm*,struct eap_aka_data*,struct wpabuf*,struct eap_sim_attrs*) ;
 int FUNC_2 (struct eap_sm*,struct eap_aka_data*,struct wpabuf*,struct eap_sim_attrs*) ;
 int FUNC_3 (struct eap_sm*,struct eap_aka_data*,struct wpabuf*,struct eap_sim_attrs*) ;
 int FUNC_4 (struct eap_sm*,struct eap_aka_data*,struct wpabuf*,struct eap_sim_attrs*) ;
 int FUNC_5 (struct eap_sm*,struct eap_aka_data*,struct wpabuf*,struct eap_sim_attrs*) ;
 int FUNC_6 (struct eap_sm*,struct eap_aka_data*,struct wpabuf*,struct eap_sim_attrs*) ;
 int FUNC_7 (struct eap_aka_data*,int) ;
 scalar_t__ FUNC_8 (struct eap_aka_data*,scalar_t__) ;
 scalar_t__* FUNC_9 (int ,scalar_t__,struct wpabuf*,size_t*) ;
 scalar_t__ FUNC_10 (scalar_t__ const*,scalar_t__ const*,struct eap_sim_attrs*,int,int ) ;
 int FUNC_11 (int ,char*,...) ;

__attribute__((used)) static void FUNC_12(struct eap_sm *VAR_7, void *VAR_8,
       struct wpabuf *VAR_9)
{
 struct eap_aka_data *VAR_10 = VAR_8;
 const u8 *VAR_11, *VAR_12;
 u8 VAR_13;
 size_t VAR_14;
 struct eap_sim_attrs VAR_15;

 VAR_11 = FUNC_9(VAR_5, VAR_10->eap_method, VAR_9,
          &VAR_14);
 if (VAR_11 == ((void*)0) || VAR_14 < 3)
  return;

 VAR_12 = VAR_11 + VAR_14;
 VAR_13 = *VAR_11;
 VAR_11 += 3;

 if (FUNC_8(VAR_10, VAR_13)) {
  FUNC_11(VAR_6, "EAP-AKA: Unrecognized or unexpected "
      "EAP-AKA Subtype in EAP Response");
  VAR_10->notification = VAR_3;
  FUNC_7(VAR_10, 129);
  return;
 }

 if (FUNC_10(VAR_11, VAR_12, &VAR_15,
          VAR_10->eap_method == VAR_4 ? 2 : 1,
          0)) {
  FUNC_11(VAR_6, "EAP-AKA: Failed to parse attributes");
  VAR_10->notification = VAR_3;
  FUNC_7(VAR_10, 129);
  return;
 }

 if (VAR_13 == VAR_1) {
  FUNC_2(VAR_7, VAR_10, VAR_9, &VAR_15);
  return;
 }

 if (VAR_13 == VAR_0) {
  FUNC_0(VAR_7, VAR_10, VAR_9,
            &VAR_15);
  return;
 }

 switch (VAR_10->state) {
 case 130:
  FUNC_3(VAR_7, VAR_10, VAR_9, &VAR_15);
  break;
 case 131:
  if (VAR_13 == VAR_2) {
   FUNC_6(VAR_7, VAR_10, VAR_9,
           &VAR_15);
  } else {
   FUNC_1(VAR_7, VAR_10, VAR_9, &VAR_15);
  }
  break;
 case 128:
  FUNC_5(VAR_7, VAR_10, VAR_9, &VAR_15);
  break;
 case 129:
  FUNC_4(VAR_7, VAR_10, VAR_9, &VAR_15);
  break;
 default:
  FUNC_11(VAR_6, "EAP-AKA: Unknown state %d in "
      "process", VAR_10->state);
  break;
 }
}
