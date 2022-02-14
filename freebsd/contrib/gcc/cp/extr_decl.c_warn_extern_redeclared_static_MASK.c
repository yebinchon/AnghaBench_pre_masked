
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (char*,int ) ;

void
FUNC_6 (tree VAR_5, tree VAR_6)
{
  tree VAR_7;

  if (FUNC_4 (VAR_5) == VAR_4
      || FUNC_4 (VAR_5) == VAR_3
      || FUNC_4 (VAR_5) == VAR_0
      || FUNC_4 (VAR_5) == VAR_2)
    return;



  if (FUNC_4 (VAR_5) == VAR_1
      && FUNC_2 (VAR_5))
    return;



  if (FUNC_3 (VAR_6) || !FUNC_3 (VAR_5))
    return;


  if (FUNC_4 (VAR_6) == VAR_1
      && FUNC_0 (VAR_6))
    return;

  VAR_7 = FUNC_1 (VAR_5);
  FUNC_5 ("%qD was declared %<extern%> and later %<static%>", VAR_5);
  FUNC_5 ("previous declaration of %q+D", VAR_6);
}
