
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int * FUNC_0 (scalar_t__ const) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int * VAR_0 ;
 int * FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (char) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void
FUNC_7 (tree VAR_2, const int VAR_3, const tree VAR_4)
{
  tree VAR_5;
  tree VAR_6 = VAR_4 ? FUNC_0 (VAR_4) : VAR_0;



  int VAR_7 = 1;
  if (VAR_3)
    {
      VAR_2 = FUNC_2 (VAR_2);
      VAR_6 = VAR_6 ? FUNC_2 (VAR_6) : VAR_0;

      while (VAR_6 && FUNC_1 (VAR_6))
 {
   VAR_2 = FUNC_2 (VAR_2);
   VAR_6 = FUNC_2 (VAR_6);
 }
    }

  for (VAR_5 = VAR_2;
       VAR_2;
       VAR_2 = FUNC_2 (VAR_2))
    {
      tree VAR_8 = FUNC_3 (VAR_2);
      if (VAR_8 == VAR_1)
 {



   if (VAR_2 == VAR_5)
     FUNC_6 (VAR_8);


   VAR_7 = 0;

   FUNC_4 (FUNC_2 (VAR_2) == ((void*)0));
 }
      else
 FUNC_6 (VAR_8);
    }

  if (VAR_7)

    FUNC_5 ('z');
}
