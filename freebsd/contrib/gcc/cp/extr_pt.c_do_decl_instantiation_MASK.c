
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (scalar_t__,int,int) ;
 scalar_t__ FUNC_12 (int ,int ,int ,int) ;
 int FUNC_13 (scalar_t__,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_14 (char*,...) ;
 scalar_t__* VAR_7 ;

void
FUNC_15 (tree VAR_8, tree VAR_9)
{
  tree VAR_10 = VAR_1;
  int VAR_11 = 0;

  if (!VAR_8 || VAR_8 == VAR_4)


    return;
  else if (! FUNC_3 (VAR_8))
    {
      FUNC_10 ("explicit instantiation of non-template %q#D", VAR_8);
      return;
    }
  else if (FUNC_8 (VAR_8) == VAR_3)
    {
      VAR_10 = FUNC_12 (FUNC_0 (VAR_8), FUNC_4 (VAR_8), 0, 0);
      if (!VAR_10 || FUNC_8 (VAR_10) != VAR_3)
 {
   FUNC_10 ("no matching template for %qD found", VAR_8);
   return;
 }
    }
  else if (FUNC_8 (VAR_8) != VAR_0)
    {
      FUNC_10 ("explicit instantiation of %q#D", VAR_8);
      return;
    }
  else
    VAR_10 = VAR_8;






  if (FUNC_7 (VAR_10))
    {
      return;
    }
  else if (FUNC_1 (VAR_10))
    {
      if (FUNC_5 (VAR_10) && !VAR_11)
 FUNC_14 ("duplicate explicit instantiation of %q#D", VAR_10);


      if (VAR_11)
 return;
    }
  else if (!FUNC_2 (VAR_10))
    {
      FUNC_10 ("no matching template for %qD found", VAR_10);
      return;
    }
  else if (!FUNC_6 (VAR_10))
    {
      FUNC_14 ("explicit instantiation of non-template %q#D", VAR_10);
      return;
    }

  if (VAR_9 == VAR_1)
    ;
  else if (VAR_9 == VAR_7[(int) VAR_2])
    {
      if (VAR_6 && !VAR_5)
 FUNC_14 ("ISO C++ forbids the use of %<extern%> on explicit "
   "instantiations");
      VAR_11 = 1;
    }
  else
    FUNC_10 ("storage class %qD applied to template instantiation", VAR_9);

  FUNC_9 (VAR_10);
  FUNC_13 (VAR_10, VAR_11);
  if (! VAR_11)
    FUNC_11 (VAR_10, 1,
                                  0);
}
