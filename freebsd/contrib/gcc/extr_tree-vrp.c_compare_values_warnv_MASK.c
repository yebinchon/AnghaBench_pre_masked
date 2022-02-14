
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,int ,scalar_t__) ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__,int ) ;
 int FUNC_15 (scalar_t__,scalar_t__) ;
 int FUNC_16 (scalar_t__) ;

__attribute__((used)) static int
FUNC_17 (tree VAR_10, tree VAR_11, bool *VAR_12)
{
  if (VAR_10 == VAR_11)
    return 0;



  FUNC_9 (FUNC_0 (FUNC_5 (VAR_10))
       == FUNC_0 (FUNC_5 (VAR_11)));

  if ((FUNC_1 (VAR_10) == VAR_7
       || FUNC_1 (VAR_10) == VAR_6
       || FUNC_1 (VAR_10) == VAR_2)
      && (FUNC_1 (VAR_11) == VAR_7
   || FUNC_1 (VAR_11) == VAR_6
   || FUNC_1 (VAR_11) == VAR_2))
    {
      tree VAR_13, VAR_14, VAR_15, VAR_16;
      enum tree_code VAR_17, VAR_18;




      if (FUNC_1 (VAR_10) == VAR_7)
 {
   VAR_17 = VAR_7;
   VAR_13 = VAR_10;
   VAR_14 = VAR_5;
 }
      else
 {
   VAR_17 = FUNC_1 (VAR_10);
   VAR_13 = FUNC_3 (VAR_10, 0);
   VAR_14 = FUNC_3 (VAR_10, 1);
   if (FUNC_16 (VAR_14) == -1)
     {
       if (FUNC_12 (VAR_14))
  return -2;
       VAR_14 = FUNC_8 (VAR_3, FUNC_5 (VAR_14), VAR_14);
       if (!VAR_14)
  return -2;
       VAR_17 = VAR_17 == VAR_2 ? VAR_6 : VAR_2;
     }
 }

      if (FUNC_1 (VAR_11) == VAR_7)
 {
   VAR_18 = VAR_7;
   VAR_15 = VAR_11;
   VAR_16 = VAR_5;
 }
      else
 {
   VAR_18 = FUNC_1 (VAR_11);
   VAR_15 = FUNC_3 (VAR_11, 0);
   VAR_16 = FUNC_3 (VAR_11, 1);
   if (FUNC_16 (VAR_16) == -1)
     {
       if (FUNC_12 (VAR_16))
  return -2;
       VAR_16 = FUNC_8 (VAR_3, FUNC_5 (VAR_16), VAR_16);
       if (!VAR_16)
  return -2;
       VAR_18 = VAR_18 == VAR_2 ? VAR_6 : VAR_2;
     }
 }


      if (VAR_13 != VAR_15)
 return -2;

      if (VAR_17 == VAR_7
   && VAR_18 == VAR_7)

 return 0;


      if (!FUNC_6 (FUNC_5 (VAR_10)))
 return -2;

      if (VAR_12 != ((void*)0)
   && (VAR_17 == VAR_7 || !FUNC_2 (VAR_10))
   && (VAR_18 == VAR_7 || !FUNC_2 (VAR_11)))
 *VAR_12 = 1;

      if (VAR_17 == VAR_7)
 {
   if (VAR_18 == VAR_6)

     return -1;
   else if (VAR_18 == VAR_2)

     return 1;
 }
      else if (VAR_17 == VAR_6)
 {
   if (VAR_18 == VAR_7)

     return 1;
   else if (VAR_18 == VAR_6)

     return FUNC_17 (VAR_14, VAR_16, VAR_12);
   else if (VAR_18 == VAR_2)

     return 1;
 }
      else if (VAR_17 == VAR_2)
 {
   if (VAR_18 == VAR_7)

     return -1;
   else if (VAR_18 == VAR_6)

     return -1;
   else if (VAR_18 == VAR_2)


     return FUNC_17 (VAR_16, VAR_14, VAR_12);
 }

      FUNC_10 ();
    }


  if (!FUNC_11 (VAR_10) || !FUNC_11 (VAR_11))
    return -2;

  if (!FUNC_0 (FUNC_5 (VAR_10)))
    {


      if (FUNC_4 (VAR_10) || FUNC_4 (VAR_11))
 {
   if (VAR_12 != ((void*)0))
     *VAR_12 = 1;
   if (FUNC_12 (VAR_10))
     return FUNC_12 (VAR_11) ? 0 : -1;
   else if (FUNC_12 (VAR_11))
     return 1;
   else if (FUNC_13 (VAR_10))
     return FUNC_13 (VAR_11) ? 0 : 1;
   else if (FUNC_13 (VAR_11))
     return -1;
   return -2;
 }

      return FUNC_15 (VAR_10, VAR_11);
    }
  else
    {
      tree VAR_19;


      if (VAR_10 == VAR_11 || FUNC_14 (VAR_10, VAR_11, 0))
 return 0;


      VAR_19 = FUNC_7 (VAR_1, VAR_9, VAR_10, VAR_11);
      if (VAR_19 == VAR_8)
 return -1;


      VAR_19 = FUNC_7 (VAR_0, VAR_9, VAR_10, VAR_11);
      if (VAR_19 == VAR_8)
 return 1;


      VAR_19 = FUNC_7 (VAR_4, VAR_9, VAR_10, VAR_11);
      if (VAR_19 == VAR_8)
 return 2;

      return -2;
    }
}
