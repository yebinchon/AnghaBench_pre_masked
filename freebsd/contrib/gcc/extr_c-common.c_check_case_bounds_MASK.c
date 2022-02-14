
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static bool
FUNC_5 (tree VAR_1, tree VAR_2,
     tree *VAR_3, tree *VAR_4)
{
  tree VAR_5, VAR_6;
  tree VAR_7 = *VAR_3;
  tree VAR_8 = VAR_4 ? *VAR_4 : VAR_7;


  if (VAR_2 == VAR_0)
    return 1;

  VAR_5 = FUNC_1 (VAR_2);
  VAR_6 = FUNC_0 (VAR_2);


  if (FUNC_3 (VAR_7, VAR_5) < 0
      && FUNC_3 (VAR_8, VAR_5) < 0)
    {
      FUNC_4 (0, "case label value is less than minimum value for type");
      return 0;
    }


  if (FUNC_3 (VAR_7, VAR_6) > 0
      && FUNC_3 (VAR_8, VAR_6) > 0)
    {
      FUNC_4 (0, "case label value exceeds maximum value for type");
      return 0;
    }


  if (FUNC_3 (VAR_8, VAR_5) >= 0
      && FUNC_3 (VAR_7, VAR_5) < 0)
    {
      FUNC_4 (0, "lower value in case label range"
        " less than minimum value for type");
      VAR_7 = VAR_5;
    }


  if (FUNC_3 (VAR_7, VAR_6) <= 0
      && FUNC_3 (VAR_8, VAR_6) > 0)
    {
      FUNC_4 (0, "upper value in case label range"
        " exceeds maximum value for type");
      VAR_8 = VAR_6;
    }

  if (*VAR_3 != VAR_7)
    *VAR_3 = FUNC_2 (VAR_1, VAR_7);
  if (VAR_4 && *VAR_4 != VAR_8)
    *VAR_4 = FUNC_2 (VAR_1, VAR_8);

  return 1;
}
