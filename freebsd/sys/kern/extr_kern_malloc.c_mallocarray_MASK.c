
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct malloc_type {int dummy; } ;


 scalar_t__ FUNC_0 (size_t,size_t) ;
 void* FUNC_1 (size_t,struct malloc_type*,int) ;
 int FUNC_2 (char*,size_t,size_t) ;

void *
FUNC_3(size_t VAR_0, size_t VAR_1, struct malloc_type *VAR_2, int VAR_3)
{

 if (FUNC_0(VAR_0, VAR_1))
  FUNC_2("mallocarray: %zu * %zu overflowed", VAR_0, VAR_1);

 return (FUNC_1(VAR_1 * VAR_0, VAR_2, VAR_3));
}
