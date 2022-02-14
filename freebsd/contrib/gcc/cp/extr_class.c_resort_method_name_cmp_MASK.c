
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {int cookie; int (* new_value ) (scalar_t__*,int ) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ const VAR_0 ;
 int FUNC_1 (scalar_t__ const) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (scalar_t__*,int ) ;
 int FUNC_3 (scalar_t__*,int ) ;

__attribute__((used)) static int
FUNC_4 (const void* VAR_2, const void* VAR_3)
{
  const tree *const VAR_4 = (const tree *) VAR_2;
  const tree *const VAR_5 = (const tree *) VAR_3;
  if (*VAR_4 == VAR_0 && *VAR_5 == VAR_0)
    return 0;
  if (*VAR_4 == VAR_0)
    return -1;
  if (*VAR_5 == VAR_0)
    return 1;
  {
    tree VAR_6 = FUNC_0 (FUNC_1 (*VAR_4));
    tree VAR_7 = FUNC_0 (FUNC_1 (*VAR_5));
    VAR_1.new_value (&VAR_6, VAR_1.cookie);
    VAR_1.new_value (&VAR_7, VAR_1.cookie);
    if (VAR_6 < VAR_7)
      return -1;
  }
  return 1;
}
