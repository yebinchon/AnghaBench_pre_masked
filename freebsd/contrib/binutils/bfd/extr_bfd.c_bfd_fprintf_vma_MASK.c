
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd_vma ;
typedef int bfd ;
struct TYPE_2__ {int (* elf_backend_fprintf_vma ) (int *,void*,int) ;} ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,char*,unsigned long) ;
 int FUNC_3 (int *,int) ;
 TYPE_1__* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int * FUNC_6 (int ,char*) ;
 int FUNC_7 (int *,void*,int) ;

void
FUNC_8 (bfd *VAR_1, void *VAR_2, bfd_vma VAR_3)
{
  if (FUNC_0 (VAR_1) == VAR_0)
    FUNC_4 (VAR_1)->elf_backend_fprintf_vma (VAR_1, VAR_2, VAR_3);
  else
    FUNC_3 ((FILE *) VAR_2, VAR_3);
}
