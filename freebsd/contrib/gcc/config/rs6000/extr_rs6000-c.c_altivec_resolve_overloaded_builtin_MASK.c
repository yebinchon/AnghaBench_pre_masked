
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct altivec_builtin_types {unsigned int code; scalar_t__ op1; scalar_t__ op2; scalar_t__ op3; } ;
struct TYPE_2__ {scalar_t__ (* types_compatible_p ) (scalar_t__,int ) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (scalar_t__*,int,struct altivec_builtin_types const*) ;
 struct altivec_builtin_types* VAR_7 ;
 scalar_t__ FUNC_14 (scalar_t__,int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (scalar_t__,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 int FUNC_18 (char*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_19 (scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_20 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_21 (scalar_t__,int ) ;
 scalar_t__ FUNC_22 (scalar_t__,int ) ;
 int FUNC_23 (int ,char*,int,scalar_t__) ;

tree
FUNC_24 (tree VAR_12, tree VAR_13)
{
  unsigned int VAR_14 = FUNC_0 (VAR_12);
  tree VAR_15 = FUNC_7 (FUNC_5 (VAR_12));
  tree VAR_16[3], VAR_17[3];
  const struct altivec_builtin_types *VAR_18;
  int VAR_19;

  if (VAR_14 < VAR_0
      || VAR_14 > VAR_1)
    return VAR_4;

  for (VAR_19 = 0;
       !FUNC_11 (FUNC_6 (VAR_15)) && VAR_13;
       VAR_15 = FUNC_2 (VAR_15), VAR_13 = FUNC_2 (VAR_13), VAR_19++)
    {
      tree VAR_20 = FUNC_6 (VAR_15);
      tree VAR_21 = FUNC_6 (VAR_13);
      tree VAR_22;

      if (VAR_21 == VAR_9)
 return VAR_9;

      if (VAR_19 >= 3)
        FUNC_12 ();

      VAR_21 = FUNC_17 (VAR_21);



      VAR_22 = FUNC_5 (VAR_21);
      if (FUNC_1 (VAR_22)
   && FUNC_3 (VAR_21) == VAR_3
   && VAR_10.types_compatible_p (FUNC_5 (VAR_21),
         VAR_8)
   && VAR_10.types_compatible_p (FUNC_5 (FUNC_4 (VAR_21, 0)),
         VAR_11))
 {
   VAR_21 = FUNC_4 (VAR_21, 0);
          VAR_22 = FUNC_5 (VAR_21);
 }



      if (FUNC_1 (VAR_20)
   && FUNC_1 (VAR_22)
   && FUNC_8 (FUNC_5 (VAR_22)) != 0)
 {
          if (FUNC_9 (FUNC_5 (VAR_22))
       && !FUNC_9 (FUNC_5 (VAR_20)))
     FUNC_23 (0, "passing arg %d of %qE discards qualifiers from"
          "pointer target type", VAR_19 + 1, VAR_12);
   VAR_22 = FUNC_15 (FUNC_16 (FUNC_5 (VAR_22),
          0));
   VAR_21 = FUNC_19 (VAR_22, VAR_21);
 }

      VAR_17[VAR_19] = VAR_21;
      VAR_16[VAR_19] = VAR_22;
    }



  if (!FUNC_11 (FUNC_6 (VAR_15)) || VAR_13)
    return ((void*)0);

  if (VAR_19 == 0)
    FUNC_12 ();

  if (VAR_14 == VAR_2)
    {
      if (FUNC_3 (VAR_16[0]) != VAR_6)
 goto bad;

      return FUNC_14 (VAR_4, FUNC_10 (VAR_16[0]));
    }

  for (VAR_18 = VAR_7;
       VAR_18->code && VAR_18->code != VAR_14; VAR_18++)
    continue;



  for (; VAR_18->code == VAR_14; VAR_18++)
    if ((VAR_18->op1 == VAR_5
  || FUNC_20 (VAR_16[0], VAR_18->op1))
 && (VAR_18->op2 == VAR_5
     || FUNC_20 (VAR_16[1], VAR_18->op2))
 && (VAR_18->op3 == VAR_5
     || FUNC_20 (VAR_16[2], VAR_18->op3)))
      return FUNC_13 (VAR_17, VAR_19, VAR_18);

 bad:
  FUNC_18 ("invalid parameter combination for AltiVec intrinsic");
  return VAR_9;
}
