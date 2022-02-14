
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,int,int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4 (rtx *VAR_1, int VAR_2)
{
  int VAR_3, VAR_4;

  if (VAR_0 != 0)
    for (VAR_3 = VAR_2 - 1; VAR_3 >= 0; VAR_3--)
      if (FUNC_1 (VAR_0, VAR_1[VAR_3]))
 {
   for (VAR_4 = VAR_2 - 1; VAR_4 > VAR_3; VAR_4--)
     if (FUNC_3 (VAR_1[VAR_4]) >= 0
  && FUNC_0 (VAR_1[VAR_4]))
       {
  FUNC_2 (VAR_1, VAR_3, VAR_4);
  break;
       }
   break;
 }
}
