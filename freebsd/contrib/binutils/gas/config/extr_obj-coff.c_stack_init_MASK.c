
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long size; unsigned long chunk_size; unsigned long element_size; scalar_t__ pointer; void* data; } ;
typedef TYPE_1__ stack ;


 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (unsigned long) ;

__attribute__((used)) static stack *
FUNC_2 (unsigned long VAR_0,
     unsigned long VAR_1)
{
  stack *VAR_2;

  VAR_2 = FUNC_1 (sizeof (* VAR_2));
  if (!VAR_2)
    return ((void*)0);
  VAR_2->data = FUNC_1 (VAR_0);
  if (!VAR_2->data)
    {
      FUNC_0 (VAR_2);
      return ((void*)0);
    }
  VAR_2->pointer = 0;
  VAR_2->size = VAR_0;
  VAR_2->chunk_size = VAR_0;
  VAR_2->element_size = VAR_1;
  return VAR_2;
}
