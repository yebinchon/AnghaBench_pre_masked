
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct loop {int dummy; } ;
typedef enum tree_code_class { ____Placeholder_tree_code_class } tree_code_class ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 unsigned int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (int ,struct loop*,struct loop*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_7 (tree VAR_5, struct loop *VAR_6, struct loop *VAR_7)
{
  enum tree_code_class VAR_8 = FUNC_3 (FUNC_2 (VAR_5));
  unsigned VAR_9, VAR_10;

  if (FUNC_2 (VAR_5) == VAR_0)
    {
      tree VAR_11 = FUNC_1 (VAR_5);
      if (FUNC_0 (VAR_11))
 return;

      FUNC_6 (VAR_11, VAR_6, VAR_7);
      return;
    }

  if (VAR_8 != VAR_4
      && VAR_8 != VAR_1
      && VAR_8 != VAR_3
      && VAR_8 != VAR_2)
    return;

  VAR_10 = FUNC_4 (FUNC_2 (VAR_5));
  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
    FUNC_7 (FUNC_5 (VAR_5, VAR_9), VAR_6, VAR_7);
}
