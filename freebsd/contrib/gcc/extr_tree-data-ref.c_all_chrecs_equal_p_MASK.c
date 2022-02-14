
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static bool
FUNC_3 (tree VAR_0)
{
  int VAR_1;

  for (VAR_1 = 0; VAR_1 < FUNC_1 (VAR_0) - 1; VAR_1++)
    if (!FUNC_2 (FUNC_0 (VAR_0, VAR_1),
     FUNC_0 (VAR_0, VAR_1 + 1)))
      return 0;

  return 1;
}
