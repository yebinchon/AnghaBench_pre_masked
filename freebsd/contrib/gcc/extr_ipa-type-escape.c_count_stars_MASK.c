
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3 (tree* VAR_0)
{
  tree VAR_1 = *VAR_0;
  int VAR_2 = 0;
  VAR_1 = FUNC_2 (VAR_1);
  while (FUNC_0 (VAR_1))
    {
      VAR_1 = FUNC_2 (FUNC_1 (VAR_1));
      VAR_2++;
    }

  *VAR_0 = VAR_1;
  return VAR_2;
}
