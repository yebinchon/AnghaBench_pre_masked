
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct elf_link_hash_entry {int dummy; } ;
struct bfd_link_info {int dummy; } ;
typedef int flagword ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asection ;
struct TYPE_4__ {int * got; int * gotobj; } ;
struct TYPE_3__ {struct elf_link_hash_entry* hgot; struct elf_link_hash_entry* hplt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct elf_link_hash_entry* FUNC_0 (int *,struct bfd_link_info*,int *,char*) ;
 TYPE_2__* FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,struct bfd_link_info*) ;
 scalar_t__ VAR_9 ;
 TYPE_1__* FUNC_5 (struct bfd_link_info*) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (bfd *VAR_10, struct bfd_link_info *VAR_11)
{
  asection *VAR_12;
  flagword VAR_13;
  struct elf_link_hash_entry *VAR_14;



  VAR_13 = (VAR_1 | VAR_6 | VAR_2 | VAR_3 | VAR_4
    | VAR_5
    | (VAR_9 ? VAR_7 : 0));
  VAR_12 = FUNC_2 (VAR_10, ".plt", VAR_13);
  if (VAR_12 == ((void*)0) || ! FUNC_3 (VAR_10, VAR_12, 4))
    return VAR_0;



  VAR_14 = FUNC_0 (VAR_10, VAR_11, VAR_12,
       "_PROCEDURE_LINKAGE_TABLE_");
  FUNC_5 (VAR_11)->hplt = VAR_14;
  if (VAR_14 == ((void*)0))
    return VAR_0;

  VAR_13 = (VAR_1 | VAR_6 | VAR_3 | VAR_4
    | VAR_5 | VAR_7);
  VAR_12 = FUNC_2 (VAR_10, ".rela.plt", VAR_13);
  if (VAR_12 == ((void*)0) || ! FUNC_3 (VAR_10, VAR_12, 3))
    return VAR_0;

  if (VAR_9)
    {
      VAR_13 = VAR_1 | VAR_5;
      VAR_12 = FUNC_2 (VAR_10, ".got.plt", VAR_13);
      if (VAR_12 == ((void*)0) || ! FUNC_3 (VAR_10, VAR_12, 3))
 return VAR_0;
    }




  if (FUNC_1(VAR_10)->gotobj == ((void*)0))
    {
      if (!FUNC_4 (VAR_10, VAR_11))
 return VAR_0;
    }

  VAR_13 = (VAR_1 | VAR_6 | VAR_3 | VAR_4
    | VAR_5 | VAR_7);
  VAR_12 = FUNC_2 (VAR_10, ".rela.got", VAR_13);
  if (VAR_12 == ((void*)0)
      || !FUNC_3 (VAR_10, VAR_12, 3))
    return VAR_0;





  VAR_14 = FUNC_0 (VAR_10, VAR_11, FUNC_1(VAR_10)->got,
       "_GLOBAL_OFFSET_TABLE_");
  FUNC_5 (VAR_11)->hgot = VAR_14;
  if (VAR_14 == ((void*)0))
    return VAR_0;

  return VAR_8;
}
