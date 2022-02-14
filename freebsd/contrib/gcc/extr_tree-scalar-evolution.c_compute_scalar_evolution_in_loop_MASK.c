
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct loop {scalar_t__ depth; } ;


 int FUNC_0 (struct loop*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct loop*,int ) ;
 struct loop* FUNC_2 (struct loop*,scalar_t__) ;

__attribute__((used)) static tree
FUNC_3 (struct loop *VAR_1,
      struct loop *VAR_2,
      tree VAR_3)
{
  tree VAR_4;
  if (VAR_2 == VAR_1)
    return VAR_3;

  VAR_2 = FUNC_2 (VAR_2, VAR_1->depth + 1);
  VAR_4 = FUNC_1 (VAR_2, VAR_3);

  return FUNC_0 (VAR_1, VAR_4, VAR_0);
}
