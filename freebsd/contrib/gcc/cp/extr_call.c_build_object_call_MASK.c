
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct z_candidate {scalar_t__ fn; int * convs; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct z_candidate**,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_13 (struct z_candidate**,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_14 (struct z_candidate**,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_15 (struct z_candidate**,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_18 (struct z_candidate*,int ) ;
 int FUNC_19 (scalar_t__) ;
 int VAR_9 ;
 void* FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (scalar_t__) ;
 scalar_t__ FUNC_22 (int ,scalar_t__,scalar_t__,int) ;
 int FUNC_23 (char*,scalar_t__,...) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_24 (scalar_t__) ;
 scalar_t__ FUNC_25 (scalar_t__,int ,int) ;
 int FUNC_26 (int *,void*) ;
 int VAR_11 ;
 int FUNC_27 (struct z_candidate*) ;
 scalar_t__ FUNC_28 (scalar_t__) ;
 struct z_candidate* FUNC_29 (struct z_candidate*,int ,int*) ;
 struct z_candidate* FUNC_30 (struct z_candidate*) ;
 scalar_t__ FUNC_31 (scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static tree
FUNC_32 (tree VAR_12, tree VAR_13)
{
  struct z_candidate *VAR_14 = 0, *VAR_15;
  tree VAR_16, VAR_17, VAR_18 = VAR_5;
  tree VAR_19 = FUNC_8 (VAR_12);
  bool VAR_20;
  tree VAR_21 = VAR_5;
  void *VAR_22;

  if (FUNC_11 (VAR_19))
    {


      FUNC_23 ("pointer-to-member function %E cannot be called without an object; consider using .* or ->*", VAR_12);
      return VAR_10;
    }

  if (FUNC_10 (VAR_19))
    {
      VAR_16 = FUNC_25 (FUNC_10 (VAR_19), FUNC_16 (VAR_0), 1);
      if (VAR_16 == VAR_10)
 return VAR_10;
    }
  else
    VAR_16 = VAR_5;

  VAR_13 = FUNC_28 (VAR_13);

  if (VAR_13 == VAR_10)
    return VAR_10;


  VAR_22 = FUNC_20 (0);

  if (VAR_16)
    {
      tree VAR_23 = FUNC_2 (FUNC_0 (VAR_16));
      VAR_18 = FUNC_31 (VAR_5, FUNC_19 (VAR_12), VAR_13);

      for (VAR_16 = FUNC_1 (VAR_16); VAR_16; VAR_16 = FUNC_5 (VAR_16))
 {
   tree VAR_24 = FUNC_4 (VAR_16);
   if (FUNC_7 (VAR_24) == VAR_8)
     FUNC_14 (&VAR_14, VAR_24, VAR_23, VAR_5,
        VAR_18, VAR_5,
        FUNC_10 (VAR_19),
        FUNC_10 (VAR_19),
        VAR_4, VAR_1);
   else
     FUNC_13
       (&VAR_14, VAR_24, VAR_23, VAR_18, FUNC_10 (VAR_19),
        FUNC_10 (VAR_19), VAR_4);
 }
    }

  VAR_17 = FUNC_24 (VAR_19);

  for (; VAR_17; VAR_17 = FUNC_6 (VAR_17))
    {
      tree VAR_25 = FUNC_9 (VAR_17);
      tree VAR_26 = FUNC_8 (FUNC_8 (FUNC_4 (VAR_25)));

      if ((FUNC_7 (VAR_26) == VAR_6
    && FUNC_7 (FUNC_8 (VAR_26)) == VAR_3)
   || (FUNC_7 (VAR_26) == VAR_7
       && FUNC_7 (FUNC_8 (VAR_26)) == VAR_3)
   || (FUNC_7 (VAR_26) == VAR_7
       && FUNC_7 (FUNC_8 (VAR_26)) == VAR_6
       && FUNC_7 (FUNC_8 (FUNC_8 (VAR_26))) == VAR_3))
 for (; VAR_25; VAR_25 = FUNC_5 (VAR_25))
   {
     tree VAR_27 = FUNC_4 (VAR_25);
     if (FUNC_7 (VAR_27) == VAR_8)
       FUNC_15
  (&VAR_14, VAR_27, VAR_12, VAR_13, VAR_26,
                   VAR_5,
                       VAR_5);
     else
       FUNC_12 (&VAR_14, VAR_27, VAR_12, VAR_13,
                          VAR_5,
                      VAR_5);
   }
    }

  VAR_14 = FUNC_29 (VAR_14, VAR_11, &VAR_20);
  if (!VAR_20)
    {
      FUNC_23 ("no match for call to %<(%T) (%A)%>", FUNC_8 (VAR_12), VAR_13);
      FUNC_27 (VAR_14);
      VAR_21 = VAR_10;
    }
  else
    {
      VAR_15 = FUNC_30 (VAR_14);
      if (VAR_15 == 0)
 {
   FUNC_23 ("call of %<(%T) (%A)%> is ambiguous", FUNC_8 (VAR_12), VAR_13);
   FUNC_27 (VAR_14);
   VAR_21 = VAR_10;
 }



      else if (FUNC_7 (VAR_15->fn) == VAR_2
        && FUNC_3 (VAR_15->fn) == VAR_0)
 VAR_21 = FUNC_18 (VAR_15, VAR_4);
      else
 {
   VAR_12 = FUNC_22 (VAR_15->convs[0], VAR_12, VAR_15->fn, -1);
   VAR_12 = FUNC_21 (VAR_12);
   VAR_21 = FUNC_17 (VAR_12, VAR_13);
 }
    }


  FUNC_26 (&VAR_9, VAR_22);

  return VAR_21;
}
