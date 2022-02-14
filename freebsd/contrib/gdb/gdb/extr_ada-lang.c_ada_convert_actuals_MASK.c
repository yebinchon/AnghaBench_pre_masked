
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct value*) ;
 struct value* FUNC_3 (struct value*,int ,int *) ;

void
FUNC_4 (struct value *VAR_0, int VAR_1, struct value *VAR_2[],
       CORE_ADDR *VAR_3)
{
  int VAR_4;

  if (FUNC_1 (FUNC_2 (VAR_0)) == 0
      || VAR_1 != FUNC_1 (FUNC_2 (VAR_0)))
    return;

  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4 += 1)
    VAR_2[VAR_4] =
      FUNC_3 (VAR_2[VAR_4], FUNC_0 (FUNC_2 (VAR_0), VAR_4), VAR_3);
}
