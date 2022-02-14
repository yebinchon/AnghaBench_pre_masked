
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_test_data {scalar_t__ eapol_test_num_reauths; scalar_t__ ctrl_iface; scalar_t__ id_req_sent; } ;
struct eapol_sm {int dummy; } ;
typedef enum eapol_supp_result { ____Placeholder_eapol_supp_result } eapol_supp_result ;


 int VAR_0 ;
 int FUNC_0 (struct eapol_test_data*) ;
 int FUNC_1 (int ,int,int ,struct eapol_test_data*,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void FUNC_4(struct eapol_sm *VAR_1, enum eapol_supp_result VAR_2,
   void *VAR_3)
{
 struct eapol_test_data *VAR_4 = VAR_3;
 FUNC_3("eapol_sm_cb: result=%d\n", VAR_2);
 VAR_4->id_req_sent = 0;
 if (VAR_4->ctrl_iface)
  return;
 VAR_4->eapol_test_num_reauths--;
 if (VAR_4->eapol_test_num_reauths < 0)
  FUNC_2();
 else {
  FUNC_0(VAR_4);
  FUNC_1(0, 100000, VAR_0, VAR_4, ((void*)0));
 }
}
