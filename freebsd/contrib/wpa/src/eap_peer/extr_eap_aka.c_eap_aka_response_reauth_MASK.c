
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sim_msg {int dummy; } ;
struct eap_aka_data {unsigned int counter_too_small; unsigned int counter; int k_aut; int eap_method; scalar_t__ use_result_ind; int k_encr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct eap_aka_data*,struct eap_sim_msg*) ;
 int FUNC_1 (struct eap_sim_msg*,int ,unsigned int,int *,int ) ;
 scalar_t__ FUNC_2 (struct eap_sim_msg*,int ,int ) ;
 int FUNC_3 (struct eap_sim_msg*,int ,int ) ;
 int FUNC_4 (struct eap_sim_msg*,int ) ;
 struct wpabuf* FUNC_5 (struct eap_sim_msg*,int ,int ,int const*,int ) ;
 int FUNC_6 (struct eap_sim_msg*) ;
 struct eap_sim_msg* FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,char*,...) ;

__attribute__((used)) static struct wpabuf * FUNC_9(struct eap_aka_data *VAR_12,
            u8 VAR_13, int VAR_14,
            const u8 *VAR_15)
{
 struct eap_sim_msg *VAR_16;
 unsigned int VAR_17;

 FUNC_8(VAR_10, "Generating EAP-AKA Reauthentication (id=%d)",
     VAR_13);
 VAR_16 = FUNC_7(VAR_1, VAR_13, VAR_12->eap_method,
          VAR_0);
 FUNC_8(VAR_10, "   AT_IV");
 FUNC_8(VAR_10, "   AT_ENCR_DATA");
 FUNC_3(VAR_16, VAR_5, VAR_4);

 if (VAR_14) {
  FUNC_8(VAR_10, "   *AT_COUNTER_TOO_SMALL");
  FUNC_1(VAR_16, VAR_3, 0, ((void*)0), 0);
  VAR_17 = VAR_12->counter_too_small;
 } else
  VAR_17 = VAR_12->counter;

 FUNC_8(VAR_10, "   *AT_COUNTER %d", VAR_17);
 FUNC_1(VAR_16, VAR_2, VAR_17, ((void*)0), 0);

 if (FUNC_2(VAR_16, VAR_12->k_encr, VAR_7)) {
  FUNC_8(VAR_11, "EAP-AKA: Failed to encrypt "
      "AT_ENCR_DATA");
  FUNC_6(VAR_16);
  return ((void*)0);
 }
 FUNC_0(VAR_12, VAR_16);
 if (VAR_12->use_result_ind) {
  FUNC_8(VAR_10, "   AT_RESULT_IND");
  FUNC_1(VAR_16, VAR_8, 0, ((void*)0), 0);
 }
 FUNC_8(VAR_10, "   AT_MAC");
 FUNC_4(VAR_16, VAR_6);
 return FUNC_5(VAR_16, VAR_12->eap_method, VAR_12->k_aut, VAR_15,
      VAR_9);
}
