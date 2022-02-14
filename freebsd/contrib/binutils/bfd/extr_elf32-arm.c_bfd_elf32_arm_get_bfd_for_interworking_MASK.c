
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct elf32_arm_link_hash_table {TYPE_1__* bfd_of_glue_owner; } ;
struct bfd_link_info {scalar_t__ relocatable; } ;
typedef int bfd_boolean ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ bfd ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct elf32_arm_link_hash_table* FUNC_1 (struct bfd_link_info*) ;

bfd_boolean
FUNC_2 (bfd *VAR_2, struct bfd_link_info *VAR_3)
{
  struct elf32_arm_link_hash_table *VAR_4;



  if (VAR_3->relocatable)
    return VAR_1;


  FUNC_0 (!(VAR_2->flags & VAR_0));

  VAR_4 = FUNC_1 (VAR_3);

  FUNC_0 (VAR_4 != ((void*)0));

  if (VAR_4->bfd_of_glue_owner != ((void*)0))
    return VAR_1;


  VAR_4->bfd_of_glue_owner = VAR_2;

  return VAR_1;
}
