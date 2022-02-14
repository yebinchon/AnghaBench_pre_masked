
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sym_mask; } ;
struct elf_link_sort_rela {scalar_t__ type; TYPE_2__* rela; TYPE_1__ u; } ;
struct TYPE_4__ {int r_info; scalar_t__ r_offset; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0 (const void *VAR_1, const void *VAR_2)
{
  const struct elf_link_sort_rela *VAR_3 = VAR_1;
  const struct elf_link_sort_rela *VAR_4 = VAR_2;
  int VAR_5, VAR_6;

  VAR_5 = VAR_3->type == VAR_0;
  VAR_6 = VAR_4->type == VAR_0;

  if (VAR_5 < VAR_6)
    return 1;
  if (VAR_5 > VAR_6)
    return -1;
  if ((VAR_3->rela->r_info & VAR_3->u.sym_mask) < (VAR_4->rela->r_info & VAR_4->u.sym_mask))
    return -1;
  if ((VAR_3->rela->r_info & VAR_3->u.sym_mask) > (VAR_4->rela->r_info & VAR_4->u.sym_mask))
    return 1;
  if (VAR_3->rela->r_offset < VAR_4->rela->r_offset)
    return -1;
  if (VAR_3->rela->r_offset > VAR_4->rela->r_offset)
    return 1;
  return 0;
}
