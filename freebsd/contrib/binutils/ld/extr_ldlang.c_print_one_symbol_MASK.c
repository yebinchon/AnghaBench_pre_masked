
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ string; } ;
struct TYPE_7__ {TYPE_5__* section; scalar_t__ value; } ;
struct TYPE_8__ {TYPE_2__ def; } ;
struct bfd_link_hash_entry {scalar_t__ type; TYPE_4__ root; TYPE_3__ u; } ;
typedef int bfd_boolean ;
struct TYPE_10__ {TYPE_1__* output_section; scalar_t__ output_offset; } ;
typedef TYPE_5__ asection ;
struct TYPE_6__ {scalar_t__ vma; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 () ;

__attribute__((used)) static bfd_boolean
FUNC_2 (struct bfd_link_hash_entry *VAR_4, void *VAR_5)
{
  asection *VAR_6 = VAR_5;

  if ((VAR_4->type == VAR_2
       || VAR_4->type == VAR_3)
      && VAR_6 == VAR_4->u.def.section)
    {
      int VAR_7;

      for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
 FUNC_1 ();
      FUNC_0 ("0x%V   ",
      (VAR_4->u.def.value
       + VAR_4->u.def.section->output_offset
       + VAR_4->u.def.section->output_section->vma));

      FUNC_0 ("             %T\n", VAR_4->root.string);
    }

  return VAR_1;
}
