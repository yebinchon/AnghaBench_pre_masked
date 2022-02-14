
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int FUNC_0 (struct type*) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (struct type*) ;
 scalar_t__ VAR_0 ;
 struct type* FUNC_3 (struct type*,char*) ;
 int * FUNC_4 (struct type*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct type *
FUNC_6 (struct type *VAR_1)
{
  FUNC_0 (VAR_1);

  if (VAR_1 == ((void*)0) || FUNC_2 (VAR_1) != VAR_0
      || FUNC_4 (VAR_1) == ((void*)0))
    return ((void*)0);
  else
    {
      int VAR_2 = FUNC_5 (FUNC_4 (VAR_1));
      if (VAR_2 > 6 && FUNC_1 (FUNC_4 (VAR_1) + VAR_2 - 6, "___XVE"))
 return VAR_1;
      else
 return FUNC_3 (VAR_1, "___XVE");
    }
}
