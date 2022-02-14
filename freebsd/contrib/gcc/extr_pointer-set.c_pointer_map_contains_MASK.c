
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pointer_map_t {size_t n_slots; void** keys; void** values; int log_slots; } ;


 size_t FUNC_0 (void*,size_t,int ) ;

void **
FUNC_1 (struct pointer_map_t *VAR_0, void *VAR_1)
{
  size_t VAR_2 = FUNC_0 (VAR_1, VAR_0->n_slots, VAR_0->log_slots);

  while (1)
    {
      if (VAR_0->keys[VAR_2] == VAR_1)
 return &VAR_0->values[VAR_2];
      else if (VAR_0->keys[VAR_2] == 0)
 return ((void*)0);
      else
       {
         ++VAR_2;
         if (VAR_2 == VAR_0->n_slots)
           VAR_2 = 0;
       }
    }
}
