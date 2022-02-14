
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 scalar_t__* VAR_6 ;
 char* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (int ,scalar_t__,scalar_t__) ;
 int FUNC_12 (scalar_t__,scalar_t__) ;
 int FUNC_13 (scalar_t__,int ,int ,int ,int ,int ) ;

__attribute__((used)) static tree
FUNC_14 (tree VAR_7, tree VAR_8)
{
  tree VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
  const char *VAR_14;

  if (!FUNC_13 (VAR_8, VAR_4, VAR_4, VAR_2,
    VAR_2, VAR_5))
    return 0;

  VAR_9 = FUNC_2 (VAR_8);
  VAR_10 = FUNC_2 (FUNC_0 (VAR_8));
  VAR_12 = FUNC_2 (FUNC_0 (FUNC_0 (VAR_8)));
  VAR_11 = FUNC_2 (FUNC_0 (FUNC_0 (FUNC_0 (VAR_8))));

  VAR_14 = FUNC_5 (VAR_10);

  if (VAR_14 && *VAR_14 == '\0')
    return FUNC_10 (FUNC_1 (FUNC_1 (VAR_7)), VAR_9, VAR_12);
  else if (FUNC_9 (VAR_12))
    return FUNC_10 (FUNC_1 (FUNC_1 (VAR_7)), VAR_9, VAR_10);

  if (! FUNC_7 (VAR_11, 1))
    return 0;

  if (! FUNC_8 (VAR_11))
    {
      tree VAR_15 = FUNC_6 (VAR_10, 1);
      if (VAR_15
   && FUNC_7 (VAR_15, 1)
   && FUNC_7 (VAR_12, 1)
   && ! FUNC_12 (VAR_12, VAR_15))
 {

   VAR_13 = VAR_6[VAR_0];
   if (!VAR_13)
     return 0;

   VAR_8 = FUNC_4 (VAR_3, VAR_11);
   VAR_8 = FUNC_11 (VAR_3, VAR_10, VAR_8);
   VAR_8 = FUNC_11 (VAR_3, VAR_9, VAR_8);
   return FUNC_3 (VAR_13, VAR_8);
 }
      return 0;
    }

  VAR_8 = FUNC_4 (VAR_3, VAR_12);
  VAR_8 = FUNC_11 (VAR_3, VAR_10, VAR_8);
  VAR_8 = FUNC_11 (VAR_3, VAR_9, VAR_8);


  VAR_13 = VAR_6[VAR_1];
  if (!VAR_13)
    return 0;

  return FUNC_3 (VAR_13, VAR_8);
}
