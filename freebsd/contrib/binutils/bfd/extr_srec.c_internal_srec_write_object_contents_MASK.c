
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {TYPE_3__* head; } ;
typedef TYPE_2__ tdata_type ;
struct TYPE_15__ {struct TYPE_15__* next; } ;
typedef TYPE_3__ srec_data_list_type ;
typedef int bfd_boolean ;
struct TYPE_13__ {TYPE_2__* srec_data; } ;
struct TYPE_16__ {TYPE_1__ tdata; } ;
typedef TYPE_4__ bfd ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_2__*) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (bfd *VAR_1, int VAR_2)
{
  tdata_type *VAR_3 = VAR_1->tdata.srec_data;
  srec_data_list_type *VAR_4;

  if (VAR_2)
    {
      if (! FUNC_2 (VAR_1))
 return VAR_0;
    }

  if (! FUNC_0 (VAR_1))
    return VAR_0;


  VAR_4 = VAR_3->head;

  while (VAR_4 != (srec_data_list_type *) ((void*)0))
    {
      if (! FUNC_1 (VAR_1, VAR_3, VAR_4))
 return VAR_0;
      VAR_4 = VAR_4->next;
    }
  return FUNC_3 (VAR_1, VAR_3);
}
