
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct partition_elem {int dummy; } ;
struct partition_def {int dummy; } ;
typedef TYPE_2__* partition ;
struct TYPE_5__ {int num_elements; TYPE_1__* elements; } ;
struct TYPE_4__ {int class_element; int class_count; struct TYPE_4__* next; } ;


 int FUNC_0 (int) ;

partition
FUNC_1 (int VAR_0)
{
  int VAR_1;

  partition VAR_2 = (partition)
    FUNC_0 (sizeof (struct partition_def) +
      (VAR_0 - 1) * sizeof (struct partition_elem));
  VAR_2->num_elements = VAR_0;
  for (VAR_1 = 0; VAR_1 < VAR_0; ++VAR_1)
    {
      VAR_2->elements[VAR_1].class_element = VAR_1;
      VAR_2->elements[VAR_1].next = &(VAR_2->elements[VAR_1]);
      VAR_2->elements[VAR_1].class_count = 1;
    }

  return VAR_2;
}
