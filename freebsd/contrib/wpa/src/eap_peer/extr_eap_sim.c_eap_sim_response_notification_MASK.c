
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;
struct eap_sim_msg {int dummy; } ;
struct eap_sim_data {int k_encr; int counter; scalar_t__ reauth; int * k_aut; } ;


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
 struct wpabuf* FUNC_4 (struct eap_sim_msg*,int ,int *,int *,int ) ;
 int FUNC_5 (struct eap_sim_msg*) ;
 struct eap_sim_msg* FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static struct wpabuf * FUNC_8(struct eap_sim_data *VAR_10,
           u8 VAR_11, u16 VAR_12)
{
 struct eap_sim_msg *VAR_13;
 u8 *VAR_14 = (VAR_12 & 0x4000) == 0 ? VAR_10->k_aut : ((void*)0);

 FUNC_7(VAR_8, "Generating EAP-SIM Notification (id=%d)", VAR_11);
 VAR_13 = FUNC_6(VAR_0, VAR_11,
          VAR_7, VAR_6);
 if (VAR_14 && VAR_10->reauth) {
  FUNC_7(VAR_8, "   AT_IV");
  FUNC_7(VAR_8, "   AT_ENCR_DATA");
  FUNC_2(VAR_13, VAR_3,
        VAR_2);
  FUNC_7(VAR_8, "   *AT_COUNTER %d", VAR_10->counter);
  FUNC_0(VAR_13, VAR_1, VAR_10->counter,
    ((void*)0), 0);
  if (FUNC_1(VAR_13, VAR_10->k_encr,
          VAR_5)) {
   FUNC_7(VAR_9, "EAP-SIM: Failed to encrypt "
       "AT_ENCR_DATA");
   FUNC_5(VAR_13);
   return ((void*)0);
  }
 }
 if (VAR_14) {
  FUNC_7(VAR_8, "   AT_MAC");
  FUNC_3(VAR_13, VAR_4);
 }
 return FUNC_4(VAR_13, VAR_7, VAR_14, (u8 *) "", 0);
}
