
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;
struct eap_sim_msg {int dummy; } ;
struct eap_aka_data {int eap_method; int k_encr; int counter; scalar_t__ reauth; int * k_aut; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct eap_sim_msg*,int ,int ,int *,int ) ;
 scalar_t__ FUNC_1 (struct eap_sim_msg*,int ,int ) ;
 int FUNC_2 (struct eap_sim_msg*,int ,int ) ;
 int FUNC_3 (struct eap_sim_msg*,int ) ;
 struct wpabuf* FUNC_4 (struct eap_sim_msg*,int ,int *,int *,int ) ;
 int FUNC_5 (struct eap_sim_msg*) ;
 struct eap_sim_msg* FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static struct wpabuf * FUNC_8(struct eap_aka_data *VAR_9,
           u8 VAR_10, u16 VAR_11)
{
 struct eap_sim_msg *VAR_12;
 u8 *VAR_13 = (VAR_11 & 0x4000) == 0 ? VAR_9->k_aut : ((void*)0);

 FUNC_7(VAR_7, "Generating EAP-AKA Notification (id=%d)", VAR_10);
 VAR_12 = FUNC_6(VAR_1, VAR_10, VAR_9->eap_method,
          VAR_0);
 if (VAR_13 && VAR_9->reauth) {
  FUNC_7(VAR_7, "   AT_IV");
  FUNC_7(VAR_7, "   AT_ENCR_DATA");
  FUNC_2(VAR_12, VAR_4,
        VAR_3);
  FUNC_7(VAR_7, "   *AT_COUNTER %d", VAR_9->counter);
  FUNC_0(VAR_12, VAR_2, VAR_9->counter,
    ((void*)0), 0);
  if (FUNC_1(VAR_12, VAR_9->k_encr,
          VAR_6)) {
   FUNC_7(VAR_8, "EAP-AKA: Failed to encrypt "
       "AT_ENCR_DATA");
   FUNC_5(VAR_12);
   return ((void*)0);
  }
 }
 if (VAR_13) {
  FUNC_7(VAR_7, "   AT_MAC");
  FUNC_3(VAR_12, VAR_5);
 }
 return FUNC_4(VAR_12, VAR_9->eap_method, VAR_13, (u8 *) "", 0);
}
