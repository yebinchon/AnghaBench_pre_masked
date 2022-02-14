
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (int ) ;



 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_6 (int const,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static tree
FUNC_8 (tree VAR_1, tree VAR_2)
{
  tree VAR_3;

  if (!FUNC_0 (FUNC_3 (VAR_1))
      || FUNC_4 (FUNC_3 (VAR_1)) < FUNC_4 (FUNC_3 (VAR_2)))
    return VAR_0;

  if (VAR_1 == VAR_2)
    return FUNC_5 (FUNC_3 (VAR_1), 0);

  switch (FUNC_1 (VAR_1))
    {
    case 129:
      VAR_3 = FUNC_8 (FUNC_2 (VAR_1, 0), VAR_2);
      if (VAR_3 != VAR_0)
        return FUNC_7 (FUNC_3 (VAR_1), VAR_3);
      break;
    case 130:
      VAR_3 = FUNC_8 (FUNC_2 (VAR_1, 0), VAR_2);
      if (VAR_3 != VAR_0)
        return FUNC_6 (130, FUNC_3 (VAR_1), VAR_3, FUNC_2 (VAR_1, 1));
      break;
    case 128:
      VAR_3 = FUNC_8 (FUNC_2 (VAR_1, 0), VAR_2);
      if (VAR_3 != VAR_0)
        return FUNC_6 (128, FUNC_3 (VAR_1), VAR_3, FUNC_2 (VAR_1, 1));
      VAR_3 = FUNC_8 (FUNC_2 (VAR_1, 1), VAR_2);
      if (VAR_3 != VAR_0)
        return FUNC_6 (128, FUNC_3 (VAR_1), FUNC_2 (VAR_1, 0), VAR_3);
      break;
    default:
      break;
    }

  return VAR_0;
}
