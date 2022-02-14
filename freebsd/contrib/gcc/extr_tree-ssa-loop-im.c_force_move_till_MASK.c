
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct fmt_data {int loop; int orig_loop; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_7 (tree VAR_2, tree *VAR_3, void *VAR_4)
{
  tree VAR_5;
  struct fmt_data *VAR_6 = VAR_4;

  if (FUNC_2 (VAR_2) == VAR_0)
    {
      tree VAR_7 = FUNC_3 (VAR_2);
      tree VAR_8 = FUNC_4 (VAR_2);

      FUNC_5 (VAR_7, VAR_6->orig_loop, VAR_6->loop);
      FUNC_5 (VAR_8, VAR_6->orig_loop, VAR_6->loop);
    }

  if (FUNC_2 (*VAR_3) != VAR_1)
    return 1;

  VAR_5 = FUNC_1 (*VAR_3);
  if (FUNC_0 (VAR_5))
    return 1;

  FUNC_6 (VAR_5, VAR_6->orig_loop, VAR_6->loop);

  return 1;
}
