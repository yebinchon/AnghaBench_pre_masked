
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct _spu_elf_section_data {int dummy; } ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_4__ {struct _spu_elf_section_data* used_by_bfd; } ;
typedef TYPE_1__ asection ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 struct _spu_elf_section_data* FUNC_1 (int *,int) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (bfd *VAR_1, asection *VAR_2)
{
  if (!VAR_2->used_by_bfd)
    {
      struct _spu_elf_section_data *VAR_3;

      VAR_3 = FUNC_1 (VAR_1, sizeof (*VAR_3));
      if (VAR_3 == ((void*)0))
 return VAR_0;
      VAR_2->used_by_bfd = VAR_3;
    }

  return FUNC_0 (VAR_1, VAR_2);
}
