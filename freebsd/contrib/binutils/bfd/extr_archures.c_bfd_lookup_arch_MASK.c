
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum bfd_architecture { ____Placeholder_bfd_architecture } bfd_architecture ;
struct TYPE_4__ {int arch; unsigned long mach; scalar_t__ the_default; struct TYPE_4__* next; } ;
typedef TYPE_1__ bfd_arch_info_type ;


 TYPE_1__** VAR_0 ;

const bfd_arch_info_type *
FUNC_0 (enum bfd_architecture VAR_1, unsigned long VAR_2)
{
  const bfd_arch_info_type * const *VAR_3, *VAR_4;

  for (VAR_3 = VAR_0; *VAR_3 != ((void*)0); VAR_3++)
    {
      for (VAR_4 = *VAR_3; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
 {
   if (VAR_4->arch == VAR_1
       && (VAR_4->mach == VAR_2
    || (VAR_2 == 0 && VAR_4->the_default)))
     return VAR_4;
 }
    }

  return ((void*)0);
}
