
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tncc_data {struct tnc_if_imc* imc; } ;
struct tnc_if_imc {struct tnc_if_imc* next; } ;
typedef enum tncc_process_res { ____Placeholder_tncc_process_res } tncc_process_res ;
typedef int TNC_ConnectionState ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tnc_if_imc*,int ) ;

__attribute__((used)) static void FUNC_1(struct tncc_data *VAR_3,
           enum tncc_process_res VAR_4)
{
 TNC_ConnectionState VAR_5;
 struct tnc_if_imc *VAR_6;

 switch (VAR_4) {
 case 130:
  VAR_5 = VAR_0;
  break;
 case 128:
  VAR_5 = VAR_2;
  break;
 case 129:
  VAR_5 = VAR_1;
  break;
 default:
  VAR_5 = VAR_2;
  break;
 }

 for (VAR_6 = VAR_3->imc; VAR_6; VAR_6 = VAR_6->next)
  FUNC_0(VAR_6, VAR_5);
}
