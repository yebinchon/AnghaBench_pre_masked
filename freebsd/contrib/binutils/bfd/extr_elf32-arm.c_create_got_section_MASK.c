
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf32_arm_link_hash_table {int * srelgot; void* sgotplt; void* sgot; scalar_t__ symbian_p; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int FUNC_0 (struct elf32_arm_link_hash_table*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,struct bfd_link_info*) ;
 int FUNC_2 () ;
 void* FUNC_3 (int *,char*) ;
 int * FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int *,int) ;
 struct elf32_arm_link_hash_table* FUNC_6 (struct bfd_link_info*) ;

__attribute__((used)) static bfd_boolean
FUNC_7 (bfd *VAR_8, struct bfd_link_info *VAR_9)
{
  struct elf32_arm_link_hash_table *VAR_10;

  VAR_10 = FUNC_6 (VAR_9);

  if (VAR_10->symbian_p)
    return VAR_7;

  if (! FUNC_1 (VAR_8, VAR_9))
    return VAR_0;

  VAR_10->sgot = FUNC_3 (VAR_8, ".got");
  VAR_10->sgotplt = FUNC_3 (VAR_8, ".got.plt");
  if (!VAR_10->sgot || !VAR_10->sgotplt)
    FUNC_2 ();

  VAR_10->srelgot = FUNC_4 (VAR_8,
            FUNC_0 (VAR_10, ".got"),
            (VAR_1 | VAR_5
      | VAR_2
      | VAR_3
      | VAR_4
      | VAR_6));
  if (VAR_10->srelgot == ((void*)0)
      || ! FUNC_5 (VAR_8, VAR_10->srelgot, 2))
    return VAR_0;
  return VAR_7;
}
