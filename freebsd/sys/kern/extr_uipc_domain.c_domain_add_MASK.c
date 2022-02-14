
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct domain {char* dom_name; struct domain* dom_next; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct domain* VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*) ;

void
FUNC_4(void *VAR_3)
{
 struct domain *VAR_4;

 VAR_4 = (struct domain *)VAR_3;
 FUNC_1(&VAR_0);
 VAR_4->dom_next = VAR_2;
 VAR_2 = VAR_4;

 FUNC_0(VAR_1 >= 1,
     ("attempt to domain_add(%s) before domaininit()",
     VAR_4->dom_name));

 if (VAR_1 < 1)
  FUNC_3("WARNING: attempt to domain_add(%s) before "
      "domaininit()\n", VAR_4->dom_name);






 if (VAR_1 >= 2)
  FUNC_3("WARNING: attempt to domain_add(%s) after "
      "domainfinalize()\n", VAR_4->dom_name);

 FUNC_2(&VAR_0);
}
