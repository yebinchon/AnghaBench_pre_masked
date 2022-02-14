
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; scalar_t__ vma; } ;
typedef TYPE_1__ asection ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0 (const void * VAR_1, const void * VAR_2)
{
  const asection *VAR_3 = *(const asection **) VAR_1;
  const asection *VAR_4 = *(const asection **) VAR_2;

  if ((VAR_3->flags & VAR_0) != 0)
    {
      if ((VAR_4->flags & VAR_0) == 0)
 return -1;
    }
  else
    {
      if ((VAR_4->flags & VAR_0) != 0)
 return 1;
    }
  if (VAR_3->vma < VAR_4->vma)
    return -1;
  else if (VAR_3->vma > VAR_4->vma)
    return 1;
  else
    return 0;
}
