
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct async_domain {scalar_t__ registered; int domain; int node; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct async_domain *VAR_2)
{
 FUNC_2(&VAR_1);
 FUNC_4(&VAR_0);
 FUNC_0(!VAR_2->registered || !FUNC_1(&VAR_2->node) ||
  !FUNC_1(&VAR_2->domain));
 VAR_2->registered = 0;
 FUNC_5(&VAR_0);
 FUNC_3(&VAR_1);
}
