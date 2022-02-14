
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prison {char* pr_name; struct prison* pr_parent; } ;


 struct prison VAR_0 ;
 scalar_t__ FUNC_0 (struct prison*,struct prison*) ;
 char* FUNC_1 (char*,char) ;

char *
FUNC_2(struct prison *VAR_1, struct prison *VAR_2)
{
 char *VAR_3;


 if (VAR_1 == VAR_2)
  return "0";
 VAR_3 = VAR_2->pr_name;
 if (FUNC_0(VAR_1, VAR_2)) {





  for (; VAR_1 != &VAR_0; VAR_1 = VAR_1->pr_parent)
   VAR_3 = FUNC_1(VAR_3, '.') + 1;
 }
 return (VAR_3);
}
