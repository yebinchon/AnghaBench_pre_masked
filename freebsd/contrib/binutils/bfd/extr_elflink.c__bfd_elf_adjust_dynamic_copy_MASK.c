
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {unsigned int value; TYPE_4__* section; } ;
struct TYPE_9__ {TYPE_1__ def; } ;
struct TYPE_10__ {TYPE_2__ u; } ;
struct elf_link_hash_entry {scalar_t__ size; TYPE_3__ root; } ;
typedef unsigned int bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_11__ {unsigned int size; int owner; } ;
typedef TYPE_4__ asection ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ,TYPE_4__*) ;
 int FUNC_2 (int ,TYPE_4__*,unsigned int) ;

bfd_boolean
FUNC_3 (struct elf_link_hash_entry *VAR_2,
         asection *VAR_3)
{
  unsigned int VAR_4;
  bfd_vma VAR_5;
  asection *VAR_6 = VAR_2->root.u.def.section;






  VAR_4 = FUNC_1 (VAR_6->owner, VAR_6);
  VAR_5 = ((bfd_vma) 1 << VAR_4) - 1;
  while ((VAR_2->root.u.def.value & VAR_5) != 0)
    {
       VAR_5 >>= 1;
       --VAR_4;
    }

  if (VAR_4 > FUNC_1 (VAR_3->owner,
      VAR_3))
    {

      if (! FUNC_2 (VAR_3->owner, VAR_3,
           VAR_4))
 return VAR_0;
    }


  VAR_3->size = FUNC_0 (VAR_3->size, VAR_5 + 1);


  VAR_2->root.u.def.section = VAR_3;
  VAR_2->root.u.def.value = VAR_3->size;


  VAR_3->size += VAR_2->size;

  return VAR_1;
}
