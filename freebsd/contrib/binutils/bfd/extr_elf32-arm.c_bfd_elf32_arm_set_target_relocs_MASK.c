
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct elf32_arm_link_hash_table {int target1_is_rel; int fix_v4bx; int use_blx; int pic_veneer; int vfp11_fix; int target2_reloc; } ;
struct bfd_link_info {int dummy; } ;
struct bfd {int dummy; } ;
typedef int bfd_arm_vfp11_fix ;
struct TYPE_2__ {int no_enum_size_warning; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 struct elf32_arm_link_hash_table* FUNC_2 (struct bfd_link_info*) ;
 TYPE_1__* FUNC_3 (struct bfd*) ;
 scalar_t__ FUNC_4 (char*,char*) ;

void
FUNC_5 (struct bfd *VAR_3,
     struct bfd_link_info *VAR_4,
     int VAR_5,
     char * VAR_6,
                                 int VAR_7,
     int VAR_8,
                                 bfd_arm_vfp11_fix VAR_9,
     int VAR_10, int VAR_11)
{
  struct elf32_arm_link_hash_table *VAR_12;

  VAR_12 = FUNC_2 (VAR_4);

  VAR_12->target1_is_rel = VAR_5;
  if (FUNC_4 (VAR_6, "rel") == 0)
    VAR_12->target2_reloc = VAR_2;
  else if (FUNC_4 (VAR_6, "abs") == 0)
    VAR_12->target2_reloc = VAR_0;
  else if (FUNC_4 (VAR_6, "got-rel") == 0)
    VAR_12->target2_reloc = VAR_1;
  else
    {
      FUNC_1 (FUNC_0("Invalid TARGET2 relocation type '%s'."),
     VAR_6);
    }
  VAR_12->fix_v4bx = VAR_7;
  VAR_12->use_blx |= VAR_8;
  VAR_12->vfp11_fix = VAR_9;
  VAR_12->pic_veneer = VAR_11;

  FUNC_3 (VAR_3)->no_enum_size_warning = VAR_10;
}
