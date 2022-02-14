
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct elf_backend_data {scalar_t__ (* elf_backend_section_from_bfd_section ) (int *,struct bfd_section*,int*) ;} ;
struct bfd_section {int dummy; } ;
typedef int bfd ;
struct TYPE_2__ {scalar_t__ this_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct bfd_section*) ;
 scalar_t__ FUNC_1 (struct bfd_section*) ;
 scalar_t__ FUNC_2 (struct bfd_section*) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (struct bfd_section*) ;
 struct elf_backend_data* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,struct bfd_section*,int*) ;

int
FUNC_7 (bfd *VAR_4, struct bfd_section *VAR_5)
{
  const struct elf_backend_data *VAR_6;
  int VAR_7;

  if (FUNC_4 (VAR_5) != ((void*)0)
      && FUNC_4 (VAR_5)->this_idx != 0)
    return FUNC_4 (VAR_5)->this_idx;

  if (FUNC_0 (VAR_5))
    VAR_7 = VAR_0;
  else if (FUNC_1 (VAR_5))
    VAR_7 = VAR_1;
  else if (FUNC_2 (VAR_5))
    VAR_7 = VAR_2;
  else
    VAR_7 = -1;

  VAR_6 = FUNC_5 (VAR_4);
  if (VAR_6->elf_backend_section_from_bfd_section)
    {
      int VAR_8 = VAR_7;

      if ((*VAR_6->elf_backend_section_from_bfd_section) (VAR_4, VAR_5, &VAR_8))
 return VAR_8;
    }

  if (VAR_7 == -1)
    FUNC_3 (VAR_3);

  return VAR_7;
}
