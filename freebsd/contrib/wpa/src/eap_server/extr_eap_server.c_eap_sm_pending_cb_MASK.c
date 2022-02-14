
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {scalar_t__ method_pending; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;

void FUNC_1(struct eap_sm *VAR_3)
{
 if (VAR_3 == ((void*)0))
  return;
 FUNC_0(VAR_2, "EAP: Callback for pending request received");
 if (VAR_3->method_pending == VAR_1)
  VAR_3->method_pending = VAR_0;
}
