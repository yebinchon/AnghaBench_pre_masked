
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct sorted_fields_type {scalar_t__* elts; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5 (tree VAR_1, struct sorted_fields_type *VAR_2, int VAR_3)
{
  tree VAR_4;
  for (VAR_4 = VAR_1; VAR_4; VAR_4 = FUNC_1 (VAR_4))
    {
      if (FUNC_2 (VAR_4) == VAR_0 && FUNC_0 (FUNC_3 (VAR_4)))
 VAR_3 = FUNC_5 (FUNC_4 (FUNC_3 (VAR_4)), VAR_2, VAR_3);
      else
 VAR_2->elts[VAR_3++] = VAR_4;
    }
  return VAR_3;
}
