
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ppc_link_hash_table {int elf; } ;
struct TYPE_3__ {char* string; } ;
struct TYPE_4__ {TYPE_1__ root; } ;
struct elf_link_hash_entry {TYPE_2__ root; } ;
struct ppc_link_hash_entry {struct elf_link_hash_entry elf; struct ppc_link_hash_entry* oh; scalar_t__ is_func_descriptor; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int FUNC_0 (struct bfd_link_info*,struct elf_link_hash_entry*,int ) ;
 scalar_t__ FUNC_1 (int *,char const*,int ,int ,int ) ;
 struct ppc_link_hash_table* FUNC_2 (struct bfd_link_info*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (struct bfd_link_info *VAR_1,
         struct elf_link_hash_entry *VAR_2,
         bfd_boolean VAR_3)
{
  struct ppc_link_hash_entry *VAR_4;
  FUNC_0 (VAR_1, VAR_2, VAR_3);

  VAR_4 = (struct ppc_link_hash_entry *) VAR_2;
  if (VAR_4->is_func_descriptor)
    {
      struct ppc_link_hash_entry *VAR_5 = VAR_4->oh;

      if (VAR_5 == ((void*)0))
 {
   const char *VAR_6, *VAR_7;
   struct ppc_link_hash_table *VAR_8;
   char VAR_9;
   VAR_6 = VAR_4->elf.root.root.string - 1;
   VAR_9 = *VAR_6;
   *(char *) VAR_6 = '.';
   VAR_8 = FUNC_2 (VAR_1);
   VAR_5 = (struct ppc_link_hash_entry *)
     FUNC_1 (&VAR_8->elf, VAR_6, VAR_0, VAR_0, VAR_0);
   *(char *) VAR_6 = VAR_9;





   if (VAR_5 == ((void*)0))
     {
       VAR_7 = VAR_4->elf.root.root.string + FUNC_3 (VAR_4->elf.root.root.string);
       while (VAR_7 >= VAR_4->elf.root.root.string && *VAR_7 == *VAR_6)
  --VAR_7, --VAR_6;
       if (VAR_7 < VAR_4->elf.root.root.string && *VAR_6 == '.')
  VAR_5 = (struct ppc_link_hash_entry *)
    FUNC_1 (&VAR_8->elf, VAR_6, VAR_0, VAR_0, VAR_0);
     }
   if (VAR_5 != ((void*)0))
     {
       VAR_4->oh = VAR_5;
       VAR_5->oh = VAR_4;
     }
 }
      if (VAR_5 != ((void*)0))
 FUNC_0 (VAR_1, &VAR_5->elf, VAR_3);
    }
}
