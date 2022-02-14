
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 void* FUNC_0 (size_t,size_t) ;
 int FUNC_1 (char*,...) ;

void *
FUNC_2(size_t VAR_1, size_t VAR_2)
{
 void *VAR_3;

 if (VAR_2 == 0 || VAR_1 == 0)
  FUNC_1("xcalloc: zero size");
 if (VAR_0 / VAR_1 < VAR_2)
  FUNC_1("xcalloc: nmemb * size > SIZE_MAX");
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 == ((void*)0))
  FUNC_1("xcalloc: out of memory (allocating %zu bytes)",
      VAR_2 * VAR_1);
 return VAR_3;
}
