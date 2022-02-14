
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ refcount; } ;
struct TYPE_8__ {scalar_t__ refcount; } ;
struct elf_link_hash_table {int dynstr; TYPE_5__ init_plt_refcount; TYPE_3__ init_got_refcount; } ;
struct TYPE_9__ {scalar_t__ refcount; } ;
struct TYPE_7__ {scalar_t__ refcount; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct elf_link_hash_entry {int dynindx; scalar_t__ dynstr_index; TYPE_4__ plt; TYPE_2__ got; TYPE_1__ root; int pointer_equality_needed; int needs_plt; int non_got_ref; int ref_regular_nonweak; int ref_regular; int ref_dynamic; } ;
struct bfd_link_info {int dummy; } ;


 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 struct elf_link_hash_table* FUNC_1 (struct bfd_link_info*) ;

void
FUNC_2 (struct bfd_link_info *VAR_1,
      struct elf_link_hash_entry *VAR_2,
      struct elf_link_hash_entry *VAR_3)
{
  struct elf_link_hash_table *VAR_4;




  VAR_2->ref_dynamic |= VAR_3->ref_dynamic;
  VAR_2->ref_regular |= VAR_3->ref_regular;
  VAR_2->ref_regular_nonweak |= VAR_3->ref_regular_nonweak;
  VAR_2->non_got_ref |= VAR_3->non_got_ref;
  VAR_2->needs_plt |= VAR_3->needs_plt;
  VAR_2->pointer_equality_needed |= VAR_3->pointer_equality_needed;

  if (VAR_3->root.type != VAR_0)
    return;



  VAR_4 = FUNC_1 (VAR_1);
  if (VAR_3->got.refcount > VAR_4->init_got_refcount.refcount)
    {
      if (VAR_2->got.refcount < 0)
 VAR_2->got.refcount = 0;
      VAR_2->got.refcount += VAR_3->got.refcount;
      VAR_3->got.refcount = VAR_4->init_got_refcount.refcount;
    }

  if (VAR_3->plt.refcount > VAR_4->init_plt_refcount.refcount)
    {
      if (VAR_2->plt.refcount < 0)
 VAR_2->plt.refcount = 0;
      VAR_2->plt.refcount += VAR_3->plt.refcount;
      VAR_3->plt.refcount = VAR_4->init_plt_refcount.refcount;
    }

  if (VAR_3->dynindx != -1)
    {
      if (VAR_2->dynindx != -1)
 FUNC_0 (VAR_4->dynstr, VAR_2->dynstr_index);
      VAR_2->dynindx = VAR_3->dynindx;
      VAR_2->dynstr_index = VAR_3->dynstr_index;
      VAR_3->dynindx = -1;
      VAR_3->dynstr_index = 0;
    }
}
