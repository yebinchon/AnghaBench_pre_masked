
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_11 (int ,char*,int ) ;

tree
FUNC_12 (tree VAR_7)
{




  VAR_7 = FUNC_7 (VAR_7);







  if (FUNC_1 (FUNC_2 (VAR_7)) == VAR_1
      && (FUNC_3 (FUNC_2 (VAR_7))
   < FUNC_3 (VAR_2)))
    VAR_7 = FUNC_6 (VAR_2, VAR_7);
  else if (FUNC_0 (FUNC_2 (VAR_7)))
    VAR_7 = FUNC_8 (VAR_7);

  VAR_7 = FUNC_10 (VAR_7);

  if (VAR_7 != VAR_3
      && !FUNC_9 (FUNC_2 (VAR_7)))
    {






      if (!VAR_6)
 FUNC_11 (0, "cannot pass objects of non-POD type %q#T through %<...%>; "
   "call will abort at runtime", FUNC_2 (VAR_7));
      VAR_7 = FUNC_5 ();
      VAR_7 = FUNC_4 (VAR_0, VAR_4, VAR_7,
      VAR_5);
    }

  return VAR_7;
}
