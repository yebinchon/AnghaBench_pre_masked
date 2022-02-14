
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bfd_link_hash_table {int dummy; } ;
struct TYPE_6__ {struct bfd_link_hash_table root; } ;
struct TYPE_5__ {scalar_t__ refcount; } ;
struct TYPE_4__ {int * abfd; } ;
struct elf32_arm_link_hash_table {int plt_header_size; int plt_entry_size; int use_rel; TYPE_3__ root; TYPE_2__ tls_ldm_got; int * obfd; TYPE_1__ sym_sec; scalar_t__ symbian_p; scalar_t__ vxworks_p; scalar_t__ use_blx; scalar_t__ fix_v4bx; int target2_reloc; scalar_t__ target1_is_rel; scalar_t__ byteswap_code; int * bfd_of_glue_owner; scalar_t__ num_vfp11_fixes; scalar_t__ vfp11_erratum_glue_size; int vfp11_fix; scalar_t__ arm_glue_size; scalar_t__ thumb_glue_size; int * srelplt2; int * srelbss; int * sdynbss; int * srelplt; int * splt; int * srelgot; int * sgotplt; int * sgot; } ;
struct elf32_arm_link_hash_entry {int dummy; } ;
typedef int bfd_size_type ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int *,int ,int) ;
 struct elf32_arm_link_hash_table* FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (struct elf32_arm_link_hash_table*) ;

__attribute__((used)) static struct bfd_link_hash_table *
FUNC_3 (bfd *VAR_3)
{
  struct elf32_arm_link_hash_table *VAR_4;
  bfd_size_type VAR_5 = sizeof (struct elf32_arm_link_hash_table);

  VAR_4 = FUNC_1 (VAR_5);
  if (VAR_4 == ((void*)0))
    return ((void*)0);

  if (!FUNC_0 (& VAR_4->root, VAR_3,
          VAR_2,
          sizeof (struct elf32_arm_link_hash_entry)))
    {
      FUNC_2 (VAR_4);
      return ((void*)0);
    }

  VAR_4->sgot = ((void*)0);
  VAR_4->sgotplt = ((void*)0);
  VAR_4->srelgot = ((void*)0);
  VAR_4->splt = ((void*)0);
  VAR_4->srelplt = ((void*)0);
  VAR_4->sdynbss = ((void*)0);
  VAR_4->srelbss = ((void*)0);
  VAR_4->srelplt2 = ((void*)0);
  VAR_4->thumb_glue_size = 0;
  VAR_4->arm_glue_size = 0;
  VAR_4->vfp11_fix = VAR_0;
  VAR_4->vfp11_erratum_glue_size = 0;
  VAR_4->num_vfp11_fixes = 0;
  VAR_4->bfd_of_glue_owner = ((void*)0);
  VAR_4->byteswap_code = 0;
  VAR_4->target1_is_rel = 0;
  VAR_4->target2_reloc = VAR_1;




  VAR_4->plt_header_size = 20;
  VAR_4->plt_entry_size = 12;

  VAR_4->fix_v4bx = 0;
  VAR_4->use_blx = 0;
  VAR_4->vxworks_p = 0;
  VAR_4->symbian_p = 0;
  VAR_4->use_rel = 1;
  VAR_4->sym_sec.abfd = ((void*)0);
  VAR_4->obfd = VAR_3;
  VAR_4->tls_ldm_got.refcount = 0;

  return &VAR_4->root.root;
}
