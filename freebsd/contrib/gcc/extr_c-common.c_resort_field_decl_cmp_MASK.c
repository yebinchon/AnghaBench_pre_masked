
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {int cookie; int (* new_value ) (scalar_t__*,int ) ;} ;


 scalar_t__ FUNC_0 (scalar_t__ const) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__ const) ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (scalar_t__*,int ) ;
 int FUNC_3 (scalar_t__*,int ) ;

__attribute__((used)) static int
FUNC_4 (const void *VAR_3, const void *VAR_4)
{
  const tree *const VAR_5 = (const tree *const) VAR_3;
  const tree *const VAR_6 = (const tree *const) VAR_4;

  if (FUNC_0 (*VAR_5) == FUNC_0 (*VAR_6))

    return (FUNC_1 (*VAR_6) == VAR_1) - (FUNC_1 (*VAR_5) == VAR_1);
  if (FUNC_0 (*VAR_5) == VAR_0)
    return -1;
  if (FUNC_0 (*VAR_6) == VAR_0)
    return 1;
  {
    tree VAR_7 = FUNC_0 (*VAR_5);
    tree VAR_8 = FUNC_0 (*VAR_6);
    VAR_2.new_value (&VAR_7, VAR_2.cookie);
    VAR_2.new_value (&VAR_8, VAR_2.cookie);
    if (VAR_7 < VAR_8)
      return -1;
  }
  return 1;
}
