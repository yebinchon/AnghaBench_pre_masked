
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct elf_link_local_dynamic_entry {unsigned long dynindx; struct elf_link_local_dynamic_entry* next; } ;
struct elf_backend_data {int (* elf_backend_omit_section_dynsym ) (TYPE_1__*,struct bfd_link_info*,TYPE_2__*) ;} ;
struct bfd_link_info {scalar_t__ shared; } ;
struct TYPE_11__ {TYPE_2__* sections; } ;
typedef TYPE_1__ bfd ;
struct TYPE_12__ {int flags; struct TYPE_12__* next; } ;
typedef TYPE_2__ asection ;
struct TYPE_14__ {unsigned long dynsymcount; struct elf_link_local_dynamic_entry* dynlocal; scalar_t__ is_relocatable_executable; } ;
struct TYPE_13__ {unsigned long dynindx; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__* FUNC_0 (struct bfd_link_info*) ;
 int FUNC_1 (TYPE_8__*,int ,unsigned long*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__* FUNC_2 (TYPE_2__*) ;
 struct elf_backend_data* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,struct bfd_link_info*,TYPE_2__*) ;

__attribute__((used)) static unsigned long
FUNC_5 (bfd *VAR_4,
    struct bfd_link_info *VAR_5,
    unsigned long *VAR_6)
{
  unsigned long VAR_7 = 0;

  if (VAR_5->shared || FUNC_0 (VAR_5)->is_relocatable_executable)
    {
      const struct elf_backend_data *VAR_8 = FUNC_3 (VAR_4);
      asection *VAR_9;
      for (VAR_9 = VAR_4->sections; VAR_9 ; VAR_9 = VAR_9->next)
 if ((VAR_9->flags & VAR_1) == 0
     && (VAR_9->flags & VAR_0) != 0
     && !(*VAR_8->elf_backend_omit_section_dynsym) (VAR_4, VAR_5, VAR_9))
   FUNC_2 (VAR_9)->dynindx = ++VAR_7;
 else
   FUNC_2 (VAR_9)->dynindx = 0;
    }
  *VAR_6 = VAR_7;

  FUNC_1 (FUNC_0 (VAR_5),
     VAR_3,
     &VAR_7);

  if (FUNC_0 (VAR_5)->dynlocal)
    {
      struct elf_link_local_dynamic_entry *VAR_10;
      for (VAR_10 = FUNC_0 (VAR_5)->dynlocal; VAR_10 ; VAR_10 = VAR_10->next)
 VAR_10->dynindx = ++VAR_7;
    }

  FUNC_1 (FUNC_0 (VAR_5),
     VAR_2,
     &VAR_7);




  if (VAR_7 != 0)
    ++VAR_7;

  FUNC_0 (VAR_5)->dynsymcount = VAR_7;
  return VAR_7;
}
