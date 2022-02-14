
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__,int ,int *) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;

__attribute__((used)) static tree
FUNC_9 (tree VAR_6, tree VAR_7)
{
  tree VAR_8 = FUNC_2 (VAR_7);
  enum tree_code VAR_9 = FUNC_1 (VAR_8);

  if (VAR_9 == VAR_2)
    {
      VAR_8 = FUNC_3 (VAR_8);

      if (FUNC_3 (VAR_6) != VAR_8
   && FUNC_1 (FUNC_2 (VAR_6)) == VAR_3
   && FUNC_0 (FUNC_2 (VAR_6))
   && FUNC_0 (FUNC_2 (VAR_8))
   && FUNC_1 (FUNC_2 (VAR_8)) == VAR_3)
 {
   enum tree_code VAR_10 = VAR_1;
   tree VAR_11;

   VAR_11 = FUNC_7 (FUNC_2 (VAR_8), FUNC_2 (VAR_6),
          VAR_4, ((void*)0));
   if (!VAR_11)
     {
       VAR_11 = FUNC_7 (FUNC_2 (VAR_6), FUNC_2 (VAR_8),
       VAR_4, ((void*)0));
       VAR_10 = VAR_0;
     }
   if (VAR_11 == VAR_5)
     return VAR_5;
   if (VAR_11)
     {
       VAR_7 = FUNC_4 (VAR_10, VAR_7, VAR_11, 0);
       if (VAR_7 == VAR_5)
   return VAR_5;

       if (!FUNC_8 (FUNC_2 (FUNC_2 (VAR_7)),
    FUNC_2 (VAR_6)))
  VAR_7 = FUNC_5 (VAR_6, VAR_7);
       return VAR_7;
     }
 }
    }

  return FUNC_6 (VAR_6, VAR_7, 1);
}
