
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 scalar_t__ VAR_1 ;
 int * FUNC_9 (int ) ;
 int * FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,int **) ;
 int * VAR_2 ;
 int FUNC_13 (int *,int *,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static void
FUNC_18 (tree VAR_3, const int VAR_4)
{
  tree VAR_5;

  FUNC_3 ("name", VAR_3);

  if (FUNC_6 (VAR_3) == VAR_1)
    {


      VAR_3 = FUNC_10 (FUNC_9 (FUNC_7 (VAR_3)));
      VAR_5 = FUNC_8 (FUNC_9 (FUNC_7 (VAR_3)));
    }
  else
    VAR_5 = (FUNC_1 (VAR_3) == ((void*)0)) ? ((void*)0) : FUNC_0 (VAR_3);






  if (VAR_5 == ((void*)0)
      || VAR_5 == VAR_2
      || FUNC_2 (VAR_5)
      || (VAR_4 && FUNC_6 (VAR_5) == VAR_0))
    {
      tree VAR_6;

      if (FUNC_12 (VAR_3, &VAR_6))
 {

   FUNC_17 (FUNC_5 (VAR_6));
   FUNC_15 (FUNC_4 (VAR_6));
 }
      else

 FUNC_16 (VAR_3);
    }
  else
    {



      if (!VAR_4)
 {






   tree VAR_7 = VAR_3;
   while (VAR_5 != ((void*)0) && VAR_5 != VAR_2)
     {

       if (VAR_5 != ((void*)0) && FUNC_11 (VAR_5))
  VAR_5 = FUNC_10 (VAR_5);

       if (FUNC_6 (VAR_5) == VAR_0)
  {


    FUNC_13 (VAR_5, VAR_7, VAR_3);
    return;
  }

       VAR_7 = VAR_5;
       VAR_5 = FUNC_0 (VAR_5);
     }


 }


      FUNC_14 (VAR_3);
    }
}
