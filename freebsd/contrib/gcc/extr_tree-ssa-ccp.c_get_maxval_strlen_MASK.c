
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int bitmap ;


 int VAR_0 ;

 scalar_t__ FUNC_0 (scalar_t__,int) ;

 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (scalar_t__,int) ;
 int FUNC_11 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_14 (tree VAR_2, tree *VAR_3, bitmap VAR_4, int VAR_5)
{
  tree VAR_6, VAR_7, VAR_8;

  if (FUNC_6 (VAR_2) != VAR_1)
    {
      if (VAR_5 == 2)
 {
   VAR_8 = VAR_2;
   if (FUNC_6 (VAR_8) != VAR_0
       || FUNC_13 (VAR_8) < 0)
     return 0;
 }
      else
 VAR_8 = FUNC_10 (VAR_2, 1);
      if (!VAR_8)
 return 0;

      if (*VAR_3)
 {
   if (VAR_5 > 0)
     {
       if (FUNC_6 (*VAR_3) != VAR_0
    || FUNC_6 (VAR_8) != VAR_0)
  return 0;

       if (FUNC_12 (*VAR_3, VAR_8))
  *VAR_3 = VAR_8;
       return 1;
     }
   else if (FUNC_11 (VAR_8, *VAR_3) != 1)
     return 0;
 }

      *VAR_3 = VAR_8;
      return 1;
    }


  if (FUNC_8 (VAR_4, FUNC_4 (VAR_2)))
    return 1;
  FUNC_9 (VAR_4, FUNC_4 (VAR_2));

  VAR_6 = VAR_2;
  VAR_7 = FUNC_3 (VAR_6);

  switch (FUNC_6 (VAR_7))
    {
      case 129:
 {
   tree VAR_9;




   VAR_9 = FUNC_7 (VAR_7, 1);
   FUNC_5 (VAR_9);
   return FUNC_14 (VAR_9, VAR_3, VAR_4, VAR_5);
 }

      case 128:
 {


   int VAR_10;

   for (VAR_10 = 0; VAR_10 < FUNC_1 (VAR_7); VAR_10++)
     {
       tree VAR_11 = FUNC_0 (VAR_7, VAR_10);







       if (VAR_11 == FUNC_2 (VAR_7))
  continue;

       if (!FUNC_14 (VAR_11, VAR_3, VAR_4, VAR_5))
  return 0;
     }

   return 1;
 }

      default:
 break;
    }


  return 0;
}
