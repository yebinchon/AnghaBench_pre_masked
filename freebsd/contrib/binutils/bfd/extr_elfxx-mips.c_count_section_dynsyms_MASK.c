
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct elf_backend_data {int (* elf_backend_omit_section_dynsym ) (TYPE_1__*,struct bfd_link_info*,TYPE_2__*) ;} ;
struct bfd_link_info {scalar_t__ shared; } ;
typedef scalar_t__ bfd_size_type ;
struct TYPE_8__ {TYPE_2__* sections; } ;
typedef TYPE_1__ bfd ;
struct TYPE_9__ {int flags; struct TYPE_9__* next; } ;
typedef TYPE_2__ asection ;
struct TYPE_10__ {scalar_t__ is_relocatable_executable; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_0 (struct bfd_link_info*) ;
 struct elf_backend_data* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,struct bfd_link_info*,TYPE_2__*) ;

__attribute__((used)) static bfd_size_type
FUNC_3 (bfd *VAR_2, struct bfd_link_info *VAR_3)
{
  bfd_size_type VAR_4;

  VAR_4 = 0;
  if (VAR_3->shared || FUNC_0 (VAR_3)->is_relocatable_executable)
    {
      asection *VAR_5;
      const struct elf_backend_data *VAR_6;

      VAR_6 = FUNC_1 (VAR_2);
      for (VAR_5 = VAR_2->sections; VAR_5 ; VAR_5 = VAR_5->next)
 if ((VAR_5->flags & VAR_1) == 0
     && (VAR_5->flags & VAR_0) != 0
     && !(*VAR_6->elf_backend_omit_section_dynsym) (VAR_2, VAR_3, VAR_5))
   ++VAR_4;
    }
  return VAR_4;
}
