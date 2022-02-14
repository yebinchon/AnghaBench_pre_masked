
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_7 (tree *VAR_1, tree *VAR_2)
{
  int VAR_3;
  int VAR_4;
  if ((!FUNC_3 (*VAR_1) && !FUNC_1 (*VAR_1))
      || (!FUNC_3 (*VAR_2) && !FUNC_1 (*VAR_2)))
    {
      *VAR_1 = FUNC_5 (VAR_0,
         FUNC_6 (*VAR_1));
      *VAR_2 = FUNC_5 (VAR_0,
         FUNC_6 (*VAR_2));
      return;
    }

  VAR_3 = FUNC_6 (*VAR_1);
  VAR_4 = FUNC_6 (*VAR_2);

  if (FUNC_1 (*VAR_1))
    *VAR_1 = FUNC_2 (*VAR_1);
  else
    *VAR_1 = FUNC_0 (*VAR_1);
  if (FUNC_1 (*VAR_2))
    *VAR_2 = FUNC_2 (*VAR_2);
  else
    *VAR_2 = FUNC_0 (*VAR_2);

  FUNC_7 (VAR_1, VAR_2);
  *VAR_1 = FUNC_4 (*VAR_1);
  *VAR_2 = FUNC_4 (*VAR_2);
  *VAR_1 = FUNC_5 (*VAR_1, VAR_3);
  *VAR_2 = FUNC_5 (*VAR_2, VAR_4);
}
