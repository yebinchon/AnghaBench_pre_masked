
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_13 (scalar_t__,scalar_t__,int) ;
 int FUNC_14 (scalar_t__,int,int) ;
 int FUNC_15 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__,scalar_t__) ;

void
FUNC_17 (tree VAR_5, tree VAR_6, tree VAR_7)
{
  tree VAR_8, VAR_9, VAR_10, VAR_11;
  tree VAR_12 = VAR_5;

  VAR_5 = FUNC_16 (VAR_5, VAR_6, VAR_7);
  if (VAR_5 == VAR_0)
    return;

  if (FUNC_6 ()
      && FUNC_5 ())
    FUNC_4 (VAR_5);

  VAR_8 = FUNC_11 (VAR_7);
  VAR_9 = FUNC_12 (VAR_7);

  FUNC_9 (VAR_6, VAR_7, VAR_8, VAR_9, &VAR_10, &VAR_11);

  if (VAR_10)
    {
      if (FUNC_10 (VAR_10))
 {
   tree VAR_13, VAR_14;





   if (VAR_8 && FUNC_3 (VAR_8) == VAR_1)
     VAR_14 = FUNC_1 (VAR_8);
   else
     VAR_14 = VAR_8;
   for (VAR_13 = VAR_10; VAR_13 && FUNC_0 (VAR_13) != VAR_14;
        VAR_13 = FUNC_2 (VAR_13))
     FUNC_14 (FUNC_0 (VAR_13),
      VAR_2 | VAR_3,
      0);
 }
      else
 FUNC_13 (VAR_7, VAR_10, VAR_3);
    }
  if (VAR_11)
    {
      FUNC_13 (VAR_7, VAR_11, VAR_3);
      FUNC_15 (VAR_7, VAR_11);
    }


  if (!VAR_4)
    FUNC_7 (VAR_12, FUNC_8());
}
