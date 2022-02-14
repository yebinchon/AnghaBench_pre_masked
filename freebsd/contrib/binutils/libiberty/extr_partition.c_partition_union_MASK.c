
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct partition_elem {int class_element; scalar_t__ class_count; struct partition_elem* next; } ;
typedef TYPE_1__* partition ;
struct TYPE_3__ {struct partition_elem* elements; } ;



int
FUNC_0 (partition VAR_0, int VAR_1, int VAR_2)
{
  struct partition_elem *VAR_3 = VAR_0->elements;
  struct partition_elem *VAR_4;
  struct partition_elem *VAR_5;
  struct partition_elem *VAR_6;
  struct partition_elem *VAR_7;

  int VAR_8 = VAR_3[VAR_1].class_element;


  if (VAR_8 == VAR_3[VAR_2].class_element)
    return VAR_8;



  if (VAR_3[VAR_1].class_count < VAR_3[VAR_2].class_count)
    {
      int VAR_9 = VAR_1;
      VAR_1 = VAR_2;
      VAR_2 = VAR_9;
      VAR_8 = VAR_3[VAR_1].class_element;
    }

  VAR_4 = &(VAR_3[VAR_1]);
  VAR_5 = &(VAR_3[VAR_2]);


  VAR_3[VAR_8].class_count
    += VAR_3[VAR_5->class_element].class_count;


  VAR_5->class_element = VAR_8;
  for (VAR_6 = VAR_5->next; VAR_6 != VAR_5; VAR_6 = VAR_6->next)
    VAR_6->class_element = VAR_8;



  VAR_7 = VAR_4->next;
  VAR_4->next = VAR_5->next;
  VAR_5->next = VAR_7;

  return VAR_8;
}
