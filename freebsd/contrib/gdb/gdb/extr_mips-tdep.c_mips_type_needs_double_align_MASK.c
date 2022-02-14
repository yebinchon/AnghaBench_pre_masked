
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
typedef enum type_code { ____Placeholder_type_code } type_code ;


 int FUNC_0 (struct type*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct type* FUNC_1 (struct type*,int) ;
 int FUNC_2 (struct type*) ;
 int FUNC_3 (struct type*) ;

__attribute__((used)) static int
FUNC_4 (struct type *VAR_3)
{
  enum type_code VAR_4 = FUNC_0 (VAR_3);

  if (VAR_4 == VAR_0 && FUNC_2 (VAR_3) == 8)
    return 1;
  else if (VAR_4 == VAR_1)
    {
      if (FUNC_3 (VAR_3) < 1)
 return 0;
      return FUNC_4 (FUNC_1 (VAR_3, 0));
    }
  else if (VAR_4 == VAR_2)
    {
      int VAR_5, VAR_6;

      VAR_6 = FUNC_3 (VAR_3);
      for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
 if (FUNC_4 (FUNC_1 (VAR_3, VAR_5)))
   return 1;
      return 0;
    }
  return 0;
}
