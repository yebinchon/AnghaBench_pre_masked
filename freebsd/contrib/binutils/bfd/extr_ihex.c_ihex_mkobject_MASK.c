
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ihex_data_struct {int * tail; int * head; } ;
typedef int bfd_boolean ;
struct TYPE_5__ {struct ihex_data_struct* ihex_data; } ;
struct TYPE_6__ {TYPE_1__ tdata; } ;
typedef TYPE_2__ bfd ;


 int VAR_0 ;
 int VAR_1 ;
 struct ihex_data_struct* FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (bfd *VAR_2)
{
  struct ihex_data_struct *VAR_3;

  VAR_3 = FUNC_0 (VAR_2, sizeof (* VAR_3));
  if (VAR_3 == ((void*)0))
    return VAR_0;

  VAR_2->tdata.ihex_data = VAR_3;
  VAR_3->head = ((void*)0);
  VAR_3->tail = ((void*)0);
  return VAR_1;
}
