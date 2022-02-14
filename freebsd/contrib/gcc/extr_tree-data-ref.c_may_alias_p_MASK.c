
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct data_reference {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,scalar_t__,struct data_reference*,int*) ;
 int FUNC_3 (int ,int ,struct data_reference*,struct data_reference*,int*) ;

__attribute__((used)) static bool
FUNC_4 (tree VAR_1, tree VAR_2,
      struct data_reference *VAR_3,
      struct data_reference *VAR_4,
      bool *VAR_5)
{
  if (FUNC_0 (VAR_1) == VAR_0 || FUNC_0 (VAR_2) == VAR_0)
    {
      if (FUNC_0 (VAR_1) == VAR_0 && FUNC_0 (VAR_2) == VAR_0)
 {
  *VAR_5 = (FUNC_1 (VAR_1, 0) == FUNC_1 (VAR_2, 0));
  return 1;
 }
      if (FUNC_0 (VAR_1) == VAR_0)
 return FUNC_2 (VAR_2, FUNC_1 (VAR_1, 0), VAR_4,
         VAR_5);
      else
 return FUNC_2 (VAR_1, FUNC_1 (VAR_2, 0), VAR_3,
         VAR_5);
    }

  return FUNC_3 (VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
