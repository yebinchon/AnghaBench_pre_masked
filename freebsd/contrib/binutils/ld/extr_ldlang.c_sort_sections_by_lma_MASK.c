
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int owner; } ;
typedef TYPE_1__ asection ;


 scalar_t__ FUNC_0 (int ,TYPE_1__ const*) ;

__attribute__((used)) static int
FUNC_1 (const void *VAR_0, const void *VAR_1)
{
  const asection *VAR_2 = *(const asection **) VAR_0;
  const asection *VAR_3 = *(const asection **) VAR_1;

  if (FUNC_0 (VAR_2->owner, VAR_2)
      < FUNC_0 (VAR_3->owner, VAR_3))
    return -1;
  else if (FUNC_0 (VAR_2->owner, VAR_2)
    > FUNC_0 (VAR_3->owner, VAR_3))
    return 1;

  return 0;
}
