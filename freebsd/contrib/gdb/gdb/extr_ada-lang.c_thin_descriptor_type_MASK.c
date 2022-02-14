
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 struct type* FUNC_0 (struct type*,char*) ;
 int FUNC_1 (struct type*) ;
 struct type* FUNC_2 (struct type*) ;
 scalar_t__ FUNC_3 (int ,char*) ;

__attribute__((used)) static struct type *
FUNC_4 (struct type *VAR_0)
{
  struct type *VAR_1 = FUNC_2 (VAR_0);
  if (VAR_1 == ((void*)0))
    return ((void*)0);
  if (FUNC_3 (FUNC_1 (VAR_1), "___XVE"))
    return VAR_1;
  else
    {
      struct type *VAR_2 = FUNC_0 (VAR_1, "___XVE");
      if (VAR_2 == ((void*)0))
 return VAR_1;
      else
 return VAR_2;
    }
}
