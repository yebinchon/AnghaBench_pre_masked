
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct arg_lookup {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct arg_lookup*,int ) ;
 int FUNC_4 (struct arg_lookup*,int ) ;
 int FUNC_5 (struct arg_lookup*,int ) ;

__attribute__((used)) static bool
FUNC_6 (struct arg_lookup *VAR_4, tree VAR_5)
{
  if (FUNC_1 (VAR_5) == VAR_2
      || FUNC_1 (VAR_5) == VAR_3)
    return 0;
  else if (FUNC_1 (VAR_5) == VAR_1)
    {
      tree VAR_6 = FUNC_0 (VAR_5);


      if (FUNC_1 (VAR_6) == VAR_0)
 return FUNC_4 (VAR_4, VAR_6);

      else
 return FUNC_3 (VAR_4, VAR_6);
    }


  else if (FUNC_2 (VAR_5))
    return FUNC_5 (VAR_4, VAR_5);

  else
    return 0;
}
