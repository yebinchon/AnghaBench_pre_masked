
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct type*,int ) ;
 int FUNC_2 (struct type*) ;
 struct type* FUNC_3 (int ) ;
 struct type* FUNC_4 (struct type*,char*) ;

struct type *
FUNC_5 (struct type *VAR_1)
{
  struct type *VAR_2;
  struct type *VAR_3;
  struct type *VAR_4;

  if (VAR_1 == ((void*)0) || FUNC_0 (VAR_1) != VAR_0)
    return VAR_1;

  VAR_2 = FUNC_4 (VAR_1, "___XVS");
  if (VAR_2 == ((void*)0)
      || FUNC_0 (VAR_2) != VAR_0
      || FUNC_2 (VAR_2) != 1)
    return VAR_1;

  VAR_3 = FUNC_3 (FUNC_1 (VAR_2, 0));
  if (VAR_3 == ((void*)0))
    return VAR_1;
  else
    return VAR_3;
}
