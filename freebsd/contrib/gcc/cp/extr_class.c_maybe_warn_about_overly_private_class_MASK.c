
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__,unsigned int) ;
 unsigned int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (scalar_t__) ;
 scalar_t__ FUNC_21 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_22 (int ,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_23 (tree VAR_3)
{
  int VAR_4 = 0;
  int VAR_5 = 0;
  tree VAR_6;

  if (!VAR_2


      || (FUNC_4 (VAR_3)
   || FUNC_11 (FUNC_20 (VAR_3)))


      || FUNC_7 (VAR_3))


    return;
  for (VAR_6 = FUNC_21 (VAR_3); VAR_6; VAR_6 = FUNC_15 (VAR_6))


    if (!FUNC_8 (VAR_6))
      {
 if (!FUNC_16 (VAR_6))
   {
     if (FUNC_12 (VAR_6))




       return;

     VAR_5 = 1;

   }
 else if (!FUNC_9 (VAR_6) && !FUNC_10 (VAR_6))
   VAR_4 = 1;
      }

  if (!VAR_5 && VAR_4)
    {






      unsigned VAR_7;
      tree VAR_8 = FUNC_17 (VAR_3);

      for (VAR_7 = 0; VAR_7 != FUNC_1 (VAR_8); VAR_7++)
 if (FUNC_0 (VAR_8, VAR_7) != VAR_1)
   {
     VAR_5 = 1;
     break;
   }
      if (!VAR_5)
 {
   FUNC_22 (VAR_0,
     "all member functions in class %qT are private", VAR_3);
   return;
 }
    }




  VAR_6 = FUNC_3 (VAR_3);
  if (VAR_6 && FUNC_16 (VAR_6))
    {
      FUNC_22 (VAR_0,
        "%q#T only defines a private destructor and has no friends",
        VAR_3);
      return;
    }

  if (FUNC_18 (VAR_3)

      && (!FUNC_6 (VAR_3)
   || !FUNC_5 (VAR_3)))
    {
      int VAR_9 = 0;
      if (!FUNC_19 (VAR_3))
 VAR_9 = 1;
      else
 for (VAR_6 = FUNC_2 (VAR_3); VAR_6; VAR_6 = FUNC_14 (VAR_6))
   {
     tree VAR_10 = FUNC_13 (VAR_6);






     if (! FUNC_16 (VAR_10))
       {
  VAR_9 = 1;
  break;
       }
   }

      if (VAR_9 == 0)
 {
   FUNC_22 (VAR_0,
     "%q#T only defines private constructors and has no friends",
     VAR_3);
   return;
 }
    }
}
