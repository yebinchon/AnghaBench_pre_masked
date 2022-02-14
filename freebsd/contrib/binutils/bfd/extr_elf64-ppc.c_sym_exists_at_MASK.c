
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ bfd_vma ;
struct TYPE_6__ {scalar_t__ value; TYPE_1__* section; } ;
typedef TYPE_2__ asymbol ;
struct TYPE_5__ {scalar_t__ vma; int id; } ;



__attribute__((used)) static asymbol *
FUNC_0 (asymbol **VAR_0, long VAR_1, long VAR_2, int VAR_3, bfd_vma VAR_4)
{
  long VAR_5;

  if (VAR_3 == -1)
    {
      while (VAR_1 < VAR_2)
 {
   VAR_5 = (VAR_1 + VAR_2) >> 1;
   if (VAR_0[VAR_5]->value + VAR_0[VAR_5]->section->vma < VAR_4)
     VAR_1 = VAR_5 + 1;
   else if (VAR_0[VAR_5]->value + VAR_0[VAR_5]->section->vma > VAR_4)
     VAR_2 = VAR_5;
   else
     return VAR_0[VAR_5];
 }
    }
  else
    {
      while (VAR_1 < VAR_2)
 {
   VAR_5 = (VAR_1 + VAR_2) >> 1;
   if (VAR_0[VAR_5]->section->id < VAR_3)
     VAR_1 = VAR_5 + 1;
   else if (VAR_0[VAR_5]->section->id > VAR_3)
     VAR_2 = VAR_5;
   else if (VAR_0[VAR_5]->value < VAR_4)
     VAR_1 = VAR_5 + 1;
   else if (VAR_0[VAR_5]->value > VAR_4)
     VAR_2 = VAR_5;
   else
     return VAR_0[VAR_5];
 }
    }
  return ((void*)0);
}
