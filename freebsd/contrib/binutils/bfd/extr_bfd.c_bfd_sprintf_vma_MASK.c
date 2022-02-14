
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd_vma ;
typedef int bfd ;
struct TYPE_2__ {int (* elf_backend_sprintf_vma ) (int *,char*,int ) ;} ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,char*,int ) ;

void
FUNC_4 (bfd *VAR_1, char *VAR_2, bfd_vma VAR_3)
{
  if (FUNC_0 (VAR_1) == VAR_0)
    FUNC_1 (VAR_1)->elf_backend_sprintf_vma (VAR_1, VAR_2, VAR_3);
  else
    FUNC_2 (VAR_2, VAR_3);
}
