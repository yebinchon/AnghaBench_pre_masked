
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ) ;

int
FUNC_5 (rtx VAR_2)
{
  int VAR_3;
  int VAR_4;


  if (! FUNC_1 (VAR_2))
    return 0;


  if (FUNC_0 (FUNC_2 (VAR_2)) == VAR_0)
    {
      for (VAR_4 = 0, VAR_3 = 0; VAR_4 < FUNC_4 (FUNC_2 (VAR_2), 0); VAR_4++)
 if (FUNC_0 (FUNC_3 (FUNC_2 (VAR_2), 0, VAR_4)) == VAR_1)
   {

     if (VAR_3)
       return 1;
     else
       VAR_3 = 1;
   }
    }


  return 0;
}
