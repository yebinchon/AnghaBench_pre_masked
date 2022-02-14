
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,size_t) ;
 void* FUNC_1 (void*,size_t,size_t,size_t) ;

void *
FUNC_2(void *VAR_0, size_t VAR_1, size_t VAR_2, size_t VAR_3)
{
 void *VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4 == ((void*)0))
  FUNC_0("xrecallocarray: out of memory (%zu elements of %zu bytes)",
      VAR_2, VAR_3);
 return VAR_4;
}
