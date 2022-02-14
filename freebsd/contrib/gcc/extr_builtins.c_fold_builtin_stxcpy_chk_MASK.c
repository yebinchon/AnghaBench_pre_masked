
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum built_in_function { ____Placeholder_built_in_function } built_in_function ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__* VAR_10 ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_11 (int ,scalar_t__,int ) ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_14 (scalar_t__,scalar_t__) ;
 int FUNC_15 (scalar_t__,int ,int ,int ,int ) ;

tree
FUNC_16 (tree VAR_11, tree VAR_12, tree VAR_13, bool VAR_14,
    enum built_in_function VAR_15)
{
  tree VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;

  if (!FUNC_15 (VAR_12, VAR_8, VAR_8, VAR_5,
    VAR_9))
    return 0;

  VAR_16 = FUNC_3 (VAR_12);
  VAR_17 = FUNC_3 (FUNC_0 (VAR_12));
  VAR_18 = FUNC_3 (FUNC_0 (FUNC_0 (VAR_12)));


  if (VAR_15 == VAR_4 && FUNC_10 (VAR_17, VAR_16, 0))
    return FUNC_7 (FUNC_2 (FUNC_2 (VAR_11)), VAR_16);

  if (! FUNC_8 (VAR_18, 1))
    return 0;

  if (! FUNC_9 (VAR_18))
    {
      VAR_19 = FUNC_6 (VAR_17, 1);
      if (! VAR_19 || ! FUNC_8 (VAR_19, 1))
 {



   if (VAR_13 == VAR_6 || ! FUNC_8 (VAR_13, 1))
     {
       if (VAR_15 == VAR_2)
  {
    if (! VAR_14)
      return 0;



    VAR_20 = VAR_10[VAR_4];
    if (!VAR_20)
      return 0;

    return FUNC_4 (VAR_20, VAR_12);
  }

       if (! VAR_19 || FUNC_1 (VAR_19))
  return 0;



       VAR_20 = VAR_10[VAR_0];
       if (!VAR_20)
  return 0;

       VAR_19 = FUNC_11 (VAR_7, VAR_19, FUNC_12 (1));
       VAR_12 = FUNC_5 (VAR_6, VAR_18);
       VAR_12 = FUNC_13 (VAR_6, VAR_19, VAR_12);
       VAR_12 = FUNC_13 (VAR_6, VAR_17, VAR_12);
       VAR_12 = FUNC_13 (VAR_6, VAR_16, VAR_12);
       return FUNC_7 (FUNC_2 (FUNC_2 (VAR_11)),
       FUNC_4 (VAR_20, VAR_12));
     }
 }
      else
 VAR_13 = VAR_19;

      if (! FUNC_14 (VAR_13, VAR_18))
 return 0;
    }

  VAR_12 = FUNC_5 (VAR_6, VAR_17);
  VAR_12 = FUNC_13 (VAR_6, VAR_16, VAR_12);


  VAR_20 = VAR_10[VAR_15 == VAR_2
        ? VAR_1 : VAR_3];
  if (!VAR_20)
    return 0;

  return FUNC_4 (VAR_20, VAR_12);
}
