
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__) ;

void
FUNC_10 (tree VAR_9, tree VAR_10)
{
  if (FUNC_6 (1))
    return;

  VAR_8 = 1;

  if (!FUNC_0 (FUNC_2 (VAR_9))
      || (VAR_10 && !FUNC_0 (FUNC_2 (VAR_10))))
    {
      FUNC_4 ("array index in initializer not of integer type");
      return;
    }

  if (FUNC_1 (VAR_9) != VAR_1)
    FUNC_4 ("nonconstant array index in initializer");
  else if (VAR_10 != 0 && FUNC_1 (VAR_10) != VAR_1)
    FUNC_4 ("nonconstant array index in initializer");
  else if (FUNC_1 (VAR_6) != VAR_0)
    FUNC_4 ("array index in non-array initializer");
  else if (FUNC_9 (VAR_9) == -1)
    FUNC_4 ("array index in initializer exceeds array bounds");
  else if (VAR_4
    && FUNC_8 (VAR_4, VAR_9))
    FUNC_4 ("array index in initializer exceeds array bounds");
  else
    {
      VAR_3 = FUNC_3 (VAR_2, VAR_9);

      if (VAR_10)
 {
   if (FUNC_7 (VAR_9, VAR_10))
     VAR_10 = 0;
   else if (FUNC_8 (VAR_10, VAR_9))
     {
       FUNC_4 ("empty index range in initializer");
       VAR_10 = 0;
     }
   else
     {
       VAR_10 = FUNC_3 (VAR_2, VAR_10);
       if (VAR_4 != 0
    && FUNC_8 (VAR_4, VAR_10))
  {
    FUNC_4 ("array index range in initializer exceeds array bounds");
    VAR_10 = 0;
  }
     }
 }

      VAR_7++;
      VAR_8 = 0;
      if (VAR_5 || VAR_10)
 FUNC_5 (VAR_10);
    }
}
