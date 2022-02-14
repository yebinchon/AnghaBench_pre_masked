
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,void*) ;
 scalar_t__ FUNC_12 (scalar_t__,void*) ;

__attribute__((used)) static tree
FUNC_13 (tree VAR_3, tree (*VAR_4) (tree, void*),
      void *VAR_5)
{
  tree VAR_6 = VAR_2;
  tree VAR_7 = FUNC_8 (VAR_3);
  tree VAR_8, VAR_9;
  int VAR_10;

  for (VAR_8 = FUNC_7 (VAR_3), VAR_10 = 0;
       FUNC_0 (VAR_8, VAR_10, VAR_9); VAR_10++)
    {
      tree VAR_11 = (*VAR_4) (FUNC_1 (VAR_9), VAR_5);
      if (VAR_11)
 {
   tree VAR_12 = FUNC_9 (FUNC_6 (VAR_11));

   VAR_6 = FUNC_10 (VAR_6, VAR_12);
 }
    }
  for (; VAR_7; VAR_7 = FUNC_4 (VAR_7))
    {
      tree VAR_13 = FUNC_6 (VAR_7);
      tree VAR_14;

      if (FUNC_5 (VAR_7) != VAR_1 || FUNC_3 (VAR_7))
 continue;
      while (FUNC_5 (VAR_13) == VAR_0)
 VAR_13 = FUNC_6 (VAR_13);
      if (!FUNC_2 (VAR_13))
 continue;

      VAR_14 = (*VAR_4) (VAR_13, VAR_5);
      if (VAR_14)
 {
   tree VAR_15 = FUNC_9 (FUNC_6 (VAR_14));

   VAR_6 = FUNC_10 (VAR_6, VAR_15);
 }
    }
  return VAR_6;
}
