
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_sim_msg {int dummy; } ;
struct eap_sim_data {int k_aut; int k_encr; int counter; scalar_t__ reauth; scalar_t__ use_result_ind; int notification; } ;


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
 int FUNC_0 (struct eap_sim_msg*,int ,int ,int *,int ) ;
 scalar_t__ FUNC_1 (struct eap_sim_msg*,int ,int ) ;
 int FUNC_2 (struct eap_sim_msg*,int ,int ) ;
 int FUNC_3 (struct eap_sim_msg*,int ) ;
 struct wpabuf* FUNC_4 (struct eap_sim_msg*,int ,int ,int *,int ) ;
 int FUNC_5 (struct eap_sim_msg*) ;
 struct eap_sim_msg* FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static struct wpabuf * FUNC_8(struct eap_sm *VAR_11,
        struct eap_sim_data *VAR_12,
        u8 VAR_13)
{
 struct eap_sim_msg *VAR_14;

 FUNC_7(VAR_9, "EAP-SIM: Generating Notification");
 VAR_14 = FUNC_6(VAR_0, VAR_13, VAR_8,
          VAR_7);
 FUNC_7(VAR_9, "   AT_NOTIFICATION (%d)", VAR_12->notification);
 FUNC_0(VAR_14, VAR_5, VAR_12->notification,
   ((void*)0), 0);
 if (VAR_12->use_result_ind) {
  if (VAR_12->reauth) {
   FUNC_7(VAR_9, "   AT_IV");
   FUNC_7(VAR_9, "   AT_ENCR_DATA");
   FUNC_2(VAR_14, VAR_3,
         VAR_2);
   FUNC_7(VAR_9, "   *AT_COUNTER (%u)",
       VAR_12->counter);
   FUNC_0(VAR_14, VAR_1, VAR_12->counter,
     ((void*)0), 0);

   if (FUNC_1(VAR_14, VAR_12->k_encr,
           VAR_6)) {
    FUNC_7(VAR_10, "EAP-SIM: Failed to "
        "encrypt AT_ENCR_DATA");
    FUNC_5(VAR_14);
    return ((void*)0);
   }
  }

  FUNC_7(VAR_9, "   AT_MAC");
  FUNC_3(VAR_14, VAR_4);
 }
 return FUNC_4(VAR_14, VAR_8, VAR_12->k_aut, ((void*)0), 0);
}
