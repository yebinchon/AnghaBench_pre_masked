
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exec_domain {struct exec_domain* next; } ;


 int VAR_0 ;
 struct exec_domain* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int
FUNC_2(struct exec_domain *VAR_3)
{
 struct exec_domain **VAR_4;

 VAR_4 = &VAR_1;
 FUNC_0(&VAR_2);
 for (VAR_4 = &VAR_1; *VAR_4; VAR_4 = &(*VAR_4)->next) {
  if (VAR_3 == *VAR_4)
   goto unregister;
 }
 FUNC_1(&VAR_2);
 return -VAR_0;

unregister:
 *VAR_4 = VAR_3->next;
 VAR_3->next = ((void*)0);
 FUNC_1(&VAR_2);
 return 0;
}
