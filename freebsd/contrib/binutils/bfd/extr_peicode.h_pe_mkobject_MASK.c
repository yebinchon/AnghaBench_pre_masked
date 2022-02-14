
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct pe_tdata {int dummy; } ;
struct TYPE_10__ {int pe; } ;
struct TYPE_11__ {int force_minimum_alignment; int target_subsystem; int in_reloc_p; TYPE_2__ coff; } ;
typedef TYPE_3__ pe_data_type ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_9__ {struct pe_tdata* pe_obj_data; } ;
struct TYPE_12__ {TYPE_1__ tdata; } ;
typedef TYPE_4__ bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int) ;
 int VAR_3 ;
 TYPE_3__* FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (bfd * VAR_4)
{
  pe_data_type *VAR_5;
  bfd_size_type VAR_6 = sizeof (pe_data_type);

  VAR_4->tdata.pe_obj_data = (struct pe_tdata *) FUNC_0 (VAR_4, VAR_6);

  if (VAR_4->tdata.pe_obj_data == 0)
    return VAR_0;

  VAR_5 = FUNC_1 (VAR_4);

  VAR_5->coff.pe = 1;


  VAR_5->in_reloc_p = VAR_3;
  return VAR_2;
}
