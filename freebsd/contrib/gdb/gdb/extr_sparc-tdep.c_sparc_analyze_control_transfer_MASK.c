
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (int) ;
 unsigned long FUNC_7 (scalar_t__) ;

__attribute__((used)) static CORE_ADDR
FUNC_8 (CORE_ADDR VAR_0, CORE_ADDR *VAR_1)
{
  unsigned long VAR_2 = FUNC_7 (VAR_0);
  int VAR_3 = FUNC_1 (VAR_2) & 0x7;
  int VAR_4 = 0;
  long VAR_5 = 0;

  if (FUNC_4 (VAR_2) == 0 && FUNC_5 (VAR_2) == 3 && (VAR_2 & 0x1000000) == 0)
    {

      VAR_4 = 1;
      VAR_3 = 1;
    }
  else if (FUNC_4 (VAR_2) == 0 && FUNC_5 (VAR_2) == 6)
    {

      VAR_4 = 1;
      VAR_5 = 4 * FUNC_3 (VAR_2);
    }
  else if (FUNC_4 (VAR_2) == 0 && FUNC_5 (VAR_2) == 5)
    {


      VAR_4 = 1;
      VAR_5 = 4 * FUNC_2 (VAR_2);
    }
  else if (FUNC_4 (VAR_2) == 0 && FUNC_5 (VAR_2) == 2)
    {

      VAR_4 = 1;
      VAR_5 = 4 * FUNC_3 (VAR_2);
    }
  else if (FUNC_4 (VAR_2) == 0 && FUNC_5 (VAR_2) == 1)
    {

      VAR_4 = 1;
      VAR_5 = 4 * FUNC_2 (VAR_2);
    }





  if (VAR_4)
    {
      if (VAR_3)
 {


   return (FUNC_0 (VAR_2) ? *VAR_1 + 4 : 0);
 }
      else
 {




   if (FUNC_1 (VAR_2) == 0x0)
     VAR_0 = *VAR_1, VAR_5 = 4;
   if (FUNC_0 (VAR_2))
     *VAR_1 = 0;

   FUNC_6 (VAR_5 != 0);
   return VAR_0 + VAR_5;
 }
    }

  return 0;
}
