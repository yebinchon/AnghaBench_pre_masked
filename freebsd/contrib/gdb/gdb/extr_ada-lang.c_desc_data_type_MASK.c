
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 struct type* FUNC_0 (int ,int) ;
 struct type* FUNC_1 (struct type*) ;
 scalar_t__ FUNC_2 (struct type*) ;
 scalar_t__ FUNC_3 (struct type*) ;
 struct type* FUNC_4 (struct type*) ;
 struct type* FUNC_5 (struct type*,char*,int) ;
 int FUNC_6 (struct type*) ;

__attribute__((used)) static struct type *
FUNC_7 (struct type *VAR_0)
{
  VAR_0 = FUNC_1 (VAR_0);


  if (FUNC_3 (VAR_0))
    return FUNC_4
      (FUNC_1 (FUNC_0 (FUNC_6 (VAR_0), 1)));
  else if (FUNC_2 (VAR_0))
    return FUNC_5 (VAR_0, "P_ARRAY", 1);
  else
    return ((void*)0);
}
