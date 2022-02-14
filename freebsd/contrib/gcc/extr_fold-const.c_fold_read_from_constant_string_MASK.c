
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int *) ;
 size_t FUNC_3 (int *) ;
 int * FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int * FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int *,int ) ;
 int * FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *,int *) ;
 int * VAR_7 ;
 int * FUNC_15 (int *,int **) ;

tree
FUNC_16 (tree VAR_8)
{
  if ((FUNC_2 (VAR_8) == VAR_1
       || FUNC_2 (VAR_8) == VAR_0)
      && FUNC_2 (FUNC_7 (VAR_8)) == VAR_3)
    {
      tree VAR_9 = FUNC_4 (VAR_8, 0);
      tree VAR_10;
      tree VAR_11;

      if (FUNC_2 (VAR_8) == VAR_1)
 VAR_11 = FUNC_15 (VAR_9, &VAR_10);
      else
 {
   tree VAR_12 = FUNC_9 (VAR_8);
   VAR_10 = FUNC_12 (VAR_7, FUNC_4 (VAR_8, 1));
   if (! FUNC_13 (VAR_12))
     VAR_10 = FUNC_14 (VAR_10, FUNC_12 (VAR_7, VAR_12));

   VAR_11 = VAR_9;
 }

      if (VAR_11
   && FUNC_8 (FUNC_7 (VAR_8)) == FUNC_8 (FUNC_7 (FUNC_7 (VAR_11)))
   && FUNC_2 (VAR_11) == VAR_6
   && FUNC_2 (VAR_10) == VAR_2
   && FUNC_11 (VAR_10, FUNC_5 (VAR_11)) < 0
   && (FUNC_0 (FUNC_8 (FUNC_7 (FUNC_7 (VAR_11))))
       == VAR_4)
   && (FUNC_1 (FUNC_8 (FUNC_7 (FUNC_7 (VAR_11)))) == 1))
 return FUNC_12 (FUNC_7 (VAR_8),
        FUNC_10 (VAR_5,
         (FUNC_6 (VAR_11)
          [FUNC_3 (VAR_10)])));
    }
  return ((void*)0);
}
