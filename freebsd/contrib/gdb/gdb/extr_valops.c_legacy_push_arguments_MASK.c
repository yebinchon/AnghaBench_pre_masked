
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,struct value*) ;

CORE_ADDR
FUNC_1 (int VAR_0, struct value **VAR_1, CORE_ADDR VAR_2,
         int VAR_3, CORE_ADDR VAR_4)
{

  int VAR_5;
  for (VAR_5 = VAR_0 - 1; VAR_5 >= 0; VAR_5--)
    VAR_2 = FUNC_0 (VAR_2, VAR_1[VAR_5]);
  return VAR_2;
}
