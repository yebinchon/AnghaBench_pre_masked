
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int offset; } ;
struct TYPE_6__ {scalar_t__ link; } ;
struct TYPE_7__ {TYPE_1__ i; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_2__ u; } ;
struct TYPE_10__ {int dynindx; TYPE_4__ got; TYPE_3__ root; } ;
struct score_elf_link_hash_entry {TYPE_5__ root; } ;
struct score_elf_hash_sort_data {scalar_t__ max_unref_got_dynindx; scalar_t__ min_got_dynindx; struct elf_link_hash_entry* low; int max_non_got_dynindx; } ;
struct elf_link_hash_entry {int dummy; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bfd_boolean
FUNC_0 (struct score_elf_link_hash_entry *VAR_2, void *VAR_3)
{
  struct score_elf_hash_sort_data *VAR_4 = VAR_3;

  if (VAR_2->root.root.type == VAR_1)
    VAR_2 = (struct score_elf_link_hash_entry *) VAR_2->root.root.u.i.link;


  if (VAR_2->root.dynindx == -1)
    return VAR_0;





  if (VAR_2->root.got.offset == 2)
    {
      if (VAR_4->max_unref_got_dynindx == VAR_4->min_got_dynindx)
 VAR_4->low = (struct elf_link_hash_entry *) VAR_2;
      VAR_2->root.dynindx = VAR_4->max_unref_got_dynindx++;
    }
  else if (VAR_2->root.got.offset != 1)
    VAR_2->root.dynindx = VAR_4->max_non_got_dynindx++;
  else
    {
      VAR_2->root.dynindx = --VAR_4->min_got_dynindx;
      VAR_4->low = (struct elf_link_hash_entry *) VAR_2;
    }

  return VAR_0;
}
