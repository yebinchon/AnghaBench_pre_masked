
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_method {scalar_t__ version; scalar_t__ vendor; scalar_t__ method; struct eap_method* next; int * name; } ;


 scalar_t__ VAR_0 ;
 struct eap_method* VAR_1 ;
 int FUNC_0 (struct eap_method*) ;
 scalar_t__ FUNC_1 (int *,int *) ;

int FUNC_2(struct eap_method *VAR_2)
{
 struct eap_method *VAR_3, *VAR_4 = ((void*)0);

 if (VAR_2 == ((void*)0) || VAR_2->name == ((void*)0) ||
     VAR_2->version != VAR_0) {
  FUNC_0(VAR_2);
  return -1;
 }

 for (VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_3->next) {
  if ((VAR_3->vendor == VAR_2->vendor &&
       VAR_3->method == VAR_2->method) ||
      FUNC_1(VAR_3->name, VAR_2->name) == 0) {
   FUNC_0(VAR_2);
   return -2;
  }
  VAR_4 = VAR_3;
 }

 if (VAR_4)
  VAR_4->next = VAR_2;
 else
  VAR_1 = VAR_2;

 return 0;
}
