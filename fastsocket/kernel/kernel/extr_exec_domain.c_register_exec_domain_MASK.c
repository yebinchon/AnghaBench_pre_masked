
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exec_domain {struct exec_domain* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct exec_domain* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int
FUNC_2(struct exec_domain *VAR_4)
{
 struct exec_domain *VAR_5;
 int VAR_6 = -VAR_0;

 if (VAR_4 == ((void*)0))
  return -VAR_1;

 if (VAR_4->next != ((void*)0))
  return -VAR_0;

 FUNC_0(&VAR_3);
 for (VAR_5 = VAR_2; VAR_5; VAR_5 = VAR_5->next) {
  if (VAR_5 == VAR_4)
   goto out;
 }

 VAR_4->next = VAR_2;
 VAR_2 = VAR_4;
 VAR_6 = 0;

out:
 FUNC_1(&VAR_3);
 return (VAR_6);
}
