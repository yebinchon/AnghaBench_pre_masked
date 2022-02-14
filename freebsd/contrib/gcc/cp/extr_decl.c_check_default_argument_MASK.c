
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 char* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,char*,scalar_t__,int ) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (scalar_t__*,int ,int *) ;

tree
FUNC_6 (tree VAR_5, tree VAR_6)
{
  tree VAR_7;
  tree VAR_8;

  if (FUNC_0 (VAR_6) == VAR_0)



    return VAR_6;

  if (FUNC_2 (VAR_5))
    {
      VAR_8 = VAR_5;
      VAR_5 = VAR_2;
    }
  else
    VAR_8 = FUNC_1 (VAR_5);

  if (VAR_6 == VAR_3
      || VAR_5 == VAR_3
      || FUNC_1 (VAR_6) == VAR_3
      || VAR_8 == VAR_3)


    return VAR_3;





  if (!FUNC_1 (VAR_6)
      || !FUNC_3 (VAR_8, FUNC_1 (VAR_6), VAR_6, VAR_1))
    {
      if (VAR_5)
 FUNC_4 ("default argument for %q#D has type %qT",
        VAR_5, FUNC_1 (VAR_6));
      else
 FUNC_4 ("default argument for parameter of type %qT has type %qT",
        VAR_8, FUNC_1 (VAR_6));

      return VAR_3;
    }
  VAR_7 = FUNC_5 (&VAR_6, VAR_4,
          ((void*)0));
  if (VAR_7)
    {
      FUNC_4 ("default argument %qE uses local variable %qD", VAR_6, VAR_7);
      return VAR_3;
    }


  return VAR_6;
}
