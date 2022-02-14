
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dba_array {size_t eu; int* em; void** ep; } ;
typedef size_t int32_t ;



void *
FUNC_0(struct dba_array *VAR_0, int32_t VAR_1)
{
 if (VAR_1 < 0 || VAR_1 >= VAR_0->eu || VAR_0->em[VAR_1] == -1)
  return ((void*)0);
 return VAR_0->ep[VAR_1];
}
