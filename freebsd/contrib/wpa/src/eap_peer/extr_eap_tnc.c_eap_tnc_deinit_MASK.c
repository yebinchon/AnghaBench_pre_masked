
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_tnc_data {int tncc; int out_buf; int in_buf; } ;
struct eap_sm {int dummy; } ;


 int FUNC_0 (struct eap_tnc_data*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct eap_sm *VAR_0, void *VAR_1)
{
 struct eap_tnc_data *VAR_2 = VAR_1;

 FUNC_2(VAR_2->in_buf);
 FUNC_2(VAR_2->out_buf);
 FUNC_1(VAR_2->tncc);
 FUNC_0(VAR_2);
}
