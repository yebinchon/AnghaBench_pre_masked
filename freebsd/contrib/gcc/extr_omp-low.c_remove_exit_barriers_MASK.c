
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omp_region {scalar_t__ type; struct omp_region* next; struct omp_region* inner; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct omp_region*) ;

__attribute__((used)) static void
FUNC_1 (struct omp_region *VAR_1)
{
  if (VAR_1->type == VAR_0)
    FUNC_0 (VAR_1);

  if (VAR_1->inner)
    {
      VAR_1 = VAR_1->inner;
      FUNC_1 (VAR_1);
      while (VAR_1->next)
 {
   VAR_1 = VAR_1->next;
   FUNC_1 (VAR_1);
 }
    }
}
