
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef long u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int init_phase2; } ;
struct eap_peer_config {scalar_t__ pending_req_sim; scalar_t__ pending_req_new_password; scalar_t__ pending_req_otp; scalar_t__ pending_req_password; scalar_t__ pending_req_identity; } ;
struct TYPE_4__ {long method; int vendor; } ;
struct eap_peap_data {int phase2_eap_started; int phase2_eap_success; int phase2_success; size_t num_phase2_types; struct wpabuf* pending_phase2_req; int * phase2_priv; TYPE_3__* phase2_method; TYPE_1__ phase2_type; TYPE_2__* phase2_types; int soh; } ;
struct eap_method_ret {void* methodState; void* decision; } ;
struct eap_hdr {int identifier; int length; } ;
typedef int iret ;
struct TYPE_6__ {struct wpabuf* (* process ) (struct eap_sm*,int *,struct eap_method_ret*,struct wpabuf*) ;int * (* init ) (struct eap_sm*) ;} ;
struct TYPE_5__ {long method; int vendor; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;


 long VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t FUNC_0 (int ) ;
 struct eap_peer_config* FUNC_1 (struct eap_sm*) ;
 long* FUNC_2 (int ,int,struct wpabuf*,size_t*) ;
 struct wpabuf* FUNC_3 (int ,int,int ,int ,int ) ;
 TYPE_3__* FUNC_4 (int ,long) ;
 int FUNC_5 (TYPE_2__*,size_t,struct eap_hdr*,struct wpabuf**) ;
 struct wpabuf* FUNC_6 (struct eap_sm*,int ,int) ;
 int FUNC_7 (struct eap_sm*,struct eap_peap_data*,struct eap_method_ret*,struct wpabuf*,struct wpabuf**,int) ;
 int FUNC_8 (struct eap_method_ret*,int ,int) ;
 int * FUNC_9 (struct eap_sm*) ;
 struct wpabuf* FUNC_10 (struct eap_sm*,int *,struct eap_method_ret*,struct wpabuf*) ;
 struct wpabuf* FUNC_11 (int ,long const*,size_t) ;
 int FUNC_12 (int ,char*,...) ;
 struct wpabuf* FUNC_13 (struct eap_hdr*,size_t) ;
 int FUNC_14 (struct wpabuf*) ;
 int FUNC_15 (struct wpabuf*) ;
 struct eap_hdr* FUNC_16 (struct wpabuf*) ;
 int FUNC_17 (struct wpabuf*,struct wpabuf*) ;

__attribute__((used)) static int FUNC_18(struct eap_sm *VAR_11,
       struct eap_peap_data *VAR_12,
       struct eap_method_ret *VAR_13,
       struct wpabuf *VAR_14,
       struct wpabuf **VAR_15)
{
 struct eap_hdr *VAR_16 = FUNC_16(VAR_14);
 size_t VAR_17 = FUNC_0(VAR_16->length);
 u8 *VAR_18;
 struct eap_method_ret VAR_19;
 struct eap_peer_config *VAR_20 = FUNC_1(VAR_11);

 if (VAR_17 <= sizeof(struct eap_hdr)) {
  FUNC_12(VAR_10, "EAP-PEAP: too short "
      "Phase 2 request (len=%lu)", (unsigned long) VAR_17);
  return -1;
 }
 VAR_18 = (u8 *) (VAR_16 + 1);
 FUNC_12(VAR_9, "EAP-PEAP: Phase 2 Request: type=%d", *VAR_18);
 switch (*VAR_18) {
 case 129:
  *VAR_15 = FUNC_6(VAR_11, VAR_16->identifier, 1);
  break;
 case 128:
  FUNC_8(&VAR_19, 0, sizeof(VAR_19));
  if (FUNC_7(VAR_11, VAR_12, &VAR_19, VAR_14, VAR_15,
        VAR_12->phase2_eap_started &&
        !VAR_12->phase2_eap_success)) {
   VAR_13->methodState = VAR_7;
   VAR_13->decision = VAR_1;
   return -1;
  }
  if (VAR_19.methodState == VAR_7 ||
      VAR_19.methodState == VAR_8) {
   VAR_13->methodState = VAR_19.methodState;
   VAR_13->decision = VAR_19.decision;
   VAR_12->phase2_success = 1;
  }
  break;
 case 130:
 default:
  if (VAR_12->phase2_type.vendor == VAR_5 &&
      VAR_12->phase2_type.method == VAR_4) {
   size_t VAR_21;
   for (VAR_21 = 0; VAR_21 < VAR_12->num_phase2_types; VAR_21++) {
    if (VAR_12->phase2_types[VAR_21].vendor !=
        VAR_5 ||
        VAR_12->phase2_types[VAR_21].method != *VAR_18)
     continue;

    VAR_12->phase2_type.vendor =
     VAR_12->phase2_types[VAR_21].vendor;
    VAR_12->phase2_type.method =
     VAR_12->phase2_types[VAR_21].method;
    FUNC_12(VAR_9, "EAP-PEAP: Selected "
        "Phase 2 EAP vendor %d method %d",
        VAR_12->phase2_type.vendor,
        VAR_12->phase2_type.method);
    break;
   }
  }
  if (*VAR_18 != VAR_12->phase2_type.method ||
      *VAR_18 == VAR_4) {
   if (FUNC_5(VAR_12->phase2_types,
          VAR_12->num_phase2_types,
          VAR_16, VAR_15))
    return -1;
   return 0;
  }

  if (VAR_12->phase2_priv == ((void*)0)) {
   VAR_12->phase2_method = FUNC_4(
    VAR_12->phase2_type.vendor,
    VAR_12->phase2_type.method);
   if (VAR_12->phase2_method) {
    VAR_11->init_phase2 = 1;
    VAR_12->phase2_priv =
     VAR_12->phase2_method->init(VAR_11);
    VAR_11->init_phase2 = 0;
   }
  }
  if (VAR_12->phase2_priv == ((void*)0) || VAR_12->phase2_method == ((void*)0)) {
   FUNC_12(VAR_10, "EAP-PEAP: failed to initialize "
       "Phase 2 EAP method %d", *VAR_18);
   VAR_13->methodState = VAR_7;
   VAR_13->decision = VAR_1;
   return -1;
  }
  VAR_12->phase2_eap_started = 1;
  FUNC_8(&VAR_19, 0, sizeof(VAR_19));
  *VAR_15 = VAR_12->phase2_method->process(VAR_11, VAR_12->phase2_priv,
           &VAR_19, VAR_14);
  if ((VAR_19.methodState == VAR_7 ||
       VAR_19.methodState == VAR_8) &&
      (VAR_19.decision == VAR_2 ||
       VAR_19.decision == VAR_0)) {
   VAR_12->phase2_eap_success = 1;
   VAR_12->phase2_success = 1;
  }
  break;
 }

 if (*VAR_15 == ((void*)0) &&
     (VAR_20->pending_req_identity || VAR_20->pending_req_password ||
      VAR_20->pending_req_otp || VAR_20->pending_req_new_password ||
      VAR_20->pending_req_sim)) {
  FUNC_14(VAR_12->pending_phase2_req);
  VAR_12->pending_phase2_req = FUNC_13(VAR_16, VAR_17);
 }

 return 0;
}
