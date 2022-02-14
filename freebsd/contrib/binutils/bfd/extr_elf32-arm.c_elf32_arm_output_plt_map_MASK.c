
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ offset; } ;
struct TYPE_7__ {scalar_t__ link; } ;
struct TYPE_8__ {TYPE_1__ i; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_2__ u; } ;
struct elf_link_hash_entry {TYPE_4__ plt; TYPE_3__ root; } ;
struct elf32_arm_link_hash_table {int use_blx; scalar_t__ vxworks_p; scalar_t__ symbian_p; } ;
struct elf32_arm_link_hash_entry {scalar_t__ plt_thumb_refcount; } ;
struct TYPE_11__ {int info; } ;
typedef TYPE_5__ output_arch_syminfo ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct elf32_arm_link_hash_table* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,int ,scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (struct elf_link_hash_entry *VAR_7, void *VAR_8)
{
  output_arch_syminfo *VAR_9 = (output_arch_syminfo *) VAR_8;
  struct elf32_arm_link_hash_table *VAR_10;
  struct elf32_arm_link_hash_entry *VAR_11;
  bfd_vma VAR_12;

  VAR_10 = FUNC_0 (VAR_9->info);

  if (VAR_7->root.type == VAR_5)
    return VAR_4;

  if (VAR_7->root.type == VAR_6)



    VAR_7 = (struct elf_link_hash_entry *) VAR_7->root.u.i.link;

  if (VAR_7->plt.offset == (bfd_vma) -1)
    return VAR_4;

  VAR_11 = (struct elf32_arm_link_hash_entry *) VAR_7;
  VAR_12 = VAR_7->plt.offset;
  if (VAR_10->symbian_p)
    {
      if (!FUNC_1 (VAR_9, VAR_0, VAR_12))
 return VAR_3;
      if (!FUNC_1 (VAR_9, VAR_1, VAR_12 + 4))
 return VAR_3;
    }
  else if (VAR_10->vxworks_p)
    {
      if (!FUNC_1 (VAR_9, VAR_0, VAR_12))
 return VAR_3;
      if (!FUNC_1 (VAR_9, VAR_1, VAR_12 + 8))
 return VAR_3;
      if (!FUNC_1 (VAR_9, VAR_0, VAR_12 + 12))
 return VAR_3;
      if (!FUNC_1 (VAR_9, VAR_1, VAR_12 + 20))
 return VAR_3;
    }
  else
    {
      bfd_boolean VAR_13;

      VAR_13 = VAR_11->plt_thumb_refcount > 0 && !VAR_10->use_blx;
      if (VAR_13)
 {
   if (!FUNC_1 (VAR_9, VAR_2, VAR_12 - 4))
     return VAR_3;
 }
      if (VAR_13 || VAR_12 == 20)
 {
   if (!FUNC_1 (VAR_9, VAR_0, VAR_12))
     return VAR_3;
 }

    }

  return VAR_4;
}
