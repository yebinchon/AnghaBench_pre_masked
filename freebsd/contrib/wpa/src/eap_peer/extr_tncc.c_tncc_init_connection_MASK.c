
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tncc_data {struct tnc_if_imc* imc; } ;
struct tnc_if_imc {scalar_t__ imc_send_len; int * imc_send; struct tnc_if_imc* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct tnc_if_imc*) ;
 int FUNC_2 (struct tnc_if_imc*,int ) ;

void FUNC_3(struct tncc_data *VAR_2)
{
 struct tnc_if_imc *VAR_3;

 for (VAR_3 = VAR_2->imc; VAR_3; VAR_3 = VAR_3->next) {
  FUNC_2(
   VAR_3, VAR_0);
  FUNC_2(
   VAR_3, VAR_1);

  FUNC_0(VAR_3->imc_send);
  VAR_3->imc_send = ((void*)0);
  VAR_3->imc_send_len = 0;

  FUNC_1(VAR_3);
 }
}
