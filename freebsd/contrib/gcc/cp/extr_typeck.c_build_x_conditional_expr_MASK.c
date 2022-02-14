
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__) ;

tree
FUNC_5 (tree VAR_3, tree VAR_4, tree VAR_5)
{
  tree VAR_6 = VAR_3;
  tree VAR_7 = VAR_4;
  tree VAR_8 = VAR_5;
  tree VAR_9;

  if (VAR_2)
    {



      if (FUNC_4 (VAR_3)

   || (VAR_4 && FUNC_4 (VAR_4))
   || FUNC_4 (VAR_5))
 return FUNC_2 (VAR_0, VAR_3, VAR_4, VAR_5);
      VAR_3 = FUNC_3 (VAR_3);
      if (VAR_4)
 VAR_4 = FUNC_3 (VAR_4);
      VAR_5 = FUNC_3 (VAR_5);
    }

  VAR_9 = FUNC_0 (VAR_3, VAR_4, VAR_5);
  if (VAR_2 && VAR_9 != VAR_1)
    return FUNC_1 (VAR_0, VAR_9,
         VAR_6, VAR_7, VAR_8);
  return VAR_9;
}
