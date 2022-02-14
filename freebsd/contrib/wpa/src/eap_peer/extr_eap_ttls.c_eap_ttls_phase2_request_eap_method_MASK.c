
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wpabuf {int dummy; } ;
struct TYPE_3__ {scalar_t__ method; scalar_t__ vendor; } ;
struct eap_ttls_data {int tnc_started; scalar_t__ phase2_type; TYPE_2__* phase2_method; int * phase2_priv; int num_phase2_eap_types; int phase2_eap_types; TYPE_1__ phase2_eap_type; scalar_t__ ready_for_tnc; } ;
struct eap_sm {int init_phase2; } ;
struct eap_method_ret {int dummy; } ;
struct eap_hdr {int dummy; } ;
struct TYPE_4__ {int * (* init ) (struct eap_sm*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,struct eap_hdr*,struct wpabuf**) ;
 int FUNC_2 (struct eap_sm*,struct eap_ttls_data*) ;
 int FUNC_3 (struct eap_sm*,struct eap_ttls_data*,struct eap_method_ret*,struct eap_hdr*,size_t,struct wpabuf**) ;
 int FUNC_4 (struct eap_ttls_data*,scalar_t__) ;
 int * FUNC_5 (struct eap_sm*) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static int FUNC_7(struct eap_sm *VAR_6,
           struct eap_ttls_data *VAR_7,
           struct eap_method_ret *VAR_8,
           struct eap_hdr *VAR_9, size_t VAR_10,
           u8 VAR_11, struct wpabuf **VAR_12)
{
 if (VAR_7->phase2_eap_type.vendor == VAR_3 &&
     VAR_7->phase2_eap_type.method == VAR_1)
  FUNC_4(VAR_7, VAR_11);

 if (VAR_11 != VAR_7->phase2_eap_type.method || VAR_11 == VAR_1)
 {
  if (FUNC_1(VAR_7->phase2_eap_types,
         VAR_7->num_phase2_eap_types,
         VAR_9, VAR_12))
   return -1;
  return 0;
 }

 if (VAR_7->phase2_priv == ((void*)0)) {
  VAR_7->phase2_method = FUNC_0(
   VAR_3, VAR_11);
  if (VAR_7->phase2_method) {
   VAR_6->init_phase2 = 1;
   VAR_7->phase2_priv = VAR_7->phase2_method->init(VAR_6);
   VAR_6->init_phase2 = 0;
  }
 }
 if (VAR_7->phase2_priv == ((void*)0) || VAR_7->phase2_method == ((void*)0)) {
  FUNC_6(VAR_5, "EAP-TTLS: failed to initialize "
      "Phase 2 EAP method %d", VAR_11);
  return -1;
 }

 return FUNC_3(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_12);
}
