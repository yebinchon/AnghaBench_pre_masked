
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omp_region {struct omp_region* next; } ;


 int FUNC_0 (struct omp_region*) ;
 struct omp_region* VAR_0 ;

void
FUNC_1 (void)
{
  struct omp_region *VAR_1, *VAR_2;
  for (VAR_1 = VAR_0; VAR_1 ; VAR_1 = VAR_2)
    {
      VAR_2 = VAR_1->next;
      FUNC_0 (VAR_1);
    }
  VAR_0 = ((void*)0);
}
