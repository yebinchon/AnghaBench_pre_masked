
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,scalar_t__) ;
 scalar_t__* VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_3 (int VAR_2, rtx VAR_3)
{
  rtx VAR_4;

  for (VAR_4 = VAR_1 [VAR_2]; VAR_4; VAR_4 = FUNC_0 (VAR_4, 1))
    if (FUNC_2 (FUNC_0 (VAR_4, 0), VAR_3))
      return;

  VAR_1 [VAR_2]
    = FUNC_1 (VAR_0, VAR_3,
         VAR_1 [VAR_2]);
}
