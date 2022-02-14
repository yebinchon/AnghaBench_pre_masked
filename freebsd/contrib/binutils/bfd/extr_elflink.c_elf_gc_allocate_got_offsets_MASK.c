
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ refcount; int offset; } ;
struct TYPE_5__ {scalar_t__ link; } ;
struct TYPE_6__ {TYPE_1__ i; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__ u; } ;
struct elf_link_hash_entry {TYPE_4__ got; TYPE_3__ root; } ;
struct alloc_got_off_arg {scalar_t__ got_elt_size; int gotoff; } ;
typedef int bfd_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bfd_boolean
FUNC_0 (struct elf_link_hash_entry *VAR_2, void *VAR_3)
{
  struct alloc_got_off_arg *VAR_4 = VAR_3;

  if (VAR_2->root.type == VAR_1)
    VAR_2 = (struct elf_link_hash_entry *) VAR_2->root.u.i.link;

  if (VAR_2->got.refcount > 0)
    {
      VAR_2->got.offset = VAR_4->gotoff;
      VAR_4->gotoff += VAR_4->got_elt_size;
    }
  else
    VAR_2->got.offset = (bfd_vma) -1;

  return VAR_0;
}
