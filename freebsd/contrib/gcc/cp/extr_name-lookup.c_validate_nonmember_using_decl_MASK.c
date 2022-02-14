
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;

__attribute__((used)) static tree
FUNC_9 (tree VAR_5, tree VAR_6, tree VAR_7)
{



  if (FUNC_3 (VAR_6))
    {
      FUNC_4 ("%qT is not a namespace", VAR_6);
      return VAR_1;
    }
  else if (VAR_6 == VAR_4)
    return VAR_1;

  if (FUNC_1 (VAR_5) == VAR_3)
    {


      FUNC_4 ("a using-declaration cannot specify a template-id.  "
      "Try %<using %D%>", VAR_7);
      return VAR_1;
    }

  if (FUNC_1 (VAR_5) == VAR_0)
    {
      FUNC_4 ("namespace %qD not allowed in using-declaration", VAR_5);
      return VAR_1;
    }

  if (FUNC_1 (VAR_5) == VAR_2)
    {


      FUNC_4 ("%qT is not a namespace", FUNC_2 (VAR_5, 0));
      return VAR_1;
    }

  if (FUNC_7 (VAR_5))
    VAR_5 = FUNC_6 (VAR_5);

  FUNC_5 (FUNC_0 (VAR_5));


  return FUNC_8 (VAR_6, VAR_7);
}
