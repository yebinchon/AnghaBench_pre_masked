
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s; } ;
struct spelling {scalar_t__ kind; TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
 struct spelling* VAR_1 ;
 struct spelling* VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (void)
{
  int VAR_3 = 0;
  struct spelling *VAR_4;

  for (VAR_4 = VAR_2; VAR_4 < VAR_1; VAR_4++)
    {
      if (VAR_4->kind == VAR_0)
 VAR_3 += 25;
      else
 VAR_3 += FUNC_0 (VAR_4->u.s) + 1;
    }

  return VAR_3;
}
