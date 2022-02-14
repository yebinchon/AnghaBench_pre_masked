
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

int
FUNC_5 (tree VAR_0, tree VAR_1)
{
  tree VAR_2 = FUNC_2 (VAR_0);
  tree VAR_3;
  int VAR_4;
  int VAR_5 = 0;

  for (VAR_4 = 0; FUNC_0 (VAR_2, VAR_4, VAR_3); VAR_4++)
    {
      tree VAR_6 = FUNC_1 (VAR_3);

      if (FUNC_3 (VAR_6))
 VAR_5 += FUNC_4 (VAR_6, VAR_1);
    }
  return VAR_5;
}
