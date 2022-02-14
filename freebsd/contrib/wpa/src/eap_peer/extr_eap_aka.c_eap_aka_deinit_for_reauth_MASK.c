
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
struct eap_aka_data {int prev_id; scalar_t__ kdf_negotiation; scalar_t__ use_result_ind; int * id_msgs; } ;


 int VAR_0 ;
 int FUNC_0 (struct eap_sm*,struct eap_aka_data*,int ) ;
 int FUNC_1 (struct eap_aka_data*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct eap_sm *VAR_1, void *VAR_2)
{
 struct eap_aka_data *VAR_3 = VAR_2;
 FUNC_0(VAR_1, VAR_3, VAR_0);
 VAR_3->prev_id = -1;
 FUNC_2(VAR_3->id_msgs);
 VAR_3->id_msgs = ((void*)0);
 VAR_3->use_result_ind = 0;
 VAR_3->kdf_negotiation = 0;
 FUNC_1(VAR_3, 1);
}
