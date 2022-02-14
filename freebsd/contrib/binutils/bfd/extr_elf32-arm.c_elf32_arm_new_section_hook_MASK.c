
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_5__ {int * used_by_bfd; } ;
typedef TYPE_1__ asection ;
typedef int _arm_elf_section_data ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (bfd *VAR_1, asection *VAR_2)
{
  if (!VAR_2->used_by_bfd)
    {
      _arm_elf_section_data *VAR_3;
      bfd_size_type VAR_4 = sizeof (*VAR_3);

      VAR_3 = FUNC_1 (VAR_1, VAR_4);
      if (VAR_3 == ((void*)0))
 return VAR_0;
      VAR_2->used_by_bfd = VAR_3;
    }

  FUNC_2 (VAR_2);

  return FUNC_0 (VAR_1, VAR_2);
}
