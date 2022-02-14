
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_20__ {TYPE_4__* section; } ;
typedef TYPE_5__ disassemble_info ;
typedef int bfd_vma ;
struct TYPE_18__ {TYPE_2__* elf_obj_data; } ;
struct TYPE_21__ {TYPE_3__ tdata; } ;
typedef TYPE_6__ bfd ;
struct TYPE_22__ {int * isas; } ;
struct TYPE_19__ {int flags; TYPE_6__* owner; } ;
struct TYPE_17__ {TYPE_1__* elf_header; } ;
struct TYPE_16__ {int e_flags; } ;
typedef TYPE_7__* CGEN_CPU_DESC ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_7__*,int ,TYPE_5__*) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_7__*,int ,TYPE_5__*) ;
 int FUNC_2 (TYPE_7__*,int ,TYPE_5__*) ;

__attribute__((used)) static int
FUNC_3 (CGEN_CPU_DESC VAR_5, bfd_vma VAR_6, disassemble_info *VAR_7)
{
  int VAR_8;


  if (VAR_7->section && VAR_7->section->owner)
    {
      bfd *VAR_9 = VAR_7->section->owner;
      VAR_4 = VAR_9->tdata.elf_obj_data->elf_header->e_flags & VAR_0;

    }


  if (VAR_7->section)
    {
      if (VAR_7->section->flags & VAR_3)
 {

   if (VAR_2)
     VAR_8 = FUNC_2 (VAR_5, VAR_6, VAR_7);
   else
     VAR_8 = FUNC_1 (VAR_5, VAR_6, VAR_7);

 }
      else
 {
   VAR_5->isas = & VAR_1;
   VAR_8 = FUNC_0 (VAR_5, VAR_6, VAR_7);
 }
    }
  else
    {
      VAR_8 = FUNC_0 (VAR_5, VAR_6, VAR_7);
    }

  return VAR_8;
}
