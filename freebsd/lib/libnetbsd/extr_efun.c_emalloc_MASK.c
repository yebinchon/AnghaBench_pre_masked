
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,size_t) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (int,char*,size_t) ;

void *
FUNC_3(size_t VAR_0)
{
 void *VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 == ((void*)0) && VAR_0 != 0)
  FUNC_0)(1, "Cannot allocate %zu bytes", VAR_0);
 return VAR_1;
}
