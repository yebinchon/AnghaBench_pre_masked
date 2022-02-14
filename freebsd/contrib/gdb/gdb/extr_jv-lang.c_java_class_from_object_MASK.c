
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct value*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct value*) ;
 struct value* FUNC_6 (int ,int ,int *) ;
 struct value* FUNC_7 (struct value**,int *,char*,int *,char*) ;

struct value *
FUNC_8 (struct value *VAR_1)
{


  struct value *VAR_2;

  if (FUNC_0 (FUNC_3 (VAR_1)) == VAR_0
      && FUNC_1 (FUNC_2 (FUNC_3 (VAR_1))) == 0)
    VAR_1 = FUNC_6 (FUNC_4 (),
   FUNC_5 (VAR_1), ((void*)0));

  VAR_2 = FUNC_7 (&VAR_1, ((void*)0), "vtable", ((void*)0), "structure");
  return FUNC_7 (&VAR_2, ((void*)0), "class", ((void*)0), "structure");
}
