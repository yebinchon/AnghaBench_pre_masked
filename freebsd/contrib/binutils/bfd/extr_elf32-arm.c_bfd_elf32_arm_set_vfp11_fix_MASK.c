
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct elf32_arm_link_hash_table {int vfp11_fix; } ;
struct bfd_link_info {int dummy; } ;
struct TYPE_3__ {scalar_t__ i; } ;
typedef TYPE_1__ obj_attribute ;
typedef int bfd ;




 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;
 struct elf32_arm_link_hash_table* FUNC_2 (struct bfd_link_info*) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

void
FUNC_5 (bfd *VAR_2, struct bfd_link_info *VAR_3)
{
  struct elf32_arm_link_hash_table *VAR_4 = FUNC_2 (VAR_3);
  obj_attribute *VAR_5 = FUNC_3 (VAR_2);


  if (VAR_5[VAR_1].i >= VAR_0)
    {
      switch (VAR_4->vfp11_fix)
        {
        case 129:
        case 128:
          VAR_4->vfp11_fix = 128;
          break;

        default:

          FUNC_1) (FUNC_0("%B: warning: selected VFP11 erratum "
            "workaround is not necessary for target architecture"), VAR_2);
        }
    }
  else if (VAR_4->vfp11_fix == 129)



    VAR_4->vfp11_fix = 128;
}
