
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,scalar_t__,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static int
FUNC_3 (tree VAR_3, tree VAR_4, tree VAR_5)
{
  if (VAR_3 == VAR_2)
    return 0;
  if (!VAR_3)
    {
      FUNC_1 ("class %qT does not have any field named %qD", VAR_4,
      VAR_5);
      return 0;
    }
  if (FUNC_0 (VAR_3) == VAR_1)
    {
      FUNC_1 ("%q#D is a static data member; it can only be "
      "initialized at its definition",
      VAR_3);
      return 0;
    }
  if (FUNC_0 (VAR_3) != VAR_0)
    {
      FUNC_1 ("%q#D is not a non-static data member of %qT",
      VAR_3, VAR_4);
      return 0;
    }
  if (FUNC_2 (VAR_3) != VAR_4)
    {
      FUNC_1 ("class %qT does not have any field named %qD", VAR_4,
  VAR_5);
      return 0;
    }

  return 1;
}
