
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memrange {scalar_t__ type; scalar_t__ start; } ;
typedef scalar_t__ bfd_vma ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const struct memrange *VAR_2 = VAR_0, *VAR_3 = VAR_1;

  if (VAR_2->type < VAR_3->type)
    return -1;
  if (VAR_2->type > VAR_3->type)
    return 1;
  if (VAR_2->type == 0)
    {
      if ((bfd_vma) VAR_2->start < (bfd_vma) VAR_3->start)
 return -1;
      if ((bfd_vma) VAR_2->start > (bfd_vma) VAR_3->start)
 return 1;
    }
  else
    {
      if (VAR_2->start < VAR_3->start)
 return -1;
      if (VAR_2->start > VAR_3->start)
 return 1;
    }
  return 0;
}
