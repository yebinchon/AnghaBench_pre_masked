
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omp_region {struct omp_region* next; struct omp_region* inner; } ;


 int FUNC_0 (struct omp_region*) ;

__attribute__((used)) static void
FUNC_1 (struct omp_region *VAR_0)
{
  struct omp_region *VAR_1, *VAR_2;

  for (VAR_1 = VAR_0->inner; VAR_1 ; VAR_1 = VAR_2)
    {
      VAR_2 = VAR_1->next;
      FUNC_1 (VAR_1);
    }

  FUNC_0 (VAR_0);
}
