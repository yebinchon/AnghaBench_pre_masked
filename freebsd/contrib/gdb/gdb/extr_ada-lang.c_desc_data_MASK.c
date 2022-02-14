
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;


 struct type* FUNC_0 (struct value*) ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ FUNC_2 (struct type*) ;
 struct value* FUNC_3 (struct value*) ;
 struct value* FUNC_4 (struct value**,int *,char*,int *,char*) ;

__attribute__((used)) static struct value *
FUNC_5 (struct value *VAR_0)
{
  struct type *VAR_1 = FUNC_0 (VAR_0);
  if (FUNC_2 (VAR_1))
    return FUNC_3 (VAR_0);
  else if (FUNC_1 (VAR_1))
    return FUNC_4 (&VAR_0, ((void*)0), "P_ARRAY", ((void*)0),
        "Bad GNAT array descriptor");
  else
    return ((void*)0);
}
