
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_method {int (* free ) (struct eap_method*) ;void* dl_handle; struct eap_method* next; } ;


 int FUNC_0 (void*) ;
 struct eap_method* VAR_0 ;
 int FUNC_1 (struct eap_method*) ;
 int FUNC_2 (struct eap_method*) ;

void FUNC_3(void)
{
 struct eap_method *VAR_1;




 while (VAR_0) {
  VAR_1 = VAR_0;
  VAR_0 = VAR_0->next;





  if (VAR_1->free)
   VAR_1->free(VAR_1);
  else
   FUNC_1(VAR_1);





 }
}
