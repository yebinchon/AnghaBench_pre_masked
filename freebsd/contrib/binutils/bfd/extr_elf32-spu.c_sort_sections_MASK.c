
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ bfd_signed_vma ;
struct TYPE_2__ {scalar_t__ vma; int index; } ;
typedef TYPE_1__ asection ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const asection *const *VAR_2 = VAR_0;
  const asection *const *VAR_3 = VAR_1;
  bfd_signed_vma VAR_4 = (*VAR_2)->vma - (*VAR_3)->vma;

  if (VAR_4 != 0)
    return VAR_4 < 0 ? -1 : 1;

  return (*VAR_2)->index - (*VAR_3)->index;
}
