
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_wsc_data {int ext_reg_timeout; } ;
struct eap_sm {scalar_t__ method_pending; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct eap_sm*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, void *VAR_3)
{
 struct eap_sm *VAR_4 = VAR_2;
 struct eap_wsc_data *VAR_5 = VAR_3;

 if (VAR_4->method_pending != VAR_0)
  return;

 FUNC_1(VAR_1, "EAP-WSC: Timeout while waiting for an External "
     "Registrar");
 VAR_5->ext_reg_timeout = 1;
 FUNC_0(VAR_4);
}
