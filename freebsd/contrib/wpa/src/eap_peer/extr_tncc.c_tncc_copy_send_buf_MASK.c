
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tncc_data {struct tnc_if_imc* imc; } ;
struct tnc_if_imc {scalar_t__ imc_send_len; int * imc_send; struct tnc_if_imc* next; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,scalar_t__) ;

u8 * FUNC_2(struct tncc_data *VAR_0, u8 *VAR_1)
{
 struct tnc_if_imc *VAR_2;

 for (VAR_2 = VAR_0->imc; VAR_2; VAR_2 = VAR_2->next) {
  if (VAR_2->imc_send == ((void*)0))
   continue;

  FUNC_1(VAR_1, VAR_2->imc_send, VAR_2->imc_send_len);
  VAR_1 += VAR_2->imc_send_len;
  FUNC_0(VAR_2->imc_send);
  VAR_2->imc_send = ((void*)0);
  VAR_2->imc_send_len = 0;
 }

 return VAR_1;
}
