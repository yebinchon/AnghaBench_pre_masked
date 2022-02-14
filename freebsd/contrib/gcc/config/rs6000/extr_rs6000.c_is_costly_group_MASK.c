
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,scalar_t__,int,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static bool
FUNC_5 (rtx *VAR_0, rtx VAR_1)
{
  int VAR_2;
  rtx VAR_3;
  int VAR_4;
  int VAR_5 = FUNC_4 ();

  for (VAR_2 = 0; VAR_2 < VAR_5; VAR_2++)
    {
      rtx VAR_6 = VAR_0[VAR_2];
      if (!VAR_6)
 continue;
      for (VAR_3 = FUNC_0 (VAR_6); VAR_3 != 0; VAR_3 = FUNC_1 (VAR_3, 1))
 {
   rtx VAR_7 = FUNC_1 (VAR_3, 0);
   if (VAR_7 == VAR_1)
     {
       VAR_4 = FUNC_2 (VAR_6, VAR_3, VAR_1);
       if (FUNC_3 (VAR_6, VAR_1, VAR_3, VAR_4, 0))
  return 1;
     }
 }
    }

  return 0;
}
