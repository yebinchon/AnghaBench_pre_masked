
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int REAL_VALUE_TYPE ;





 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_11 (char*,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_12 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_13 () ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_15 (int ,int *,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (scalar_t__,int ,int ) ;

__attribute__((used)) static tree
FUNC_19 (tree VAR_11, tree VAR_12, int VAR_13)
{
  tree VAR_14 = FUNC_7 (FUNC_7 (VAR_11));
  tree VAR_15;
  REAL_VALUE_TYPE VAR_16;

  if (!FUNC_18 (VAR_12, VAR_3, VAR_5))
    {

      if (VAR_12 == 0)
 {
   FUNC_11 ("too few arguments to function %qs",
   FUNC_3 (FUNC_0 (VAR_11)));
   return VAR_7;
 }
      else if (FUNC_4 (VAR_12) != 0)
 {
   FUNC_11 ("too many arguments to function %qs",
   FUNC_3 (FUNC_0 (VAR_11)));
   return VAR_7;
 }
      else
 {
   FUNC_11 ("non-floating-point argument to function %qs",
   FUNC_3 (FUNC_0 (VAR_11)));
   return VAR_7;
 }
    }

  VAR_15 = FUNC_8 (VAR_12);
  switch (VAR_13)
    {
    case 129:
      if (!FUNC_1 (FUNC_9 (FUNC_7 (VAR_15))))
 return FUNC_14 (VAR_14, VAR_10, VAR_15);

      if (FUNC_5 (VAR_15) == VAR_2)
 {
   VAR_16 = FUNC_6 (VAR_15);
   if (FUNC_16 (&VAR_16))
     return FUNC_15 (VAR_0, &VAR_16, &VAR_6)
     ? VAR_9 : VAR_8;
   else
     return VAR_10;
 }

      return VAR_1;

    case 130:
      if (!FUNC_2 (FUNC_9 (FUNC_7 (VAR_15)))
   && !FUNC_1 (FUNC_9 (FUNC_7 (VAR_15))))
 return FUNC_14 (VAR_14, VAR_9, VAR_15);

      if (FUNC_5 (VAR_15) == VAR_2)
 {
   VAR_16 = FUNC_6 (VAR_15);
   return FUNC_16 (&VAR_16) || FUNC_17 (&VAR_16)
   ? VAR_10 : VAR_9;
 }

      return VAR_1;

    case 128:
      if (!FUNC_2 (FUNC_9 (FUNC_7 (VAR_15))))
 return FUNC_14 (VAR_14, VAR_10, VAR_15);

      if (FUNC_5 (VAR_15) == VAR_2)
 {
   VAR_16 = FUNC_6 (VAR_15);
   return FUNC_17 (&VAR_16) ? VAR_9 : VAR_10;
 }

      VAR_15 = FUNC_10 (VAR_15);
      return FUNC_12 (VAR_4, VAR_14, VAR_15, VAR_15);

    default:
      FUNC_13 ();
    }
}
