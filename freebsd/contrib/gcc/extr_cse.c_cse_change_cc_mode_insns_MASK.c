
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_4 (rtx VAR_0, rtx VAR_1, rtx VAR_2)
{
  rtx VAR_3;

  for (VAR_3 = VAR_0; VAR_3 != VAR_1; VAR_3 = FUNC_1 (VAR_3))
    {
      if (! FUNC_0 (VAR_3))
 continue;

      if (FUNC_3 (VAR_2, VAR_3))
 return;

      FUNC_2 (VAR_3, VAR_2);
    }
}
