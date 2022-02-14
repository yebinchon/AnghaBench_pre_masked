
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tncc_data {struct tncc_data* next; struct tncc_data* imc; } ;
struct tnc_if_imc {struct tnc_if_imc* next; struct tnc_if_imc* imc; } ;


 int FUNC_0 (struct tncc_data*) ;
 int FUNC_1 (struct tncc_data*) ;

void FUNC_2(struct tncc_data *VAR_0)
{
 struct tnc_if_imc *VAR_1, *VAR_2;

 VAR_1 = VAR_0->imc;
 while (VAR_1) {
  FUNC_1(VAR_1);

  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_0(VAR_2);
 }

 FUNC_0(VAR_0);
}
