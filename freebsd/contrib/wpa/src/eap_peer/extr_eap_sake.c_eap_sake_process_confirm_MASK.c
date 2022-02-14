
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef struct wpabuf const wpabuf ;
struct eap_sm {int dummy; } ;
struct eap_sake_parse_attr {int * mic_s; } ;
struct TYPE_2__ {int auth; } ;
struct eap_sake_data {scalar_t__ state; int peerid_len; int peerid; int serverid_len; int serverid; int rand_p; int rand_s; TYPE_1__ tek; } ;
struct eap_method_ret {void* allowNotifications; void* decision; void* methodState; int ignore; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct wpabuf const* FUNC_0 (struct eap_sake_data*,int ,int,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int,int ,int ,int *,int *) ;
 scalar_t__ FUNC_2 (int const*,size_t,struct eap_sake_parse_attr*) ;
 int FUNC_3 (struct eap_sake_data*,int ) ;
 scalar_t__ FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct wpabuf const*) ;
 int FUNC_7 (struct wpabuf const*) ;
 int FUNC_8 (struct wpabuf const*) ;
 int * FUNC_9 (struct wpabuf const*,int) ;
 int FUNC_10 (struct wpabuf const*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_11(struct eap_sm *VAR_14,
      struct eap_sake_data *VAR_15,
      struct eap_method_ret *VAR_16,
      u8 VAR_17,
      const struct wpabuf *VAR_18,
      const u8 *VAR_19,
      size_t VAR_20)
{
 struct eap_sake_parse_attr VAR_21;
 u8 VAR_22[VAR_4];
 struct wpabuf *VAR_23;
 u8 *VAR_24;

 if (VAR_15->state != VAR_0) {
  VAR_16->ignore = VAR_13;
  return ((void*)0);
 }

 FUNC_5(VAR_10, "EAP-SAKE: Received Request/Confirm");

 if (FUNC_2(VAR_19, VAR_20, &VAR_21))
  return ((void*)0);

 if (!VAR_21.mic_s) {
  FUNC_5(VAR_11, "EAP-SAKE: Request/Confirm did not "
      "include AT_MIC_S");
  return ((void*)0);
 }

 if (FUNC_1(VAR_15->tek.auth, VAR_15->rand_s, VAR_15->rand_p,
     VAR_15->serverid, VAR_15->serverid_len,
     VAR_15->peerid, VAR_15->peerid_len, 0,
     FUNC_7(VAR_18), FUNC_8(VAR_18),
     VAR_21.mic_s, VAR_22)) {
  FUNC_5(VAR_11, "EAP-SAKE: Failed to compute MIC");
  FUNC_3(VAR_15, VAR_7);
  VAR_16->methodState = VAR_9;
  VAR_16->decision = VAR_1;
  VAR_16->allowNotifications = VAR_8;
  FUNC_5(VAR_10, "EAP-SAKE: Sending Response/Auth-Reject");
  return FUNC_0(VAR_15, VAR_17, 0,
       VAR_5);
 }
 if (FUNC_4(VAR_21.mic_s, VAR_22, VAR_4) != 0) {
  FUNC_5(VAR_11, "EAP-SAKE: Incorrect AT_MIC_S");
  FUNC_3(VAR_15, VAR_7);
  VAR_16->methodState = VAR_9;
  VAR_16->decision = VAR_1;
  VAR_16->allowNotifications = VAR_8;
  FUNC_5(VAR_10, "EAP-SAKE: Sending "
      "Response/Auth-Reject");
  return FUNC_0(VAR_15, VAR_17, 0,
       VAR_5);
 }

 FUNC_5(VAR_10, "EAP-SAKE: Sending Response/Confirm");

 VAR_23 = FUNC_0(VAR_15, VAR_17, 2 + VAR_4,
      VAR_6);
 if (VAR_23 == ((void*)0))
  return ((void*)0);

 FUNC_5(VAR_10, "EAP-SAKE: * AT_MIC_P");
 FUNC_10(VAR_23, VAR_3);
 FUNC_10(VAR_23, 2 + VAR_4);
 VAR_24 = FUNC_9(VAR_23, VAR_4);
 if (FUNC_1(VAR_15->tek.auth, VAR_15->rand_s, VAR_15->rand_p,
     VAR_15->serverid, VAR_15->serverid_len,
     VAR_15->peerid, VAR_15->peerid_len, 1,
     FUNC_7(VAR_23), FUNC_8(VAR_23), VAR_24,
     VAR_24)) {
  FUNC_5(VAR_11, "EAP-SAKE: Failed to compute MIC");
  FUNC_6(VAR_23);
  return ((void*)0);
 }

 FUNC_3(VAR_15, VAR_12);
 VAR_16->methodState = VAR_9;
 VAR_16->decision = VAR_2;
 VAR_16->allowNotifications = VAR_8;

 return VAR_23;
}
