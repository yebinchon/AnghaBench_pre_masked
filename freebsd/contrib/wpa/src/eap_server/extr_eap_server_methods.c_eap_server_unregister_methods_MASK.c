
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_method {int (* free ) (struct eap_method*) ;struct eap_method* next; } ;


 struct eap_method* VAR_0 ;
 int FUNC_0 (struct eap_method*) ;
 int FUNC_1 (struct eap_method*) ;

void FUNC_2(void)
{
 struct eap_method *VAR_1;

 while (VAR_0) {
  VAR_1 = VAR_0;
  VAR_0 = VAR_0->next;

  if (VAR_1->free)
   VAR_1->free(VAR_1);
  else
   FUNC_0(VAR_1);
 }
}
