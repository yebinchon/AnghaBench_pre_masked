
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct loop {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct loop* FUNC_3 (int ,struct loop*) ;
 struct loop* FUNC_4 (int ,struct loop*) ;

__attribute__((used)) static bool
FUNC_5 (tree VAR_1, tree *VAR_2, void *VAR_3)
{
  struct loop *VAR_4 = VAR_3, *VAR_5;



  if (FUNC_0 (VAR_1) == VAR_0)
    {
      tree VAR_6 = FUNC_1 (VAR_1);
      tree VAR_7 = FUNC_2 (VAR_1);

      VAR_5 = FUNC_4 (VAR_6, VAR_4);
      if (!VAR_5)
 return 0;

      VAR_5 = FUNC_4 (VAR_7, VAR_4);
      if (!VAR_5)
 return 0;
    }

  VAR_5 = FUNC_3 (*VAR_2, VAR_4);
  if (!VAR_5)
    return 0;

  return 1;
}
