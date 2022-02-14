
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gdbarch_list {TYPE_1__* gdbarch; struct gdbarch_list* next; } ;
struct gdbarch_info {scalar_t__ bfd_arch_info; scalar_t__ byte_order; scalar_t__ osabi; } ;
struct TYPE_2__ {scalar_t__ bfd_arch_info; scalar_t__ byte_order; scalar_t__ osabi; } ;



struct gdbarch_list *
FUNC_0 (struct gdbarch_list *VAR_0,
                             const struct gdbarch_info *VAR_1)
{
  for (; VAR_0 != ((void*)0); VAR_0 = VAR_0->next)
    {
      if (VAR_1->bfd_arch_info != VAR_0->gdbarch->bfd_arch_info)
 continue;
      if (VAR_1->byte_order != VAR_0->gdbarch->byte_order)
 continue;
      if (VAR_1->osabi != VAR_0->gdbarch->osabi)
 continue;
      return VAR_0;
    }
  return ((void*)0);
}
