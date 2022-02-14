
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;


 int FUNC_0 (struct type*) ;
 int FUNC_1 (struct type*,int) ;
 int FUNC_2 (struct type*,int) ;
 struct type* FUNC_3 (struct type*,int) ;
 int FUNC_4 (struct value*) ;
 struct value* FUNC_5 (struct value*,int ,int,int,int,struct type*) ;
 struct value* FUNC_6 (struct value*,int,int,struct type*) ;

struct value *
FUNC_7 (struct value *VAR_0, int VAR_1, int VAR_2,
      struct type *VAR_3)
{
  struct value *VAR_4;
  struct type *VAR_5;

  FUNC_0 (VAR_3);
  VAR_5 = FUNC_3 (VAR_3, VAR_2);



  if (FUNC_2 (VAR_3, VAR_2) != 0)
    {
      int VAR_6 = FUNC_1 (VAR_3, VAR_2);
      int VAR_7 = FUNC_2 (VAR_3, VAR_2);

      return FUNC_5 (VAR_0, FUNC_4 (VAR_0),
          VAR_1 + VAR_6 / 8,
          VAR_6 % 8, VAR_7, VAR_5);
    }
  else
    return FUNC_6 (VAR_0, VAR_1, VAR_2, VAR_3);
}
