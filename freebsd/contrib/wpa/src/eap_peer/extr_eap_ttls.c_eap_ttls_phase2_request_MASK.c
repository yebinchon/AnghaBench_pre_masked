
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct eap_ttls_data {int phase2_type; scalar_t__ tnc_started; } ;
struct eap_sm {int dummy; } ;
struct eap_method_ret {int decision; int methodState; } ;
struct eap_hdr {int dummy; } ;
typedef enum phase2_types { ____Placeholder_phase2_types } phase2_types ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (struct eap_sm*,size_t*) ;
 int * FUNC_1 (struct eap_sm*,size_t*) ;
 int FUNC_2 (struct eap_sm*) ;
 int FUNC_3 (struct eap_sm*) ;
 int FUNC_4 (struct eap_sm*,struct eap_ttls_data*,struct eap_method_ret*,struct wpabuf**) ;
 int FUNC_5 (struct eap_sm*,struct eap_ttls_data*,struct eap_method_ret*,struct eap_hdr*,struct wpabuf**) ;
 int FUNC_6 (struct eap_sm*,struct eap_ttls_data*,struct eap_method_ret*,struct wpabuf**) ;
 int FUNC_7 (struct eap_sm*,struct eap_ttls_data*,struct eap_method_ret*,struct wpabuf**) ;
 int FUNC_8 (struct eap_sm*,struct eap_ttls_data*,struct eap_method_ret*,struct wpabuf**) ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static int FUNC_10(struct eap_sm *VAR_5,
       struct eap_ttls_data *VAR_6,
       struct eap_method_ret *VAR_7,
       struct eap_hdr *VAR_8,
       struct wpabuf **VAR_9)
{
 int VAR_10 = 0;
 size_t VAR_11;
 enum phase2_types VAR_12 = VAR_6->phase2_type;
 if (VAR_12 == 129 ||
     VAR_12 == 130 ||
     VAR_12 == 128 ||
     VAR_12 == 132) {
  if (FUNC_0(VAR_5, &VAR_11) == ((void*)0)) {
   FUNC_9(VAR_4,
       "EAP-TTLS: Identity not configured");
   FUNC_2(VAR_5);
   if (FUNC_1(VAR_5, &VAR_11) == ((void*)0))
    FUNC_3(VAR_5);
   return 0;
  }

  if (FUNC_1(VAR_5, &VAR_11) == ((void*)0)) {
   FUNC_9(VAR_4,
       "EAP-TTLS: Password not configured");
   FUNC_3(VAR_5);
   return 0;
  }
 }

 switch (VAR_12) {
 case 131:
  VAR_10 = FUNC_5(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
  break;
 case 129:
  VAR_10 = FUNC_7(VAR_5, VAR_6, VAR_7, VAR_9);
  break;
 case 130:
  VAR_10 = FUNC_6(VAR_5, VAR_6, VAR_7, VAR_9);
  break;
 case 128:
  VAR_10 = FUNC_8(VAR_5, VAR_6, VAR_7, VAR_9);
  break;
 case 132:
  VAR_10 = FUNC_4(VAR_5, VAR_6, VAR_7, VAR_9);
  break;
 default:
  FUNC_9(VAR_3, "EAP-TTLS: Phase 2 - Unknown");
  VAR_10 = -1;
  break;
 }

 if (VAR_10 < 0) {
  VAR_7->methodState = VAR_1;
  VAR_7->decision = VAR_0;
 }

 return VAR_10;
}
