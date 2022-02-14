
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct elf32_arm_link_hash_table {scalar_t__ arm_glue_size; scalar_t__ thumb_glue_size; scalar_t__ vfp11_erratum_glue_size; int * bfd_of_glue_owner; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
struct TYPE_3__ {scalar_t__ size; int * contents; } ;
typedef TYPE_1__ asection ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int *,scalar_t__) ;
 TYPE_1__* FUNC_2 (int *,int ) ;
 struct elf32_arm_link_hash_table* FUNC_3 (struct bfd_link_info*) ;

bfd_boolean
FUNC_4 (struct bfd_link_info * VAR_4)
{
  asection * VAR_5;
  bfd_byte * VAR_6;
  struct elf32_arm_link_hash_table * VAR_7;

  VAR_7 = FUNC_3 (VAR_4);

  FUNC_0 (VAR_7 != ((void*)0));

  if (VAR_7->arm_glue_size != 0)
    {
      FUNC_0 (VAR_7->bfd_of_glue_owner != ((void*)0));

      VAR_5 = FUNC_2 (VAR_7->bfd_of_glue_owner,
       VAR_0);

      FUNC_0 (VAR_5 != ((void*)0));

      VAR_6 = FUNC_1 (VAR_7->bfd_of_glue_owner, VAR_7->arm_glue_size);

      FUNC_0 (VAR_5->size == VAR_7->arm_glue_size);
      VAR_5->contents = VAR_6;
    }

  if (VAR_7->thumb_glue_size != 0)
    {
      FUNC_0 (VAR_7->bfd_of_glue_owner != ((void*)0));

      VAR_5 = FUNC_2
 (VAR_7->bfd_of_glue_owner, VAR_1);

      FUNC_0 (VAR_5 != ((void*)0));

      VAR_6 = FUNC_1 (VAR_7->bfd_of_glue_owner, VAR_7->thumb_glue_size);

      FUNC_0 (VAR_5->size == VAR_7->thumb_glue_size);
      VAR_5->contents = VAR_6;
    }

  if (VAR_7->vfp11_erratum_glue_size != 0)
    {
      FUNC_0 (VAR_7->bfd_of_glue_owner != ((void*)0));

      VAR_5 = FUNC_2
        (VAR_7->bfd_of_glue_owner, VAR_3);

      FUNC_0 (VAR_5 != ((void*)0));

      VAR_6 = FUNC_1 (VAR_7->bfd_of_glue_owner,
         VAR_7->vfp11_erratum_glue_size);

      FUNC_0 (VAR_5->size == VAR_7->vfp11_erratum_glue_size);
      VAR_5->contents = VAR_6;
    }

  return VAR_2;
}
