
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sim_attrs {scalar_t__ counter; int * iv; int encr_data_len; int * encr_data; } ;
struct eap_aka_data {size_t counter; int k_encr; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int *,int ,int *,struct eap_sim_attrs*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct eap_aka_data *VAR_1,
            struct eap_sim_attrs *VAR_2)
{
 struct eap_sim_attrs VAR_3;
 u8 *VAR_4;

 if (VAR_2->encr_data == ((void*)0) || VAR_2->iv == ((void*)0)) {
  FUNC_2(VAR_0, "EAP-AKA: Notification message after "
      "reauth did not include encrypted data");
  return -1;
 }

 VAR_4 = FUNC_0(VAR_1->k_encr, VAR_2->encr_data,
           VAR_2->encr_data_len, VAR_2->iv, &VAR_3,
           0);
 if (VAR_4 == ((void*)0)) {
  FUNC_2(VAR_0, "EAP-AKA: Failed to parse encrypted "
      "data from notification message");
  return -1;
 }

 if (VAR_3.counter < 0 || (size_t) VAR_3.counter != VAR_1->counter) {
  FUNC_2(VAR_0, "EAP-AKA: Counter in notification "
      "message does not match with counter in reauth "
      "message");
  FUNC_1(VAR_4);
  return -1;
 }

 FUNC_1(VAR_4);
 return 0;
}
