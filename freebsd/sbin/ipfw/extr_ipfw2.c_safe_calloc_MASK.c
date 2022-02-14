
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int ,char*) ;

void *
FUNC_2(size_t VAR_1, size_t VAR_2)
{
 void *VAR_3 = FUNC_0(VAR_1, VAR_2);

 if (VAR_3 == ((void*)0))
  FUNC_1(VAR_0, "calloc");
 return VAR_3;
}
