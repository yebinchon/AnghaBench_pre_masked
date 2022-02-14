
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct malloc_type {int dummy; } ;


 int FUNC_0 (void*,struct malloc_type*) ;
 void* FUNC_1 (void*,size_t,struct malloc_type*,int) ;

void *
FUNC_2(void *VAR_0, size_t VAR_1, struct malloc_type *VAR_2, int VAR_3)
{
 void *VAR_4;

 if ((VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3)) == ((void*)0))
  FUNC_0(VAR_0, VAR_2);
 return (VAR_4);
}
