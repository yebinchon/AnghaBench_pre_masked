
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,scalar_t__) ;

int
FUNC_6 (rtx VAR_3)
{
  int VAR_4, VAR_5;
  rtx VAR_6;



  if (FUNC_1 (VAR_3) == VAR_2)
    VAR_6 = VAR_3;
  else if (FUNC_1 (VAR_3) == VAR_1)
    {
      VAR_6 = VAR_0;
      for (VAR_4 = 0; VAR_4 < FUNC_4 (VAR_3, 0); VAR_4++)
 {
   rtx VAR_7 = FUNC_3 (VAR_3, 0, VAR_4);
   if (FUNC_1 (VAR_7) == VAR_2)
     {
       if (VAR_6)
  return 0;
       VAR_6 = VAR_7;
     }
 }
      if (!VAR_6)
 return 0;
    }
  else
    return 0;

  VAR_5 = FUNC_5 (FUNC_2 (VAR_6), VAR_2);
  return VAR_5 > 0 ? VAR_5 : FUNC_0 (1);
}
