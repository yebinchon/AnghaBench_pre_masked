
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_4 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *,int) ;
 int * FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (scalar_t__,int *,int *,int *) ;
 int * FUNC_8 (scalar_t__,int *,int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int *) ;

__attribute__((used)) static tree
FUNC_11 (tree VAR_5)
{
  tree VAR_6 = FUNC_4 (VAR_5, 0);
  tree VAR_7 = FUNC_4 (VAR_5, 1);
  tree VAR_8 = FUNC_1 (VAR_6);

  while (VAR_8
  && FUNC_3 (VAR_8) == VAR_2
  && FUNC_3 (FUNC_4 (VAR_8, 1)) == VAR_4)
    VAR_8 = FUNC_1 (FUNC_4 (VAR_8, 1));



  if (VAR_8 && FUNC_3 (VAR_8) == VAR_2)
    {
      tree VAR_9 = FUNC_4 (VAR_8, 1);






      if ((FUNC_0 (FUNC_5 (VAR_6))
    && FUNC_3 (FUNC_5 (FUNC_5 (VAR_6))) == VAR_1)
   || (FUNC_0 (FUNC_5 (VAR_7))
       && FUNC_3 (FUNC_5 (FUNC_5 (VAR_7))) == VAR_1))
 return ((void*)0);


      if ((FUNC_3 (VAR_9) == VAR_3
    || FUNC_3 (VAR_9) == VAR_0)
   && FUNC_3 (FUNC_4 (VAR_9, 0)) == VAR_4)
 {
   tree VAR_10 = FUNC_4 (VAR_9, 0);
   tree VAR_11 = FUNC_5 (VAR_10);
   tree VAR_12;

   if (FUNC_6 (VAR_11)
       > FUNC_6 (FUNC_5 (VAR_9)))
     return ((void*)0);







   if (FUNC_0 (VAR_11)
       && FUNC_3 (FUNC_5 (VAR_11)) == VAR_1)
     return ((void*)0);
   VAR_12 = FUNC_8 (FUNC_3 (VAR_9), VAR_11, VAR_7);
   FUNC_2 (VAR_12);
   if (FUNC_9 (VAR_12) && FUNC_10 (VAR_12, VAR_7))
     return FUNC_7 (FUNC_3 (VAR_5), FUNC_5 (VAR_5),
      VAR_10, VAR_12);
 }
    }
  return ((void*)0);
}
