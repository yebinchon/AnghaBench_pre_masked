
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sim_msg {int dummy; } ;
struct eap_sim_data {unsigned int counter_too_small; unsigned int counter; int k_aut; scalar_t__ use_result_ind; int k_encr; } ;


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
 int VAR_12 ;
 int FUNC_0 (struct eap_sim_msg*,int ,unsigned int,int *,int ) ;
 scalar_t__ FUNC_1 (struct eap_sim_msg*,int ,int ) ;
 int FUNC_2 (struct eap_sim_msg*,int ,int ) ;
 int FUNC_3 (struct eap_sim_msg*,int ) ;
 struct wpabuf* FUNC_4 (struct eap_sim_msg*,int ,int ,int const*,int ) ;
 int FUNC_5 (struct eap_sim_msg*) ;
 struct eap_sim_msg* FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static struct wpabuf * FUNC_8(struct eap_sim_data *VAR_13,
            u8 VAR_14, int VAR_15,
            const u8 *VAR_16)
{
 struct eap_sim_msg *VAR_17;
 unsigned int VAR_18;

 FUNC_7(VAR_11, "Generating EAP-SIM Reauthentication (id=%d)",
     VAR_14);
 VAR_17 = FUNC_6(VAR_0, VAR_14, VAR_10,
          VAR_9);
 FUNC_7(VAR_11, "   AT_IV");
 FUNC_7(VAR_11, "   AT_ENCR_DATA");
 FUNC_2(VAR_17, VAR_4, VAR_3);

 if (VAR_15) {
  FUNC_7(VAR_11, "   *AT_COUNTER_TOO_SMALL");
  FUNC_0(VAR_17, VAR_2, 0, ((void*)0), 0);
  VAR_18 = VAR_13->counter_too_small;
 } else
  VAR_18 = VAR_13->counter;

 FUNC_7(VAR_11, "   *AT_COUNTER %d", VAR_18);
 FUNC_0(VAR_17, VAR_1, VAR_18, ((void*)0), 0);

 if (FUNC_1(VAR_17, VAR_13->k_encr, VAR_6)) {
  FUNC_7(VAR_12, "EAP-SIM: Failed to encrypt "
      "AT_ENCR_DATA");
  FUNC_5(VAR_17);
  return ((void*)0);
 }
 if (VAR_13->use_result_ind) {
  FUNC_7(VAR_11, "   AT_RESULT_IND");
  FUNC_0(VAR_17, VAR_7, 0, ((void*)0), 0);
 }
 FUNC_7(VAR_11, "   AT_MAC");
 FUNC_3(VAR_17, VAR_5);
 return FUNC_4(VAR_17, VAR_10, VAR_13->k_aut, VAR_16,
      VAR_8);
}
