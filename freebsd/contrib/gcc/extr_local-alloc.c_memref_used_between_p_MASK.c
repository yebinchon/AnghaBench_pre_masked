
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

__attribute__((used)) static int
FUNC_7 (rtx VAR_0, rtx VAR_1, rtx VAR_2)
{
  rtx VAR_3;

  for (VAR_3 = FUNC_3 (VAR_1); VAR_3 != FUNC_3 (VAR_2);
       VAR_3 = FUNC_3 (VAR_3))
    {
      if (!FUNC_2 (VAR_3))
 continue;

      if (FUNC_5 (VAR_0, FUNC_4 (VAR_3)))
 return 1;


      if (FUNC_0 (VAR_3)
   && (! FUNC_1 (VAR_3)
       || FUNC_6 (VAR_3)))
 return 1;
    }

  return 0;
}
