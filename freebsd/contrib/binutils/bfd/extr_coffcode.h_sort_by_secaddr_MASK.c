
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ vma; } ;
typedef TYPE_1__ asection ;



__attribute__((used)) static int
FUNC_0 (const void * VAR_0, const void * VAR_1)
{
  const asection *VAR_2 = *(const asection **) VAR_0;
  const asection *VAR_3 = *(const asection **) VAR_1;

  if (VAR_2->vma < VAR_3->vma)
    return -1;
  else if (VAR_2->vma > VAR_3->vma)
    return 1;

  return 0;
}
