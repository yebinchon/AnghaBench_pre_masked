
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ local_toc_sym_map; scalar_t__ relocbase; int * raw_syments; int * conversion_table; int * symbols; } ;
typedef TYPE_2__ coff_data_type ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_8__ {int * coff_obj_data; } ;
struct TYPE_10__ {TYPE_1__ tdata; } ;
typedef TYPE_3__ bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_3__*,int) ;
 TYPE_2__* FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (bfd * VAR_2)
{
  coff_data_type *VAR_3;
  bfd_size_type VAR_4 = sizeof (coff_data_type);

  VAR_2->tdata.coff_obj_data = FUNC_0 (VAR_2, VAR_4);
  if (VAR_2->tdata.coff_obj_data == ((void*)0))
    return VAR_0;
  VAR_3 = FUNC_1 (VAR_2);
  VAR_3->symbols = ((void*)0);
  VAR_3->conversion_table = ((void*)0);
  VAR_3->raw_syments = ((void*)0);
  VAR_3->relocbase = 0;
  VAR_3->local_toc_sym_map = 0;



  return VAR_1;
}
