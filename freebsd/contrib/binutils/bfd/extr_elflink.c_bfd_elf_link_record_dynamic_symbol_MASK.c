
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct elf_strtab_hash {int dummy; } ;
struct TYPE_4__ {char* string; } ;
struct TYPE_5__ {TYPE_1__ root; int type; } ;
struct elf_link_hash_entry {int dynindx; int forced_local; scalar_t__ dynstr_index; TYPE_2__ root; int other; } ;
struct bfd_link_info {int dummy; } ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_6__ {int dynsymcount; struct elf_strtab_hash* dynstr; int is_relocatable_executable; } ;


 int FUNC_0 (int ) ;
 char VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 scalar_t__ FUNC_1 (struct elf_strtab_hash*,char const*,int ) ;
 struct elf_strtab_hash* FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_3 (struct bfd_link_info*) ;
 char* FUNC_4 (char const*,char) ;

bfd_boolean
FUNC_5 (struct bfd_link_info *VAR_5,
        struct elf_link_hash_entry *VAR_6)
{
  if (VAR_6->dynindx == -1)
    {
      struct elf_strtab_hash *VAR_7;
      char *VAR_8;
      const char *VAR_9;
      bfd_size_type VAR_10;





      switch (FUNC_0 (VAR_6->other))
 {
 case 128:
 case 129:
   if (VAR_6->root.type != VAR_3
       && VAR_6->root.type != VAR_4)
     {
       VAR_6->forced_local = 1;
       if (!FUNC_3 (VAR_5)->is_relocatable_executable)
  return VAR_2;
     }

 default:
   break;
 }

      VAR_6->dynindx = FUNC_3 (VAR_5)->dynsymcount;
      ++FUNC_3 (VAR_5)->dynsymcount;

      VAR_7 = FUNC_3 (VAR_5)->dynstr;
      if (VAR_7 == ((void*)0))
 {

   FUNC_3 (VAR_5)->dynstr = VAR_7 = FUNC_2 ();
   if (VAR_7 == ((void*)0))
     return VAR_1;
 }



      VAR_9 = VAR_6->root.root.string;
      VAR_8 = FUNC_4 (VAR_9, VAR_0);
      if (VAR_8 != ((void*)0))





 *VAR_8 = 0;

      VAR_10 = FUNC_1 (VAR_7, VAR_9, VAR_8 != ((void*)0));

      if (VAR_8 != ((void*)0))
 *VAR_8 = VAR_0;

      if (VAR_10 == (bfd_size_type) -1)
 return VAR_1;
      VAR_6->dynstr_index = VAR_10;
    }

  return VAR_2;
}
