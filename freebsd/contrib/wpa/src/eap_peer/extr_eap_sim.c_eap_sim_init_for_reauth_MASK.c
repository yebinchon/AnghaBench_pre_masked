
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
struct eap_sim_data {scalar_t__ num_notification; scalar_t__ num_id_req; int nonce_mt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct eap_sm*,struct eap_sim_data*) ;
 int FUNC_1 (struct eap_sim_data*,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void * FUNC_4(struct eap_sm *VAR_3, void *VAR_4)
{
 struct eap_sim_data *VAR_5 = VAR_4;
 if (FUNC_2(VAR_5->nonce_mt, VAR_1)) {
  FUNC_3(VAR_2, "EAP-SIM: Failed to get random data "
      "for NONCE_MT");
  FUNC_0(VAR_3, VAR_5);
  return ((void*)0);
 }
 VAR_5->num_id_req = 0;
 VAR_5->num_notification = 0;
 FUNC_1(VAR_5, VAR_0);
 return VAR_4;
}
