
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned long) ;
 void* FUNC_1 (size_t) ;

void *
FUNC_2 (size_t VAR_0)
{
  void *VAR_1 = FUNC_1 (VAR_0);
  if (VAR_1 == ((void*)0))
    FUNC_0 ("Out of memory allocating %lu bytes", (unsigned long) VAR_0);
  return VAR_1;
}
