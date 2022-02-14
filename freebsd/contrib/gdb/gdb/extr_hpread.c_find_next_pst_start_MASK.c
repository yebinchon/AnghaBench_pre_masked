
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int end; int start; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0 (int VAR_2)
{
  int VAR_3;

  for (VAR_3 = VAR_1 - 1; VAR_3 >= 0; VAR_3--)
    if (VAR_0[VAR_3].end <= VAR_2)
      return (VAR_3 == VAR_1 - 1) ? 0 : VAR_0[VAR_3 + 1].start - 1;

  if (VAR_0[0].start > VAR_2)
    return VAR_0[0].start - 1;

  return 0;
}
