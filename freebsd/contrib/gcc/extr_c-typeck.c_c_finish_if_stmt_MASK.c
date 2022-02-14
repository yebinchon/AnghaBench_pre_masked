
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
typedef int location_t ;



 int * FUNC_0 (int *) ;

 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;

 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int ) ;


 int FUNC_5 (int *) ;
 int * FUNC_6 (int const,int ,int *,int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_10 (int ,char*,int *) ;

void
FUNC_11 (location_t VAR_3, tree VAR_4, tree VAR_5,
    tree VAR_6, bool VAR_7)
{
  tree VAR_8;


  if (VAR_2 && VAR_7 && VAR_6 == ((void*)0))
    {
      tree VAR_9 = VAR_5;





      while (1)
 switch (FUNC_3 (VAR_9))
   {
   case 131:
     goto found;
   case 132:
     VAR_9 = FUNC_0 (VAR_9);
     break;
   case 130:
     VAR_9 = FUNC_8 (VAR_5);
     break;
   case 128:
   case 129:
     VAR_9 = FUNC_4 (VAR_9, 0);
     break;
   default:
     FUNC_9 ();
   }
    found:

      if (FUNC_1 (VAR_9))
  FUNC_10 (VAR_0,
    "%Hsuggest explicit braces to avoid ambiguous %<else%>",
    &VAR_3);
    }

  FUNC_7 (VAR_5, VAR_6);

  VAR_8 = FUNC_6 (131, VAR_1, VAR_4, VAR_5, VAR_6);
  FUNC_2 (VAR_8, VAR_3);
  FUNC_5 (VAR_8);
}
