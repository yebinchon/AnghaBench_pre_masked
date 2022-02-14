
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



__attribute__((used)) static tree
FUNC_8 (tree VAR_2)
{
  tree VAR_3, VAR_4;

  if (VAR_2 == 0 || VAR_2 == VAR_1 || ! FUNC_3 (FUNC_7 (VAR_2)))
    return 0;



  if (FUNC_2 (VAR_2))
    {
      if (FUNC_4 (VAR_2) == VAR_0 && FUNC_0 (VAR_2))
 VAR_2 = FUNC_1 (VAR_2);
      return VAR_2;
    }




  switch (FUNC_5 (FUNC_4 (VAR_2)))
    {
    case 128:
      return FUNC_8 (FUNC_6 (VAR_2, 0));

    case 129:

      VAR_3 = FUNC_8 (FUNC_6 (VAR_2, 0));
      VAR_4 = FUNC_8 (FUNC_6 (VAR_2, 1));
      if (VAR_3 == VAR_4)
 return VAR_3;
      else if (VAR_3 == 0)
 return VAR_4;
      else if (VAR_4 == 0)
 return VAR_3;
      else
 return 0;

    default:
      return 0;
    }
}
