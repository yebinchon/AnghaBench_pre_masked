
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int *) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_11 (int ,char*,scalar_t__) ;

tree
FUNC_12 (tree VAR_6, tree VAR_7)
{
  if (VAR_5)
    return FUNC_3 (VAR_2, VAR_7, VAR_6);

  VAR_7 = FUNC_7 (VAR_7, VAR_1);

  if (VAR_6 == VAR_3 || !VAR_7)
    return VAR_3;

  if (! FUNC_10 (VAR_7))
    {

      tree VAR_8 = FUNC_9 (VAR_7);

      FUNC_11 (0, "cannot receive objects of non-POD type %q#T through %<...%>; "
        "call will abort at runtime", VAR_7);
      VAR_6 = FUNC_8 (FUNC_4 (VAR_8), VAR_4);
      VAR_6 = FUNC_1 (VAR_0, FUNC_0 (VAR_6),
       FUNC_6 (), VAR_6);
      VAR_6 = FUNC_2 (VAR_6, ((void*)0));
      return VAR_6;
    }

  return FUNC_5 (VAR_6, VAR_7);
}
