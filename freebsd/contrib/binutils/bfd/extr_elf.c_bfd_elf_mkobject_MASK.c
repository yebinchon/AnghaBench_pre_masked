
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct elf_obj_tdata {int dummy; } ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_7__ {int * any; } ;
struct TYPE_8__ {TYPE_1__ tdata; } ;
typedef TYPE_2__ bfd ;
struct TYPE_9__ {scalar_t__ program_header_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_2__*,int) ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;

bfd_boolean
FUNC_2 (bfd *VAR_2)
{
  if (VAR_2->tdata.any == ((void*)0))
    {
      VAR_2->tdata.any = FUNC_0 (VAR_2, sizeof (struct elf_obj_tdata));
      if (VAR_2->tdata.any == ((void*)0))
 return VAR_0;
    }

  FUNC_1 (VAR_2)->program_header_size = (bfd_size_type) -1;

  return VAR_1;
}
