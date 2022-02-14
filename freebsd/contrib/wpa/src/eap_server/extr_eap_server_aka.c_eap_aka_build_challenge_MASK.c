
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct wpabuf {int dummy; } ;
struct eap_sm {TYPE_2__* user; scalar_t__ eap_sim_aka_result_ind; } ;
struct eap_sim_msg {int dummy; } ;
struct eap_aka_data {scalar_t__ eap_method; int k_aut; scalar_t__ network_name_len; int * network_name; scalar_t__ kdf; int * autn; int * rand; } ;
struct TYPE_4__ {TYPE_1__* methods; } ;
struct TYPE_3__ {scalar_t__ vendor; scalar_t__ method; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct eap_aka_data*,struct eap_sim_msg*) ;
 scalar_t__ FUNC_1 (struct eap_sm*,struct eap_aka_data*,struct eap_sim_msg*,int ,int *) ;
 int FUNC_2 (struct eap_sim_msg*,int ,scalar_t__,int *,scalar_t__) ;
 int FUNC_3 (struct eap_sim_msg*,int ) ;
 struct wpabuf* FUNC_4 (struct eap_sim_msg*,scalar_t__,int ,int *,int ) ;
 int FUNC_5 (struct eap_sim_msg*) ;
 struct eap_sim_msg* FUNC_6 (int ,int ,scalar_t__,int ) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static struct wpabuf * FUNC_8(struct eap_sm *VAR_19,
            struct eap_aka_data *VAR_20,
            u8 VAR_21)
{
 struct eap_sim_msg *VAR_22;

 FUNC_7(VAR_18, "EAP-AKA: Generating Challenge");
 VAR_22 = FUNC_6(VAR_5, VAR_21, VAR_20->eap_method,
          VAR_4);
 FUNC_7(VAR_18, "   AT_RAND");
 FUNC_2(VAR_22, VAR_12, 0, VAR_20->rand, VAR_3);
 FUNC_7(VAR_18, "   AT_AUTN");
 FUNC_2(VAR_22, VAR_7, 0, VAR_20->autn, VAR_0);
 if (VAR_20->eap_method == VAR_15) {
  if (VAR_20->kdf) {

   FUNC_7(VAR_18, "   AT_KDF");
   FUNC_2(VAR_22, VAR_9, VAR_20->kdf,
     ((void*)0), 0);
  }
  FUNC_7(VAR_18, "   AT_KDF");
  FUNC_2(VAR_22, VAR_9, VAR_2,
    ((void*)0), 0);
  FUNC_7(VAR_18, "   AT_KDF_INPUT");
  FUNC_2(VAR_22, VAR_10,
    VAR_20->network_name_len,
    VAR_20->network_name, VAR_20->network_name_len);
 }

 if (FUNC_1(VAR_19, VAR_20, VAR_22, 0, ((void*)0))) {
  FUNC_5(VAR_22);
  return ((void*)0);
 }

 FUNC_0(VAR_20, VAR_22);

 if (VAR_19->eap_sim_aka_result_ind) {
  FUNC_7(VAR_18, "   AT_RESULT_IND");
  FUNC_2(VAR_22, VAR_13, 0, ((void*)0), 0);
 }
 FUNC_7(VAR_18, "   AT_MAC");
 FUNC_3(VAR_22, VAR_11);
 return FUNC_4(VAR_22, VAR_20->eap_method, VAR_20->k_aut, ((void*)0), 0);
}
