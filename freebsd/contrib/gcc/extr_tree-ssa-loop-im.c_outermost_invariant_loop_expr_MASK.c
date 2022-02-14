
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct loop {int dummy; } ;
typedef enum tree_code_class { ____Placeholder_tree_code_class } tree_code_class ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,unsigned int) ;
 scalar_t__ FUNC_4 (struct loop*,struct loop*) ;
 scalar_t__ FUNC_5 (int ) ;
 struct loop* FUNC_6 (int ,struct loop*) ;
 struct loop* FUNC_7 (struct loop*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static struct loop *
FUNC_8 (tree VAR_6, struct loop *VAR_7)
{
  enum tree_code_class VAR_8 = FUNC_1 (FUNC_0 (VAR_6));
  unsigned VAR_9, VAR_10;
  struct loop *VAR_11 = FUNC_7 (VAR_7, 1), *VAR_12;

  if (FUNC_0 (VAR_6) == VAR_1
      || FUNC_0 (VAR_6) == VAR_0
      || FUNC_5 (VAR_6))
    return FUNC_6 (VAR_6, VAR_7);

  if (VAR_8 != VAR_5
      && VAR_8 != VAR_2
      && VAR_8 != VAR_4
      && VAR_8 != VAR_3)
    return ((void*)0);

  VAR_10 = FUNC_2 (FUNC_0 (VAR_6));
  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
    {
      VAR_12 = FUNC_8 (FUNC_3 (VAR_6, VAR_9), VAR_7);
      if (!VAR_12)
 return ((void*)0);

      if (FUNC_4 (VAR_11, VAR_12))
 VAR_11 = VAR_12;
    }

  return VAR_11;
}
