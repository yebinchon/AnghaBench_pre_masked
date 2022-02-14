
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stab_section_info {size_t* cumulative_skips; scalar_t__* stridxs; } ;
typedef size_t bfd_vma ;
typedef scalar_t__ bfd_size_type ;
struct TYPE_3__ {size_t rawsize; size_t size; } ;
typedef TYPE_1__ asection ;


 size_t VAR_0 ;

bfd_vma
FUNC_0 (asection *VAR_1,
     void * VAR_2,
     bfd_vma VAR_3)
{
  struct stab_section_info *VAR_4;

  VAR_4 = (struct stab_section_info *) VAR_2;

  if (VAR_4 == ((void*)0))
    return VAR_3;

  if (VAR_3 >= VAR_1->rawsize)
    return VAR_3 - VAR_1->rawsize + VAR_1->size;

  if (VAR_4->cumulative_skips)
    {
      bfd_vma VAR_5;

      VAR_5 = VAR_3 / VAR_0;

      if (VAR_4->stridxs [VAR_5] == (bfd_size_type) -1)
 return (bfd_vma) -1;

      return VAR_3 - VAR_4->cumulative_skips [VAR_5];
    }

  return VAR_3;
}
