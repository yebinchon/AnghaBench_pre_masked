
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int const VAR_0 ;
 int const FUNC_2 (int ) ;


 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ) ;

int
FUNC_6 (rtx VAR_1)
{
  switch (FUNC_2 (VAR_1))
    {
    case 130:

      return FUNC_0 (VAR_1);
    case 128:
      if (FUNC_2 (FUNC_3 (VAR_1)) == 130)

 return FUNC_0 (FUNC_3 (VAR_1)) + 1;
      else
 return -1;
    case 129:
      if (FUNC_2 (FUNC_4 (VAR_1, 0, 0)) == 128
   && FUNC_2 (FUNC_3 (FUNC_4 (VAR_1, 0, 0))) == 130)
 {


   int VAR_2;
   int VAR_3;


   for (VAR_2 = FUNC_5 (VAR_1, 0); VAR_2 > 0; VAR_2--)
     {
       if (FUNC_2 (FUNC_4 (VAR_1, 0, VAR_2 - 1)) == 128)
  break;
       if (FUNC_2 (FUNC_4 (VAR_1, 0, VAR_2 - 1)) != VAR_0)
  return -1;
     }


   VAR_3 = VAR_2;




   for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
     {
       rtx VAR_4 = FUNC_4 (VAR_1, 0, VAR_2);
       if (FUNC_2 (VAR_4) != 128)
  return -1;
       if (FUNC_2 (FUNC_3 (VAR_4)) != 130)
  return -1;


       if (FUNC_1 (FUNC_3 (VAR_4))
    != FUNC_1 (FUNC_3 (FUNC_4 (VAR_1, 0, 0))))
  return -1;
     }
   return (FUNC_0 (FUNC_3 (FUNC_4 (VAR_1, 0, 0)))
    + VAR_3);
 }
      else if (FUNC_2 (FUNC_4 (VAR_1, 0, 0)) == 130)
 {


   int VAR_5;


   for (VAR_5 = FUNC_5 (VAR_1, 0) - 1; VAR_5 > 0; VAR_5--)
     if (FUNC_2 (FUNC_4 (VAR_1, 0, VAR_5)) != VAR_0)
       return -1;

   return FUNC_0 (FUNC_4 (VAR_1, 0, 0));
 }
      else
 return -1;
    default:
      return -1;
    }
}
