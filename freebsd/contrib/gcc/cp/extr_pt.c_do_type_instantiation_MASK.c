
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsubst_flags_t ;
typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_14 (scalar_t__,int ,scalar_t__*) ;
 int VAR_7 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (char*,scalar_t__) ;
 int VAR_8 ;
 int FUNC_18 (scalar_t__,int) ;
 int FUNC_19 (scalar_t__,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_20 (char*,scalar_t__) ;
 scalar_t__* VAR_10 ;
 int VAR_11 ;

void
FUNC_21 (tree VAR_12, tree VAR_13, tsubst_flags_t VAR_14)
{
  int VAR_15 = 0;
  int VAR_16 = 0;
  int VAR_17 = 0;
  int VAR_18 = 0;

  if (FUNC_9 (VAR_12) == VAR_5)
    VAR_12 = FUNC_10 (VAR_12);

  if (! FUNC_5 (VAR_12) || ! FUNC_3 (VAR_12))
    {
      FUNC_17 ("explicit instantiation of non-template type %qT", VAR_12);
      return;
    }

  FUNC_16 (VAR_12);

  if (!FUNC_6 (VAR_12))
    {
      if (VAR_14 & VAR_11)
 FUNC_17 ("explicit instantiation of %q#T before definition of template",
        VAR_12);
      return;
    }

  if (VAR_13 != VAR_1)
    {
      if (VAR_9 && !VAR_8)
 FUNC_20("ISO C++ forbids the use of %qE on explicit instantiations",
  VAR_13);

      if (VAR_13 == VAR_10[(int) VAR_3])
 VAR_16 = 1;
      else if (VAR_13 == VAR_10[(int) VAR_2])
 VAR_15 = 1;
      else if (VAR_13 == VAR_10[(int) VAR_4])
 VAR_17 = 1;
      else
 {
   FUNC_17 ("storage class %qD applied to template instantiation",
   VAR_13);
   VAR_15 = 0;
 }
    }

  if (FUNC_4 (VAR_12))
    {
      return;
    }
  else if (FUNC_0 (VAR_12))
    {
      VAR_18 = FUNC_1 (VAR_12);

      if (!VAR_18 && !VAR_15
   && (VAR_14 & VAR_11))
 FUNC_20 ("duplicate explicit instantiation of %q#T", VAR_12);


      if (!FUNC_1 (VAR_12))
 return;
    }

  FUNC_15 (FUNC_13 (VAR_12));
  FUNC_19 (VAR_12, VAR_15);

  if (VAR_16)
    return;

  {
    tree VAR_19;
    if (! VAR_17)
      for (VAR_19 = FUNC_12 (VAR_12); VAR_19; VAR_19 = FUNC_8 (VAR_19))
 if (FUNC_9 (VAR_19) == VAR_0
     && FUNC_7 (VAR_19))
   FUNC_18 (VAR_19, VAR_15);

    for (VAR_19 = FUNC_11 (VAR_12); VAR_19; VAR_19 = FUNC_8 (VAR_19))
      if (FUNC_9 (VAR_19) == VAR_6 && FUNC_7 (VAR_19))
 FUNC_18 (VAR_19, VAR_15);

    if (FUNC_2 (VAR_12))
      FUNC_14 (FUNC_2 (VAR_12),
        VAR_7, &VAR_13);
  }
}
