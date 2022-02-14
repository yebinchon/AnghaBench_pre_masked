
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_sake_hdr {scalar_t__ subtype; scalar_t__ session_id; } ;
struct eap_sake_data {int session_id_set; scalar_t__ session_id; } ;
struct eap_method_ret {scalar_t__ methodState; void* allowNotifications; void* ignore; int decision; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 scalar_t__ FUNC_0 (struct wpabuf const*) ;
 scalar_t__* FUNC_1 (int ,int ,struct wpabuf const*,size_t*) ;
 struct wpabuf* FUNC_2 (struct eap_sm*,struct eap_sake_data*,struct eap_method_ret*,scalar_t__,scalar_t__ const*,int) ;
 struct wpabuf* FUNC_3 (struct eap_sm*,struct eap_sake_data*,struct eap_method_ret*,scalar_t__,struct wpabuf const*,scalar_t__ const*,int) ;
 struct wpabuf* FUNC_4 (struct eap_sm*,struct eap_sake_data*,struct eap_method_ret*,scalar_t__,scalar_t__ const*,int) ;
 int FUNC_5 (int ,char*,scalar_t__ const*,int) ;
 int FUNC_6 (int ,char*,scalar_t__,...) ;

__attribute__((used)) static struct wpabuf * FUNC_7(struct eap_sm *VAR_9, void *VAR_10,
     struct eap_method_ret *VAR_11,
     const struct wpabuf *VAR_12)
{
 struct eap_sake_data *VAR_13 = VAR_10;
 const struct eap_sake_hdr *VAR_14;
 struct wpabuf *VAR_15;
 const u8 *VAR_16, *VAR_17;
 size_t VAR_18;
 u8 VAR_19, VAR_20, VAR_21;

 VAR_16 = FUNC_1(VAR_2, VAR_1, VAR_12, &VAR_18);
 if (VAR_16 == ((void*)0) || VAR_18 < sizeof(struct eap_sake_hdr)) {
  VAR_11->ignore = VAR_8;
  return ((void*)0);
 }

 VAR_14 = (const struct eap_sake_hdr *) VAR_16;
 VAR_17 = VAR_16 + VAR_18;
 VAR_21 = FUNC_0(VAR_12);
 VAR_19 = VAR_14->subtype;
 VAR_20 = VAR_14->session_id;
 VAR_16 = (const u8 *) (VAR_14 + 1);

 FUNC_6(VAR_6, "EAP-SAKE: Received frame: subtype %d "
     "session_id %d", VAR_19, VAR_20);
 FUNC_5(VAR_6, "EAP-SAKE: Received attributes",
      VAR_16, VAR_17 - VAR_16);

 if (VAR_13->session_id_set && VAR_13->session_id != VAR_20) {
  FUNC_6(VAR_7, "EAP-SAKE: Session ID mismatch (%d,%d)",
      VAR_20, VAR_13->session_id);
  VAR_11->ignore = VAR_8;
  return ((void*)0);
 }
 VAR_13->session_id = VAR_20;
 VAR_13->session_id_set = 1;

 VAR_11->ignore = VAR_3;
 VAR_11->methodState = VAR_5;
 VAR_11->decision = VAR_0;
 VAR_11->allowNotifications = VAR_8;

 switch (VAR_19) {
 case 128:
  VAR_15 = FUNC_4(VAR_9, VAR_13, VAR_11, VAR_21,
       VAR_16, VAR_17 - VAR_16);
  break;
 case 130:
  VAR_15 = FUNC_2(VAR_9, VAR_13, VAR_11, VAR_21,
        VAR_16, VAR_17 - VAR_16);
  break;
 case 129:
  VAR_15 = FUNC_3(VAR_9, VAR_13, VAR_11, VAR_21, VAR_12,
      VAR_16, VAR_17 - VAR_16);
  break;
 default:
  FUNC_6(VAR_6, "EAP-SAKE: Ignoring message with "
      "unknown subtype %d", VAR_19);
  VAR_11->ignore = VAR_8;
  return ((void*)0);
 }

 if (VAR_11->methodState == VAR_4)
  VAR_11->allowNotifications = VAR_3;

 return VAR_15;
}
