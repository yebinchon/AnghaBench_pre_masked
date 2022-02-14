
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct data_struct {scalar_t__ vma; struct data_struct* next; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_size_type ;
struct TYPE_7__ {TYPE_1__* tekhex_data; } ;
struct TYPE_8__ {TYPE_2__ tdata; } ;
typedef TYPE_3__ bfd ;
struct TYPE_6__ {struct data_struct* data; } ;


 scalar_t__ VAR_0 ;
 struct data_struct* FUNC_0 (TYPE_3__*,int ) ;

__attribute__((used)) static struct data_struct *
FUNC_1 (bfd *VAR_1, bfd_vma VAR_2)
{
  struct data_struct *VAR_3 = VAR_1->tdata.tekhex_data->data;

  VAR_2 &= ~VAR_0;
  while (VAR_3 && (VAR_3->vma) != VAR_2)
    VAR_3 = VAR_3->next;

  if (!VAR_3)
    {

      VAR_3 = FUNC_0 (VAR_1, (bfd_size_type) sizeof (struct data_struct));

      if (!VAR_3)
 return ((void*)0);

      VAR_3->next = VAR_1->tdata.tekhex_data->data;
      VAR_3->vma = VAR_2;
      VAR_1->tdata.tekhex_data->data = VAR_3;
    }
  return VAR_3;
}
