
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct loop {TYPE_1__* single_exit; } ;
typedef TYPE_1__* edge ;
struct TYPE_3__ {int dest; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 struct loop* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static tree
FUNC_7 (tree VAR_2)
{
  struct loop *VAR_3;
  edge VAR_4;
  tree VAR_5;

  if (VAR_2 == VAR_0
      || FUNC_4 (VAR_2) != VAR_1)
    return VAR_0;

  VAR_3 = FUNC_5 (FUNC_3 (VAR_2));
  VAR_4 = VAR_3->single_exit;
  if (!VAR_4)
    return VAR_0;

  for (VAR_5 = FUNC_6 (VAR_4->dest); VAR_5; VAR_5 = FUNC_1 (VAR_5))
    if (FUNC_0 (VAR_5, VAR_4) == VAR_2)
      return FUNC_2 (VAR_5);

  return VAR_0;
}
