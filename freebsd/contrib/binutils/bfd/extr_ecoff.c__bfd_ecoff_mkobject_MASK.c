
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ecoff_data_type ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_5__ {int * ecoff_obj_data; } ;
struct TYPE_6__ {TYPE_1__ tdata; } ;
typedef TYPE_2__ bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_2__*,int) ;

bfd_boolean
FUNC_1 (bfd *VAR_2)
{
  bfd_size_type VAR_3 = sizeof (ecoff_data_type);

  VAR_2->tdata.ecoff_obj_data = FUNC_0 (VAR_2, VAR_3);
  if (VAR_2->tdata.ecoff_obj_data == ((void*)0))
    return VAR_0;

  return VAR_1;
}
