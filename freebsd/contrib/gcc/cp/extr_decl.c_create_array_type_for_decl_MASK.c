
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;

 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static tree
FUNC_6 (tree VAR_3, tree VAR_4, tree VAR_5)
{
  tree VAR_6 = VAR_1;
  const char* VAR_7;


  if (VAR_4 == VAR_2 || VAR_5 == VAR_2)
    return VAR_2;


  VAR_7 = ((void*)0);


  switch (FUNC_0 (VAR_4))
    {
    case 128:
      VAR_7 = "array of void";
      break;

    case 131:
      VAR_7 = "array of functions";
      break;

    case 129:
      VAR_7 = "array of references";
      break;

    case 130:
      VAR_7 = "array of function members";
      break;

    default:
      break;
    }


  if (VAR_7)
    {
      if (VAR_3)
 FUNC_5 ("declaration of %qD as %s", VAR_3, VAR_7);
      else
 FUNC_5 ("creating %s", VAR_7);

      return VAR_2;
    }





  if (FUNC_0 (VAR_4) == VAR_0 && !FUNC_1 (VAR_4))
    {
      if (VAR_3)
 FUNC_5 ("declaration of %qD as multidimensional array must "
        "have bounds for all dimensions except the first",
        VAR_3);
      else
 FUNC_5 ("multidimensional array must have bounds for all "
        "dimensions except the first");

      return VAR_2;
    }


  if (VAR_5)
    VAR_6 = FUNC_4 (VAR_3, VAR_5);




  FUNC_2 (VAR_3, VAR_4);

  return FUNC_3 (VAR_4, VAR_6);
}
