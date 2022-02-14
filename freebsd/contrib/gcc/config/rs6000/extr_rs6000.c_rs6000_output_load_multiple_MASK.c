
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (char*,int *) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__,int ,int ) ;

const char *
FUNC_6 (rtx VAR_1[3])
{


  int VAR_2, VAR_3;
  int VAR_4 = FUNC_2 (VAR_1[0], 0);
  rtx VAR_5[10];

  if (FUNC_2 (VAR_1[0], 0) == 1)
    return "{l|lwz} %2,0(%1)";

  for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++)
    if (FUNC_5 (FUNC_1 (VAR_1[2]) + VAR_2,
      FUNC_1 (VAR_1[2]) + VAR_2 + 1, VAR_1[1], 0))
      {
 if (VAR_2 == VAR_4-1)
   {
     VAR_5[0] = FUNC_0 (4 * (VAR_4-1));
     VAR_5[1] = VAR_1[1];
     VAR_5[2] = VAR_1[2];
     FUNC_4 ("{lsi|lswi} %2,%1,%0\n\t{l|lwz} %1,%0(%1)", VAR_5);
     return "";
   }
 else if (VAR_2 == 0)
   {
     VAR_5[0] = FUNC_0 (4 * (VAR_4-1));
     VAR_5[1] = VAR_1[1];
     VAR_5[2] = FUNC_3 (VAR_0, FUNC_1 (VAR_1[2]) + 1);
     FUNC_4 ("{cal %1,4(%1)|addi %1,%1,4}\n\t{lsi|lswi} %2,%1,%0\n\t{l|lwz} %1,-4(%1)", VAR_5);
     return "";
   }
 else
   {
     for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
       if (VAR_3 != VAR_2)
  {
    VAR_5[0] = FUNC_0 (VAR_3 * 4);
    VAR_5[1] = VAR_1[1];
    VAR_5[2] = FUNC_3 (VAR_0, FUNC_1 (VAR_1[2]) + VAR_3);
    FUNC_4 ("{l|lwz} %2,%0(%1)", VAR_5);
  }
     VAR_5[0] = FUNC_0 (VAR_2 * 4);
     VAR_5[1] = VAR_1[1];
     FUNC_4 ("{l|lwz} %1,%0(%1)", VAR_5);
     return "";
   }
      }

  return "{lsi|lswi} %2,%1,%N0";
}
