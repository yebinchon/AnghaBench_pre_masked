
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 char* FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int ) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__*) ;
 int FUNC_11 (char const*) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 int FUNC_13 (scalar_t__,int ) ;
 int FUNC_14 (int ,char*) ;

tree
FUNC_15 (tree VAR_3, int VAR_4)
{
  tree VAR_5;
  HOST_WIDE_INT VAR_6;
  int VAR_7;
  const char *VAR_8;

  FUNC_0 (VAR_3);
  if (FUNC_1 (VAR_3) == VAR_1
      && (VAR_4 || !FUNC_3 (FUNC_2 (VAR_3, 0))))
    {
      tree VAR_9, VAR_10;

      VAR_9 = FUNC_15 (FUNC_2 (VAR_3, 1), VAR_4);
      VAR_10 = FUNC_15 (FUNC_2 (VAR_3, 2), VAR_4);
      if (FUNC_12 (VAR_9, VAR_10))
 return VAR_9;
    }

  if (FUNC_1 (VAR_3) == VAR_0
      && (VAR_4 || !FUNC_3 (FUNC_2 (VAR_3, 0))))
    return FUNC_15 (FUNC_2 (VAR_3, 1), VAR_4);

  VAR_3 = FUNC_10 (VAR_3, &VAR_5);
  if (VAR_3 == 0)
    return 0;

  VAR_7 = FUNC_4 (VAR_3) - 1;
  VAR_8 = FUNC_5 (VAR_3);

  if (VAR_5 && FUNC_1 (VAR_5) != VAR_2)
    {



      int VAR_11;

      for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
 if (VAR_8[VAR_11] == 0)
   return 0;
      return FUNC_7 (FUNC_8 (VAR_7), VAR_5);
    }



  if (VAR_5 == 0)
    VAR_6 = 0;
  else if (! FUNC_6 (VAR_5, 0))
    VAR_6 = -1;
  else
    VAR_6 = FUNC_13 (VAR_5, 0);



  if (VAR_6 < 0 || VAR_6 > VAR_7)
    {
      FUNC_14 (0, "offset outside bounds of constant string");
      return 0;
    }







  return FUNC_9 (FUNC_11 (VAR_8 + VAR_6));
}
