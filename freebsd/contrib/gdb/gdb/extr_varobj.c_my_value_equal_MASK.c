
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;


 int FUNC_0 (struct value*,struct value*,int*) ;

__attribute__((used)) static int
FUNC_1 (struct value *VAR_0, struct value *VAR_1, int *VAR_2)
{
  int VAR_3, VAR_4, VAR_5;

  *VAR_2 = 0;


  if (VAR_0 == ((void*)0) && VAR_1 == ((void*)0))
    return 1;
  else if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
    return 0;




  VAR_4 = 0;
  VAR_5 = 0;


  if (!FUNC_0 (VAR_0, VAR_0, &VAR_3))
    VAR_4 = 1;

  if (!FUNC_0 (VAR_1, VAR_1, &VAR_3))
    *VAR_2 = VAR_5 = 1;

  if (VAR_4 != VAR_5)
    return 0;

  if (!FUNC_0 (VAR_0, VAR_1, &VAR_3))
    {





      if (VAR_4 == VAR_5)
 {




   return 1;
 }
      else
 {
   return 0;
 }
    }

  return VAR_3;
}
