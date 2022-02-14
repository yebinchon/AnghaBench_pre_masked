
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int ,char*,scalar_t__,scalar_t__) ;

void
FUNC_14 (tree VAR_6)
{
  tree VAR_7;
  tree VAR_8;
  int VAR_9;

  int VAR_10 = FUNC_12 (VAR_6);

  if (VAR_10 == VAR_2
      || FUNC_2 (FUNC_9 (VAR_6)))
    return;


  if (FUNC_1 (VAR_6))
    VAR_10 = VAR_4;

  for (VAR_8 = FUNC_8 (VAR_6); VAR_8; VAR_8 = FUNC_4 (VAR_8))
    if (FUNC_5 (VAR_8) == VAR_0 && FUNC_6 (VAR_8) != VAR_5)
      {
 tree VAR_11 = FUNC_11 (FUNC_6 (VAR_8));
 int VAR_12 = FUNC_12 (VAR_11);

 if (VAR_12 == VAR_2)
   {
     if (!FUNC_10 ())
       FUNC_13 (0, "%qT has a field %qD whose type uses the anonymous namespace",

     VAR_6, VAR_8);
   }
 else if (FUNC_3 (VAR_11)
   && VAR_10 < VAR_3
   && VAR_12 >= VAR_3)
   FUNC_13 (VAR_1, "%qT declared with greater visibility than the type of its field %qD",

     VAR_6, VAR_8);
      }

  VAR_7 = FUNC_7 (VAR_6);
  for (VAR_9 = 0; FUNC_0 (VAR_7, VAR_9, VAR_8); ++VAR_9)
    {
      int VAR_13 = FUNC_12 (FUNC_6 (VAR_8));

      if (VAR_13 == VAR_2)
        {
   if (!FUNC_10())
     FUNC_13 (0, "%qT has a base %qT whose type uses the anonymous namespace",

   VAR_6, FUNC_6 (VAR_8));
 }
      else if (VAR_10 < VAR_3
        && VAR_13 >= VAR_3)
 FUNC_13 (VAR_1, "%qT declared with greater visibility than its base %qT",

   VAR_6, FUNC_6 (VAR_8));
    }
}
