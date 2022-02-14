
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_9 (tree VAR_1, tree VAR_2, bool VAR_3)
{
  tree VAR_4;
  tree VAR_5;
  tree VAR_6, VAR_7;

  if (VAR_1 == VAR_2)
    return 1;


  if (!FUNC_7 (FUNC_0 (VAR_1), FUNC_0 (VAR_2)))
    return 0;

  VAR_4 = FUNC_1 (VAR_1);
  VAR_5 = FUNC_1 (VAR_2);

  if (VAR_4 == VAR_5)
    return 1;
  if (!VAR_4 || !VAR_5)
    return VAR_3;



  if (!FUNC_5 (FUNC_3 (VAR_4), FUNC_3 (VAR_5)))
    return 0;
  VAR_6 = FUNC_2 (VAR_4);
  VAR_7 = FUNC_2 (VAR_5);
  if (VAR_0 && !FUNC_4 (2)
      && !FUNC_8 (VAR_6)
      && !FUNC_8 (VAR_7))
    {




      VAR_6 = FUNC_6 (VAR_6);
      VAR_7 = FUNC_6 (VAR_7);
    }

  if (!FUNC_5 (VAR_6, VAR_7))
    return 0;

  return 1;
}
