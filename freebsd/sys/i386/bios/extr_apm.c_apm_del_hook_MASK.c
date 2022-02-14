
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apmhook {struct apmhook* ah_next; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1(struct apmhook **VAR_0, struct apmhook *VAR_1)
{
 struct apmhook *VAR_2, *VAR_3;

 VAR_3 = ((void*)0);
 for (VAR_2 = *VAR_0; VAR_2 != ((void*)0); VAR_3 = VAR_2, VAR_2 = VAR_2->ah_next)
  if (VAR_2 == VAR_1)
   goto deleteit;
 FUNC_0("Tried to delete unregistered apm_hook.");
 return;
deleteit:
 if (VAR_3 != ((void*)0))
  VAR_3->ah_next = VAR_2->ah_next;
 else
  *VAR_0 = VAR_2->ah_next;
}
