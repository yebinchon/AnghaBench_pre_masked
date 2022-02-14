
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elfNN_ia64_dyn_sym_info {struct elfNN_ia64_dyn_reloc_entry* reloc_entries; } ;
struct elfNN_ia64_dyn_reloc_entry {int type; scalar_t__ count; int reltext; int * srel; struct elfNN_ia64_dyn_reloc_entry* next; } ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asection ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (bfd *VAR_2, struct elfNN_ia64_dyn_sym_info *VAR_3,
   asection *VAR_4, int VAR_5, bfd_boolean VAR_6)
{
  struct elfNN_ia64_dyn_reloc_entry *VAR_7;

  for (VAR_7 = VAR_3->reloc_entries; VAR_7; VAR_7 = VAR_7->next)
    if (VAR_7->srel == VAR_4 && VAR_7->type == VAR_5)
      break;

  if (!VAR_7)
    {
      VAR_7 = ((struct elfNN_ia64_dyn_reloc_entry *)
       FUNC_0 (VAR_2, (bfd_size_type) sizeof (*VAR_7)));
      if (!VAR_7)
 return VAR_0;

      VAR_7->next = VAR_3->reloc_entries;
      VAR_7->srel = VAR_4;
      VAR_7->type = VAR_5;
      VAR_7->count = 0;
      VAR_3->reloc_entries = VAR_7;
    }
  VAR_7->reltext = VAR_6;
  VAR_7->count++;

  return VAR_1;
}
