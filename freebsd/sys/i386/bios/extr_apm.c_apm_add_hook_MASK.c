
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apmhook {scalar_t__ ah_order; struct apmhook* ah_next; int ah_name; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static struct apmhook *
FUNC_2(struct apmhook **VAR_0, struct apmhook *VAR_1)
{
 struct apmhook *VAR_2, *VAR_3;

 FUNC_0("Add hook \"%s\"\n", VAR_1->ah_name);

 if (VAR_1 == ((void*)0))
  FUNC_1("illegal apm_hook!");
 VAR_3 = ((void*)0);
 for (VAR_2 = *VAR_0; VAR_2 != ((void*)0); VAR_3 = VAR_2, VAR_2 = VAR_2->ah_next)
  if (VAR_2->ah_order > VAR_1->ah_order)
   break;

 if (VAR_3 == ((void*)0)) {
  VAR_1->ah_next = *VAR_0;
  *VAR_0 = VAR_1;
 } else {
  VAR_1->ah_next = VAR_3->ah_next;
  VAR_3->ah_next = VAR_1;
 }
 return VAR_1;
}
