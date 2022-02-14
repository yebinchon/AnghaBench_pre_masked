
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_sim_attrs {int dummy; } ;
struct eap_method_ret {scalar_t__ methodState; void* allowNotifications; void* decision; void* ignore; } ;
struct eap_hdr {int identifier; int length; } ;
struct eap_aka_data {scalar_t__ eap_method; scalar_t__ state; scalar_t__ use_result_ind; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;





 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 void* VAR_15 ;
 size_t FUNC_0 (int ) ;
 struct wpabuf* FUNC_1 (struct eap_aka_data*,int,int ) ;
 struct wpabuf* FUNC_2 (struct eap_sm*,struct eap_aka_data*,int,struct wpabuf const*,struct eap_sim_attrs*) ;
 struct wpabuf* FUNC_3 (struct eap_sm*,struct eap_aka_data*,int,struct wpabuf const*,struct eap_sim_attrs*) ;
 struct wpabuf* FUNC_4 (struct eap_sm*,struct eap_aka_data*,int,struct wpabuf const*,struct eap_sim_attrs*) ;
 struct wpabuf* FUNC_5 (struct eap_sm*,struct eap_aka_data*,int,struct wpabuf const*,struct eap_sim_attrs*) ;
 int * FUNC_6 (struct eap_sm*,size_t*) ;
 int* FUNC_7 (int ,scalar_t__,struct wpabuf const*,size_t*) ;
 scalar_t__ FUNC_8 (int const*,scalar_t__,struct eap_sim_attrs*,int,int ) ;
 int FUNC_9 (struct eap_sm*) ;
 int FUNC_10 (int ,char*,struct wpabuf const*) ;
 int FUNC_11 (int ,char*,...) ;
 struct eap_hdr* FUNC_12 (struct wpabuf const*) ;
 scalar_t__ FUNC_13 (struct wpabuf const*) ;

__attribute__((used)) static struct wpabuf * FUNC_14(struct eap_sm *VAR_16, void *VAR_17,
           struct eap_method_ret *VAR_18,
           const struct wpabuf *VAR_19)
{
 struct eap_aka_data *VAR_20 = VAR_17;
 const struct eap_hdr *VAR_21;
 u8 VAR_22, VAR_23;
 struct wpabuf *VAR_24;
 const u8 *VAR_25;
 struct eap_sim_attrs VAR_26;
 size_t VAR_27;

 FUNC_10(VAR_11, "EAP-AKA: EAP data", VAR_19);
 if (FUNC_6(VAR_16, &VAR_27) == ((void*)0)) {
  FUNC_11(VAR_12, "EAP-AKA: Identity not configured");
  FUNC_9(VAR_16);
  VAR_18->ignore = VAR_15;
  return ((void*)0);
 }

 VAR_25 = FUNC_7(VAR_5, VAR_20->eap_method, VAR_19,
          &VAR_27);
 if (VAR_25 == ((void*)0) || VAR_27 < 3) {
  VAR_18->ignore = VAR_15;
  return ((void*)0);
 }
 VAR_21 = FUNC_12(VAR_19);
 VAR_23 = VAR_21->identifier;
 VAR_27 = FUNC_0(VAR_21->length);

 VAR_18->ignore = VAR_7;
 VAR_18->methodState = VAR_10;
 VAR_18->decision = VAR_1;
 VAR_18->allowNotifications = VAR_15;

 VAR_22 = *VAR_25++;
 FUNC_11(VAR_11, "EAP-AKA: Subtype=%d", VAR_22);
 VAR_25 += 2;

 if (FUNC_8(VAR_25, FUNC_13(VAR_19) + VAR_27, &VAR_26,
          VAR_20->eap_method == VAR_4 ? 2 : 1,
          0)) {
  VAR_24 = FUNC_1(VAR_20, VAR_23,
        VAR_3);
  goto done;
 }

 switch (VAR_22) {
 case 130:
  VAR_24 = FUNC_3(VAR_16, VAR_20, VAR_23, VAR_19, &VAR_26);
  break;
 case 132:
  VAR_24 = FUNC_2(VAR_16, VAR_20, VAR_23, VAR_19, &VAR_26);
  break;
 case 129:
  VAR_24 = FUNC_4(VAR_16, VAR_20, VAR_23, VAR_19,
         &VAR_26);
  break;
 case 128:
  VAR_24 = FUNC_5(VAR_16, VAR_20, VAR_23, VAR_19,
             &VAR_26);
  break;
 case 131:
  FUNC_11(VAR_11, "EAP-AKA: subtype Client-Error");
  VAR_24 = FUNC_1(VAR_20, VAR_23,
        VAR_3);
  break;
 default:
  FUNC_11(VAR_11, "EAP-AKA: Unknown subtype=%d", VAR_22);
  VAR_24 = FUNC_1(VAR_20, VAR_23,
        VAR_3);
  break;
 }

done:
 if (VAR_20->state == VAR_6) {
  VAR_18->decision = VAR_1;
  VAR_18->methodState = VAR_9;
 } else if (VAR_20->state == VAR_14) {
  VAR_18->decision = VAR_20->use_result_ind ?
   VAR_2 : VAR_0;





  VAR_18->methodState = VAR_20->use_result_ind ?
   VAR_9 : VAR_10;
 } else if (VAR_20->state == VAR_13)
  VAR_18->methodState = VAR_8;

 if (VAR_18->methodState == VAR_9) {
  VAR_18->allowNotifications = VAR_7;
 }

 return VAR_24;
}
