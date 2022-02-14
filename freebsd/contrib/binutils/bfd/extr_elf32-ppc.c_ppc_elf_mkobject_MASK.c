
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ppc_elf_obj_tdata {int dummy; } ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_6__ {int * any; } ;
struct TYPE_7__ {TYPE_1__ tdata; } ;
typedef TYPE_2__ bfd ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (bfd *VAR_1)
{
  if (VAR_1->tdata.any == ((void*)0))
    {
      bfd_size_type VAR_2 = sizeof (struct ppc_elf_obj_tdata);
      VAR_1->tdata.any = FUNC_1 (VAR_1, VAR_2);
      if (VAR_1->tdata.any == ((void*)0))
 return VAR_0;
    }
  return FUNC_0 (VAR_1);
}
