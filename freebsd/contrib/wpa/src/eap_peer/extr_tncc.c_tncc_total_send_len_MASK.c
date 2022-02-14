
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tncc_data {struct tnc_if_imc* imc; } ;
struct tnc_if_imc {scalar_t__ imc_send_len; struct tnc_if_imc* next; } ;



size_t FUNC_0(struct tncc_data *VAR_0)
{
 struct tnc_if_imc *VAR_1;

 size_t VAR_2 = 0;
 for (VAR_1 = VAR_0->imc; VAR_1; VAR_1 = VAR_1->next)
  VAR_2 += VAR_1->imc_send_len;
 return VAR_2;
}
