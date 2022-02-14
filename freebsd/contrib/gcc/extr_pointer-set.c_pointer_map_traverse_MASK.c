
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pointer_map_t {size_t n_slots; void** keys; void** values; } ;



void FUNC_0 (struct pointer_map_t *VAR_0,
      bool (*VAR_1) (void *, void **, void *), void *VAR_2)
{
  size_t VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_0->n_slots; ++VAR_3)
    if (VAR_0->keys[VAR_3] && !VAR_1 (VAR_0->keys[VAR_3], &VAR_0->values[VAR_3], VAR_2))
      break;
}
