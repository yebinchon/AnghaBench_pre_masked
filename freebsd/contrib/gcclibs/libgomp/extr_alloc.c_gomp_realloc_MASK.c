
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned long) ;
 void* FUNC_1 (void*,size_t) ;

void *
FUNC_2 (void *VAR_0, size_t VAR_1)
{
  void *VAR_2 = FUNC_1 (VAR_0, VAR_1);
  if (VAR_2 == ((void*)0))
    FUNC_0 ("Out of memory allocating %lu bytes", (unsigned long) VAR_1);
  return VAR_2;
}
