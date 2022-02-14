
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {scalar_t__ (* types_compatible_p ) (scalar_t__,scalar_t__) ;} ;




 int const VAR_0 ;


 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;

 int FUNC_0 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;


 int FUNC_1 (scalar_t__) ;
 int VAR_7 ;
 int const VAR_8 ;


 int const FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

 int VAR_9 ;

 scalar_t__ FUNC_7 (int const,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_9 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (int const,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (int) ;
 int FUNC_14 () ;
 scalar_t__ VAR_11 ;
 int FUNC_15 (scalar_t__) ;
 TYPE_1__ VAR_12 ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__) ;
 int FUNC_18 (int ,int ) ;

tree
FUNC_19 (tree VAR_13, tree VAR_14)
{
  tree VAR_15 = FUNC_4 (VAR_14);
  tree VAR_16;

  if (VAR_13 == VAR_15)
    return VAR_14;

  if (FUNC_2 (VAR_14) == VAR_1
      || FUNC_2 (VAR_13) == VAR_1
      || FUNC_2 (VAR_15) == VAR_1)
    return VAR_10;

  if (FUNC_5 (VAR_13) == FUNC_5 (VAR_15)
      || VAR_12.types_compatible_p (FUNC_5 (VAR_13),
     FUNC_5 (VAR_15)))
    return FUNC_9 (VAR_5, VAR_13, VAR_14);

  switch (FUNC_2 (VAR_13))
    {
    case 134: case 135: case 137:
    case 132: case 130:

    case 138:
    case 133:
      if (FUNC_2 (VAR_14) == VAR_4)
 {
   VAR_16 = FUNC_11 (VAR_5, VAR_13, VAR_14);
   if (VAR_16 != VAR_6)
     return VAR_16;
 }
      if (FUNC_0 (VAR_15) || FUNC_1 (VAR_15)
   || FUNC_2 (VAR_15) == 133)
        return FUNC_9 (VAR_5, VAR_13, VAR_14);
      if (FUNC_2 (VAR_15) == 136)
 {
   VAR_16 = FUNC_9 (VAR_7, FUNC_4 (VAR_15), VAR_14);
   return FUNC_19 (VAR_13, VAR_16);
 }
      FUNC_13 (FUNC_2 (VAR_15) == 129
    && FUNC_18 (FUNC_6 (VAR_13), FUNC_6 (VAR_15)));
      return FUNC_9 (VAR_5, VAR_13, VAR_14);

    case 131:
      if (FUNC_2 (VAR_14) == VAR_4)
 {
   VAR_16 = FUNC_11 (VAR_2, VAR_13, VAR_14);
   if (VAR_16 != VAR_6)
     return VAR_16;
 }
      else if (FUNC_2 (VAR_14) == VAR_8)
 {
   VAR_16 = FUNC_11 (VAR_5, VAR_13, VAR_14);
   if (VAR_16 != VAR_6)
     return VAR_16;
 }

      switch (FUNC_2 (VAR_15))
 {
 case 134:
 case 137: case 135:
 case 132: case 130:
   return FUNC_9 (VAR_2, VAR_13, VAR_14);

 case 131:
   return FUNC_9 (VAR_5, VAR_13, VAR_14);

 case 136:
   VAR_16 = FUNC_9 (VAR_7, FUNC_4 (VAR_15), VAR_14);
   return FUNC_19 (VAR_13, VAR_16);

 default:
   FUNC_14 ();
 }

    case 136:
      switch (FUNC_2 (VAR_15))
 {
 case 134:
 case 137: case 135:
 case 132: case 130:
 case 131:
   return FUNC_7 (VAR_0, VAR_13,
    FUNC_19 (FUNC_4 (VAR_13), VAR_14),
    FUNC_19 (FUNC_4 (VAR_13), VAR_11));
 case 136:
   {
     tree VAR_17, VAR_18;

     if (FUNC_2 (VAR_14) == VAR_0)
       {
  VAR_17 = FUNC_19 (FUNC_4 (VAR_13), FUNC_3 (VAR_14, 0));
  VAR_18 = FUNC_19 (FUNC_4 (VAR_13), FUNC_3 (VAR_14, 1));
  return FUNC_10 (VAR_0, VAR_13, VAR_17, VAR_18);
       }

     VAR_14 = FUNC_16 (VAR_14);
     VAR_17 = FUNC_9 (VAR_7, FUNC_4 (VAR_15), VAR_14);
     VAR_18 = FUNC_9 (VAR_3, FUNC_4 (VAR_15), VAR_14);
     VAR_17 = FUNC_19 (FUNC_4 (VAR_13), VAR_17);
     VAR_18 = FUNC_19 (FUNC_4 (VAR_13), VAR_18);
     return FUNC_10 (VAR_0, VAR_13, VAR_17, VAR_18);
   }

 default:
   FUNC_14 ();
 }

    case 129:
      if (FUNC_15 (VAR_14))
 return FUNC_8 (VAR_13);
      FUNC_13 (FUNC_18 (FUNC_6 (VAR_13), FUNC_6 (VAR_15)));
      FUNC_13 (FUNC_0 (VAR_15) || FUNC_1 (VAR_15)
    || FUNC_2 (VAR_15) == 129);
      return FUNC_9 (VAR_9, VAR_13, VAR_14);

    case 128:
      return FUNC_9 (VAR_5, VAR_13, FUNC_12 (VAR_14));

    default:
      FUNC_14 ();
    }
}
