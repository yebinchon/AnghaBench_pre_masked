
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct arg_lookup {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct arg_lookup*,scalar_t__) ;
 int FUNC_13 (struct arg_lookup*,scalar_t__) ;
 int FUNC_14 (struct arg_lookup*,int ) ;
 int FUNC_15 (struct arg_lookup*,scalar_t__) ;
 scalar_t__ VAR_9 ;
 int FUNC_16 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_17 (struct arg_lookup *VAR_10, tree VAR_11)
{
  if (VAR_11 == VAR_9)
    return 0;

  if (FUNC_11 (VAR_11))
    return FUNC_15 (VAR_10, VAR_11);

  if (! FUNC_16 (VAR_11))
    return FUNC_15 (VAR_10, FUNC_7 (VAR_11));

  if (FUNC_5 (VAR_11) == VAR_0)
    VAR_11 = FUNC_6 (VAR_11, 0);
  if (FUNC_5 (VAR_11) == VAR_2)
    VAR_11 = FUNC_6 (VAR_11, 1);
  if (FUNC_5 (VAR_11) == VAR_5)
    VAR_11 = FUNC_6 (VAR_11, 1);
  while (FUNC_5 (VAR_11) == VAR_8)
    VAR_11 = FUNC_8 (VAR_11);
  if (FUNC_5 (VAR_11) == VAR_1)
    VAR_11 = FUNC_0 (VAR_11);

  if (FUNC_5 (VAR_11) == VAR_3)
    return FUNC_15 (VAR_10, FUNC_7 (VAR_11));
  if (FUNC_5 (VAR_11) == VAR_7)
    {





      tree VAR_12 = FUNC_6 (VAR_11, 0);
      tree VAR_13 = FUNC_6 (VAR_11, 1);
      tree VAR_14;
      int VAR_15;

      if (FUNC_5 (VAR_12) == VAR_2)
 VAR_12 = FUNC_6 (VAR_12, 1);





      VAR_12 = FUNC_3 (VAR_12);

      VAR_14 = FUNC_1 (VAR_12);

      if (FUNC_5 (VAR_14) == VAR_4)
 {
   if (FUNC_13 (VAR_10, VAR_14) == 1)
     return 1;
 }

      else if (FUNC_12 (VAR_10, VAR_14) == 1)
 return 1;


      if (VAR_13)
 for (VAR_15 = FUNC_10 (VAR_13); VAR_15--;)
   if (FUNC_14 (VAR_10, FUNC_9 (VAR_13, VAR_15)) == 1)
     return 1;
    }
  else if (FUNC_5 (VAR_11) == VAR_6)
    {
      for (; VAR_11; VAR_11 = FUNC_2 (VAR_11))
 if (FUNC_15 (VAR_10, FUNC_7 (FUNC_4 (VAR_11))))
   return 1;
    }

  return 0;
}
