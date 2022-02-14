
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 struct type* FUNC_0 (struct type*,int ) ;
 struct type* FUNC_1 (struct type*) ;
 int FUNC_2 (struct type*) ;
 scalar_t__ FUNC_3 (struct type*) ;
 struct type* FUNC_4 (struct type*) ;
 int FUNC_5 (struct type*) ;
 struct type* FUNC_6 (int ,int) ;

struct type *
FUNC_7 (struct type *VAR_0, int VAR_1)
{
  VAR_0 = FUNC_4 (VAR_0);

  if (VAR_1 > FUNC_2 (VAR_0))
    return ((void*)0);

  if (FUNC_3 (VAR_0))
    {
      int VAR_2;

      for (VAR_2 = 1; VAR_2 < VAR_1; VAR_2 += 1)
 VAR_0 = FUNC_1 (VAR_0);

      return FUNC_1 (FUNC_0 (VAR_0, 0));
    }
  else
    return FUNC_6 (FUNC_5 (VAR_0), VAR_1);
}
