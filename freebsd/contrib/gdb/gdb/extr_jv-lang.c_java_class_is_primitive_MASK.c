
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (struct value*) ;
 struct value* FUNC_1 (struct value**,int *,char*,int *,char*) ;

__attribute__((used)) static int
FUNC_2 (struct value *VAR_0)
{
  struct value *VAR_1 = FUNC_1 (&VAR_0, ((void*)0), "vtable", ((void*)0), "struct");
  CORE_ADDR VAR_2 = FUNC_0 (VAR_1);
  return (int) (VAR_2 & 0x7fffffff) == (int) 0x7fffffff;
}
