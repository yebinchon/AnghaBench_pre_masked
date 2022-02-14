
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int string; } ;
struct spu_stub_hash_entry {scalar_t__ target_off; TYPE_2__ root; TYPE_1__* target_section; } ;
typedef scalar_t__ bfd_signed_vma ;
struct TYPE_8__ {scalar_t__ vma; } ;
struct TYPE_7__ {int ovl_index; } ;
struct TYPE_5__ {scalar_t__ output_offset; TYPE_4__* output_section; } ;


 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3 (const void *VAR_0, const void *VAR_1)
{
  const struct spu_stub_hash_entry *const *VAR_2 = VAR_0;
  const struct spu_stub_hash_entry *const *VAR_3 = VAR_1;
  int VAR_4;
  bfd_signed_vma VAR_5;

  VAR_4 = FUNC_1 ((*VAR_2)->target_section->output_section)->ovl_index;
  VAR_4 -= FUNC_1 ((*VAR_3)->target_section->output_section)->ovl_index;
  if (VAR_4 != 0)
    return VAR_4;

  VAR_5 = ((*VAR_2)->target_section->output_section->vma
       + (*VAR_2)->target_section->output_offset
       + (*VAR_2)->target_off
       - (*VAR_3)->target_section->output_section->vma
       - (*VAR_3)->target_section->output_offset
       - (*VAR_3)->target_off);
  if (VAR_5 != 0)
    return VAR_5 < 0 ? -1 : 1;


  VAR_4 = FUNC_2 ((*VAR_3)->root.string, (*VAR_2)->root.string);
  FUNC_0 (VAR_4 != 0);
  return VAR_4;
}
