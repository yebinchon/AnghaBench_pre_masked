
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (char*,scalar_t__) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;

void
FUNC_11 (tree VAR_8)
{
  tree VAR_9 = VAR_0;
  tree VAR_10;

  if (FUNC_10 (0))
    return;

  VAR_7 = 1;

  if (FUNC_2 (VAR_5) != VAR_1
      && FUNC_2 (VAR_5) != VAR_2)
    {
      FUNC_7 ("field name not in record or union initializer");
      return;
    }

  for (VAR_10 = FUNC_5 (VAR_5); VAR_10;
       VAR_10 = FUNC_1 (VAR_10))
    {
      if (FUNC_0 (VAR_10) == VAR_0
   && (FUNC_2 (FUNC_3 (VAR_10)) == VAR_1
       || FUNC_2 (FUNC_3 (VAR_10)) == VAR_2))
 {
   VAR_9 = FUNC_8 (VAR_10, VAR_8);
   if (VAR_9)
     break;
 }

      if (FUNC_0 (VAR_10) == VAR_8)
 break;
    }

  if (VAR_10 == 0)
    FUNC_6 ("unknown field %qE specified in initializer", VAR_8);

  while (VAR_10)
    {
      VAR_3 = VAR_10;
      VAR_6++;
      VAR_7 = 0;
      if (VAR_4)
 FUNC_9 (VAR_0);

      if (VAR_9)
 {
   if (FUNC_10 (0))
     return;
   VAR_10 = FUNC_4(VAR_9);
   VAR_9 = FUNC_1(VAR_9);
 }
      else
 VAR_10 = VAR_0;
    }
}
