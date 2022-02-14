
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct function {int unexpanded_var_list; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 struct function* FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 struct function* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,scalar_t__,int ) ;

void
FUNC_5 (tree VAR_4, tree VAR_5)
{
  struct function *VAR_6 = VAR_2;

  if (VAR_5 != VAR_3)
    VAR_2 = FUNC_1 (VAR_5);

  for (; VAR_4; VAR_4 = FUNC_2 (VAR_4))
    {
      tree VAR_7 = VAR_4;



      if (FUNC_3 (VAR_7) != VAR_1)
 continue;


      if (FUNC_0 (VAR_7))
 continue;


      VAR_2->unexpanded_var_list = FUNC_4 (VAR_0, VAR_7,
          VAR_2->unexpanded_var_list);
    }

  if (VAR_5 != VAR_3)
    VAR_2 = VAR_6;
}
