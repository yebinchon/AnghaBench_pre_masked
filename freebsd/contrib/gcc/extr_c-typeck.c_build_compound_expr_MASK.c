
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (scalar_t__,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int ,char*) ;

tree
FUNC_8 (tree VAR_6, tree VAR_7)
{
  if (!FUNC_2 (VAR_6))
    {



      if (VAR_5)
 {
   if (FUNC_4 (FUNC_3 (VAR_6))
       && (FUNC_0 (VAR_6) == VAR_2
    || FUNC_0 (VAR_6) == VAR_1))
     ;
   else if (FUNC_4 (FUNC_3 (VAR_6))
     && FUNC_0 (VAR_6) == VAR_0
     && (FUNC_0 (FUNC_1 (VAR_6, 1)) == VAR_1
         || FUNC_0 (FUNC_1 (VAR_6, 1)) == VAR_2))
     ;
   else
     FUNC_7 (0, "left-hand operand of comma expression has no effect");
 }
    }





  else if (VAR_5)
    FUNC_6 (VAR_6, VAR_4);

  if (VAR_7 == VAR_3)
    return VAR_3;

  return FUNC_5 (VAR_0, FUNC_3 (VAR_7), VAR_6, VAR_7);
}
