
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;


 int FUNC_0 (struct symbol*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_2 (struct symbol *VAR_2[], int VAR_3)
{
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4 += 1)
    if (FUNC_1 (FUNC_0 (VAR_2[VAR_4])) != VAR_1
 && FUNC_1 (FUNC_0 (VAR_2[VAR_4])) != VAR_0)
      return 1;

  return 0;
}
