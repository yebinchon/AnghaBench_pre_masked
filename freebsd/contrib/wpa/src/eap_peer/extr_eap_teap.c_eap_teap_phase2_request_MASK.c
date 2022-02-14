
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u8 ;
struct wpabuf {int dummy; } ;
struct TYPE_3__ {unsigned long method; scalar_t__ vendor; } ;
struct eap_teap_data {int inner_method_done; int phase2_success; int pending_phase2_req; int * phase2_priv; TYPE_2__* phase2_method; int num_phase2_types; int phase2_types; TYPE_1__ phase2_type; } ;
struct eap_sm {int dummy; } ;
struct eap_peer_config {scalar_t__ pending_req_sim; scalar_t__ pending_req_new_password; scalar_t__ pending_req_otp; scalar_t__ pending_req_password; scalar_t__ pending_req_identity; } ;
struct eap_method_ret {scalar_t__ methodState; scalar_t__ decision; } ;
struct eap_hdr {int identifier; int length; } ;
typedef int iret ;
struct TYPE_4__ {struct wpabuf* (* process ) (struct eap_sm*,int *,struct eap_method_ret*,struct wpabuf*) ;int (* deinit ) (struct eap_sm*,int *) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t FUNC_0 (int ) ;
 struct eap_peer_config* FUNC_1 (struct eap_sm*) ;
 scalar_t__ FUNC_2 (int ,int ,struct eap_hdr*,struct wpabuf**) ;
 struct wpabuf* FUNC_3 (struct eap_sm*,int ,int) ;
 scalar_t__ FUNC_4 (struct eap_sm*,struct eap_teap_data*) ;
 scalar_t__ FUNC_5 (struct eap_teap_data*,unsigned long) ;
 int FUNC_6 (struct eap_method_ret*,int ,int) ;
 int FUNC_7 (struct eap_sm*,int *) ;
 struct wpabuf* FUNC_8 (struct eap_sm*,int *,struct eap_method_ret*,struct wpabuf*) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (struct eap_hdr*,size_t) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct wpabuf*,struct eap_hdr*,size_t) ;

__attribute__((used)) static int FUNC_13(struct eap_sm *VAR_10,
       struct eap_teap_data *VAR_11,
       struct eap_method_ret *VAR_12,
       struct eap_hdr *VAR_13,
       struct wpabuf **VAR_14)
{
 size_t VAR_15 = FUNC_0(VAR_13->length);
 u8 *VAR_16;
 struct eap_method_ret VAR_17;
 struct eap_peer_config *VAR_18 = FUNC_1(VAR_10);
 struct wpabuf VAR_19;

 if (VAR_15 <= sizeof(struct eap_hdr)) {
  FUNC_9(VAR_9,
      "EAP-TEAP: too short Phase 2 request (len=%lu)",
      (unsigned long) VAR_15);
  return -1;
 }
 VAR_16 = (u8 *) (VAR_13 + 1);
 FUNC_9(VAR_8, "EAP-TEAP: Phase 2 Request: type=%d", *VAR_16);
 if (*VAR_16 == VAR_3) {
  *VAR_14 = FUNC_3(VAR_10, VAR_13->identifier, 1);
  return 0;
 }

 if (VAR_11->phase2_priv && VAR_11->phase2_method &&
     *VAR_16 != VAR_11->phase2_type.method) {
  FUNC_9(VAR_8,
      "EAP-TEAP: Phase 2 EAP sequence - deinitialize previous method");
  VAR_11->phase2_method->deinit(VAR_10, VAR_11->phase2_priv);
  VAR_11->phase2_method = ((void*)0);
  VAR_11->phase2_priv = ((void*)0);
  VAR_11->phase2_type.vendor = VAR_5;
  VAR_11->phase2_type.method = VAR_4;
 }

 if (VAR_11->phase2_type.vendor == VAR_5 &&
     VAR_11->phase2_type.method == VAR_4 &&
     FUNC_5(VAR_11, *VAR_16) < 0) {
  if (FUNC_2(VAR_11->phase2_types,
         VAR_11->num_phase2_types,
         VAR_13, VAR_14))
   return -1;
  return 0;
 }

 if ((!VAR_11->phase2_priv && FUNC_4(VAR_10, VAR_11) < 0) ||
     !VAR_11->phase2_method) {
  FUNC_9(VAR_9,
      "EAP-TEAP: Failed to initialize Phase 2 EAP method %d",
      *VAR_16);
  VAR_12->methodState = VAR_6;
  VAR_12->decision = VAR_1;
  return -1;
 }

 FUNC_6(&VAR_17, 0, sizeof(VAR_17));
 FUNC_12(&VAR_19, VAR_13, VAR_15);
 *VAR_14 = VAR_11->phase2_method->process(VAR_10, VAR_11->phase2_priv, &VAR_17,
          &VAR_19);
 if (VAR_17.methodState == VAR_6)
  VAR_11->inner_method_done = 1;
 if (!(*VAR_14) ||
     (VAR_17.methodState == VAR_6 &&
      VAR_17.decision == VAR_1)) {
  VAR_12->methodState = VAR_6;
  VAR_12->decision = VAR_1;
 } else if ((VAR_17.methodState == VAR_6 ||
      VAR_17.methodState == VAR_7) &&
     (VAR_17.decision == VAR_2 ||
      VAR_17.decision == VAR_0)) {
  VAR_11->phase2_success = 1;
 }

 if (!(*VAR_14) && VAR_18 &&
     (VAR_18->pending_req_identity || VAR_18->pending_req_password ||
      VAR_18->pending_req_otp || VAR_18->pending_req_new_password ||
      VAR_18->pending_req_sim)) {
  FUNC_11(VAR_11->pending_phase2_req);
  VAR_11->pending_phase2_req = FUNC_10(VAR_13, VAR_15);
 } else if (!(*VAR_14))
  return -1;

 return 0;
}
