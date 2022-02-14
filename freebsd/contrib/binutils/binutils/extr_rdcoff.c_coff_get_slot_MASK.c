
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coff_types {struct coff_slots* slots; } ;
struct coff_slots {int * slots; struct coff_slots* next; } ;
typedef int debug_type ;


 int VAR_0 ;
 int FUNC_0 (struct coff_slots*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static debug_type *
FUNC_2 (struct coff_types *VAR_1, int VAR_2)
{
  struct coff_slots **VAR_3;

  VAR_3 = &VAR_1->slots;

  while (VAR_2 >= VAR_0)
    {
      if (*VAR_3 == ((void*)0))
 {
   *VAR_3 = (struct coff_slots *) FUNC_1 (sizeof **VAR_3);
   FUNC_0 (*VAR_3, 0, sizeof **VAR_3);
 }
      VAR_3 = &(*VAR_3)->next;
      VAR_2 -= VAR_0;
    }

  if (*VAR_3 == ((void*)0))
    {
      *VAR_3 = (struct coff_slots *) FUNC_1 (sizeof **VAR_3);
      FUNC_0 (*VAR_3, 0, sizeof **VAR_3);
    }

  return (*VAR_3)->slots + VAR_2;
}
