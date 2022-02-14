
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int value; TYPE_2__* section; } ;
struct TYPE_9__ {TYPE_3__ def; } ;
struct bfd_link_hash_entry {scalar_t__ type; TYPE_4__ u; } ;
typedef int bfd_vma ;
struct TYPE_10__ {int hash; } ;
struct TYPE_7__ {int output_offset; TYPE_1__* output_section; } ;
struct TYPE_6__ {int vma; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct bfd_link_hash_entry* FUNC_0 (int ,char*,int ,int ,int ) ;
 TYPE_5__* VAR_3 ;

__attribute__((used)) static bfd_vma
FUNC_1
    (char * VAR_4,
     bfd_vma VAR_5,
     bfd_vma * VAR_6,
     int * VAR_7)
{
  struct bfd_link_hash_entry *VAR_8;

  if (*VAR_6 || *VAR_7)
    return *VAR_6;

  VAR_8 = FUNC_0 (VAR_3->hash, VAR_4, VAR_0, VAR_0, VAR_1);
  if (VAR_8 == 0 || VAR_8->type != VAR_2)
    {
      *VAR_7 = VAR_5 + 1;
      return 0;
    }
  *VAR_6 = (VAR_8->u.def.value
   + VAR_8->u.def.section->output_section->vma
   + VAR_8->u.def.section->output_offset);
  return *VAR_6;
}
