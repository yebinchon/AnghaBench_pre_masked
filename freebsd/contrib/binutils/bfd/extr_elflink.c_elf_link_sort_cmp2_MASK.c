
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ offset; } ;
struct elf_link_sort_rela {scalar_t__ type; TYPE_2__* rela; TYPE_1__ u; } ;
struct TYPE_4__ {scalar_t__ r_offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0 (const void *VAR_2, const void *VAR_3)
{
  const struct elf_link_sort_rela *VAR_4 = VAR_2;
  const struct elf_link_sort_rela *VAR_5 = VAR_3;
  int VAR_6, VAR_7;

  if (VAR_4->u.offset < VAR_5->u.offset)
    return -1;
  if (VAR_4->u.offset > VAR_5->u.offset)
    return 1;
  VAR_6 = (VAR_4->type == VAR_0) * 2 + (VAR_4->type == VAR_1);
  VAR_7 = (VAR_5->type == VAR_0) * 2 + (VAR_5->type == VAR_1);
  if (VAR_6 < VAR_7)
    return -1;
  if (VAR_6 > VAR_7)
    return 1;
  if (VAR_4->rela->r_offset < VAR_5->rela->r_offset)
    return -1;
  if (VAR_4->rela->r_offset > VAR_5->rela->r_offset)
    return 1;
  return 0;
}
