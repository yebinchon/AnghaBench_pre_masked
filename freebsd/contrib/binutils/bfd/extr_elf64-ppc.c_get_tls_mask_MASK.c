
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int value; } ;
struct TYPE_14__ {TYPE_1__ def; } ;
struct TYPE_17__ {scalar_t__ type; TYPE_2__ u; } ;
struct elf_link_hash_entry {int def_dynamic; TYPE_5__ root; } ;
typedef int bfd_vma ;
typedef int bfd ;
typedef int asection ;
struct TYPE_15__ {unsigned long* symndx; int* add; } ;
struct TYPE_16__ {TYPE_3__ toc; } ;
struct TYPE_20__ {scalar_t__ sec_type; TYPE_4__ u; } ;
struct TYPE_19__ {scalar_t__ r_addend; int r_info; } ;
struct TYPE_18__ {int st_value; } ;
typedef TYPE_6__ Elf_Internal_Sym ;
typedef TYPE_7__ Elf_Internal_Rela ;


 int FUNC_0 (int) ;
 unsigned long FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct elf_link_hash_entry**,TYPE_6__**,int **,char**,TYPE_6__**,unsigned long,int *) ;
 TYPE_8__* FUNC_3 (int *) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_4 (char **VAR_3,
       unsigned long *VAR_4,
       bfd_vma *VAR_5,
       Elf_Internal_Sym **VAR_6,
       const Elf_Internal_Rela *VAR_7,
       bfd *VAR_8)
{
  unsigned long VAR_9;
  int VAR_10;
  struct elf_link_hash_entry *VAR_11;
  Elf_Internal_Sym *VAR_12;
  asection *VAR_13;
  bfd_vma VAR_14;

  VAR_9 = FUNC_1 (VAR_7->r_info);
  if (!FUNC_2 (&VAR_11, &VAR_12, &VAR_13, VAR_3, VAR_6, VAR_9, VAR_8))
    return 0;

  if ((*VAR_3 != ((void*)0) && **VAR_3 != 0)
      || VAR_13 == ((void*)0)
      || FUNC_3 (VAR_13)->sec_type != VAR_2)
    return 1;


  if (VAR_11 != ((void*)0))
    {
      FUNC_0 (VAR_11->root.type == VAR_0);
      VAR_14 = VAR_11->root.u.def.value;
    }
  else
    VAR_14 = VAR_12->st_value;
  VAR_14 += VAR_7->r_addend;
  FUNC_0 (VAR_14 % 8 == 0);
  VAR_9 = FUNC_3 (VAR_13)->u.toc.symndx[VAR_14 / 8];
  VAR_10 = FUNC_3 (VAR_13)->u.toc.symndx[VAR_14 / 8 + 1];
  if (VAR_4 != ((void*)0))
    *VAR_4 = VAR_9;
  if (VAR_5 != ((void*)0))
    *VAR_5 = FUNC_3 (VAR_13)->u.toc.add[VAR_14 / 8];
  if (!FUNC_2 (&VAR_11, &VAR_12, &VAR_13, VAR_3, VAR_6, VAR_9, VAR_8))
    return 0;
  if ((VAR_11 == ((void*)0)
       || ((VAR_11->root.type == VAR_0
     || VAR_11->root.type == VAR_1)
    && !VAR_11->def_dynamic))
      && (VAR_10 == -1 || VAR_10 == -2))
    return 1 - VAR_10;
  return 1;
}
