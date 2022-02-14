
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct et_occ {scalar_t__ min; scalar_t__ depth; struct et_occ* min_occ; struct et_occ* next; struct et_occ* prev; } ;



__attribute__((used)) static inline void
FUNC_0 (struct et_occ *VAR_0)
{
  struct et_occ *VAR_1 = VAR_0->prev;

  if (!VAR_1
      || (VAR_0->next
   && VAR_1->min > VAR_0->next->min))
      VAR_1 = VAR_0->next;

  if (VAR_1 && VAR_1->min < 0)
    {
      VAR_0->min = VAR_1->min + VAR_0->depth;
      VAR_0->min_occ = VAR_1->min_occ;
    }
  else
    {
      VAR_0->min = VAR_0->depth;
      VAR_0->min_occ = VAR_0;
    }
}
