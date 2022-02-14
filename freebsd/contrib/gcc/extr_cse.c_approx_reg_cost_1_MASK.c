
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_3 (rtx *VAR_2, void *VAR_3)
{
  rtx VAR_4 = *VAR_2;
  int *VAR_5 = VAR_3;

  if (VAR_4 && FUNC_2 (VAR_4))
    {
      unsigned int VAR_6 = FUNC_1 (VAR_4);

      if (! FUNC_0 (VAR_6))
 {
   if (VAR_6 < VAR_0)
     {
       if (VAR_1)
  return 1;
       *VAR_5 += 2;
     }
   else
     *VAR_5 += 1;
 }
    }

  return 0;
}
