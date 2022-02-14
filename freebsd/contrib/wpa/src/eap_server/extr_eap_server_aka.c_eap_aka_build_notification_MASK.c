
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_sim_msg {int dummy; } ;
struct eap_aka_data {int k_aut; int eap_method; int k_encr; int counter; scalar_t__ reauth; scalar_t__ use_result_ind; int notification; } ;


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
 int FUNC_0 (struct eap_sim_msg*,int ,int ,int *,int ) ;
 scalar_t__ FUNC_1 (struct eap_sim_msg*,int ,int ) ;
 int FUNC_2 (struct eap_sim_msg*,int ,int ) ;
 int FUNC_3 (struct eap_sim_msg*,int ) ;
 struct wpabuf* FUNC_4 (struct eap_sim_msg*,int ,int ,int *,int ) ;
 int FUNC_5 (struct eap_sim_msg*) ;
 struct eap_sim_msg* FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static struct wpabuf * FUNC_8(struct eap_sm *VAR_10,
        struct eap_aka_data *VAR_11,
        u8 VAR_12)
{
 struct eap_sim_msg *VAR_13;

 FUNC_7(VAR_8, "EAP-AKA: Generating Notification");
 VAR_13 = FUNC_6(VAR_1, VAR_12, VAR_11->eap_method,
          VAR_0);
 FUNC_7(VAR_8, "   AT_NOTIFICATION (%d)", VAR_11->notification);
 FUNC_0(VAR_13, VAR_6, VAR_11->notification,
   ((void*)0), 0);
 if (VAR_11->use_result_ind) {
  if (VAR_11->reauth) {
   FUNC_7(VAR_8, "   AT_IV");
   FUNC_7(VAR_8, "   AT_ENCR_DATA");
   FUNC_2(VAR_13, VAR_4,
         VAR_3);
   FUNC_7(VAR_8, "   *AT_COUNTER (%u)",
       VAR_11->counter);
   FUNC_0(VAR_13, VAR_2, VAR_11->counter,
     ((void*)0), 0);

   if (FUNC_1(VAR_13, VAR_11->k_encr,
           VAR_7)) {
    FUNC_7(VAR_9, "EAP-AKA: Failed to "
        "encrypt AT_ENCR_DATA");
    FUNC_5(VAR_13);
    return ((void*)0);
   }
  }

  FUNC_7(VAR_8, "   AT_MAC");
  FUNC_3(VAR_13, VAR_5);
 }
 return FUNC_4(VAR_13, VAR_11->eap_method, VAR_11->k_aut, ((void*)0), 0);
}
