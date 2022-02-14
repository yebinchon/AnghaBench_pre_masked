
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
typedef int bitmap ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int * FUNC_4 (int *,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 scalar_t__ VAR_6 ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int * FUNC_12 (int *,int) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int * FUNC_18 (scalar_t__,int ,int *) ;
 int * FUNC_19 (scalar_t__,int ,int *,int *) ;
 int * FUNC_20 (int *) ;
 int FUNC_21 (int *,int *,int) ;

__attribute__((used)) static tree
FUNC_22 (tree VAR_7, bitmap VAR_8)
{
  if (FUNC_11 (VAR_7))
    return VAR_7;
  else if (FUNC_10 (VAR_7) == VAR_6)
    {
      tree VAR_9 = FUNC_7 (VAR_7);


      if (FUNC_16 (VAR_8, FUNC_8 (VAR_7)))
 return ((void*)0);
      FUNC_17 (VAR_8, FUNC_8 (VAR_7));

      if (FUNC_10 (VAR_9) == VAR_5)
 {


   int VAR_10;
   tree VAR_11 = ((void*)0), VAR_12;

   for (VAR_10 = 0; VAR_10 < FUNC_5 (VAR_9); VAR_10++)
     {
       tree VAR_13 = FUNC_4 (VAR_9, VAR_10);







       if (VAR_13 == FUNC_6 (VAR_9))
  continue;

       VAR_12 = FUNC_22 (VAR_13, VAR_8);
       if (!VAR_12)
  return ((void*)0);
       if (!VAR_11)
  VAR_11 = VAR_12;
       else if (!FUNC_21 (VAR_11, VAR_12, 0))
  return ((void*)0);
     }
   return VAR_11;
 }
      if (FUNC_10 (VAR_9) != VAR_3 || FUNC_12 (VAR_9, 0) != VAR_7)
 return ((void*)0);
      return FUNC_22 (FUNC_12 (VAR_9, 1), VAR_8);
    }
  else if (FUNC_10 (VAR_7) == VAR_2)
    {
      tree VAR_14 = FUNC_20 (VAR_7);
      if (!VAR_14)
 return ((void*)0);
      if (FUNC_2 (VAR_14) == VAR_1
   && FUNC_3 (VAR_14) == VAR_0)
 {
   tree VAR_15 = FUNC_12 (VAR_7, 1);
   tree VAR_16;

   if (VAR_15 == VAR_4
       || FUNC_9 (VAR_15) == VAR_4)
     return ((void*)0);
   VAR_16 = FUNC_14 (FUNC_9 (FUNC_12 (VAR_7, 1)));
   if (FUNC_11 (VAR_16))
     return VAR_16;
   return FUNC_14 (FUNC_9 (FUNC_12 (VAR_7, 1)));
 }
    }
  if (FUNC_0 (VAR_7) || FUNC_1 (VAR_7))
    {
      tree VAR_17, VAR_18, VAR_19;
      VAR_17 = FUNC_22 (FUNC_12 (VAR_7, 0), VAR_8);
      if (!VAR_17)
 return ((void*)0);
      VAR_18 = FUNC_22 (FUNC_12 (VAR_7, 1), VAR_8);
      if (!VAR_18)
 return ((void*)0);
      VAR_19 = FUNC_19 (FUNC_10 (VAR_7), FUNC_13 (VAR_7), VAR_17, VAR_18);
      if (FUNC_11 (VAR_19))
 return VAR_19;
      return ((void*)0);
    }
  if (FUNC_15 (VAR_7))
    {
      tree VAR_20, VAR_21;
      VAR_20 = FUNC_22 (FUNC_12 (VAR_7, 0), VAR_8);
      if (!VAR_20)
 return ((void*)0);
      VAR_21 = FUNC_18 (FUNC_10 (VAR_7), FUNC_13 (VAR_7), VAR_20);
      if (FUNC_11 (VAR_21))
 return VAR_21;
      return ((void*)0);
    }
  return ((void*)0);
}
