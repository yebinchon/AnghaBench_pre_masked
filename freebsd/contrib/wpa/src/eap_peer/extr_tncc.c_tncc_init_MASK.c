
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tncc_data {struct tnc_if_imc* imc; } ;
struct tnc_if_imc {int name; struct tnc_if_imc* next; } ;


 int VAR_0 ;
 struct tncc_data* FUNC_0 (int) ;
 int FUNC_1 (struct tncc_data*) ;
 scalar_t__ FUNC_2 (struct tnc_if_imc*) ;
 scalar_t__ FUNC_3 (struct tncc_data*) ;
 int FUNC_4 (int ,char*,...) ;

struct tncc_data * FUNC_5(void)
{
 struct tncc_data *VAR_1;
 struct tnc_if_imc *VAR_2;

 VAR_1 = FUNC_0(sizeof(*VAR_1));
 if (VAR_1 == ((void*)0))
  return ((void*)0);






 if (FUNC_3(VAR_1) < 0) {
  FUNC_4(VAR_0, "TNC: Failed to read TNC configuration");
  goto failed;
 }

 for (VAR_2 = VAR_1->imc; VAR_2; VAR_2 = VAR_2->next) {
  if (FUNC_2(VAR_2)) {
   FUNC_4(VAR_0, "TNC: Failed to load IMC '%s'",
       VAR_2->name);
   goto failed;
  }
 }

 return VAR_1;

failed:
 FUNC_1(VAR_1);
 return ((void*)0);
}
