
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;



 int FUNC_0 (int *) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

 int FUNC_1 (int *) ;

 int * FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;

rtx
FUNC_6 (rtx VAR_3, rtx VAR_4)
{
  rtx VAR_5 = ((void*)0);
  int VAR_6 = 1;
  int VAR_7;

  if (FUNC_0 (VAR_4) == VAR_1)
    {
      for (VAR_7 = 0; VAR_7 < FUNC_3 (VAR_4, 0); VAR_7++)
 {
   rtx VAR_8 = FUNC_2 (VAR_4, 0, VAR_7);
   switch (FUNC_0 (VAR_8))
     {
     case 128:
     case 130:
       break;

     case 129:
       if (!VAR_6)
  {
    if (FUNC_4 (VAR_3, VAR_2, FUNC_1 (VAR_5))
        && !FUNC_5 (VAR_5))
      VAR_5 = ((void*)0);
    else
      VAR_6 = 1;
  }
       if (!VAR_5)
  VAR_5 = VAR_8, VAR_6 = 0;
       else if (!FUNC_4 (VAR_3, VAR_2, FUNC_1 (VAR_8))
         || FUNC_5 (VAR_8))
  return VAR_0;
       break;

     default:
       return VAR_0;
     }
 }
    }
  return VAR_5;
}
