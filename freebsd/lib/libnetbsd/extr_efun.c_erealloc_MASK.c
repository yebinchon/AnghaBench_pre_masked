
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,size_t) ;
 void* FUNC_1 (void*,size_t) ;
 int FUNC_2 (int,char*,size_t) ;

void *
FUNC_3(void *VAR_0, size_t VAR_1)
{
 void *VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0) && VAR_1 != 0)
  FUNC_0)(1, "Cannot re-allocate %zu bytes", VAR_1);
 return VAR_2;
}
