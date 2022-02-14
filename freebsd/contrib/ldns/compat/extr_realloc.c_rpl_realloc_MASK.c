
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (size_t) ;
 void* FUNC_1 (void*,size_t) ;

void *
FUNC_2 (void* VAR_0, size_t VAR_1)
{
  if (VAR_1 == 0)
    VAR_1 = 1;
  if(VAR_0 == 0) {
    return FUNC_0(VAR_1);
  }
  return FUNC_1(VAR_0, VAR_1);
}
