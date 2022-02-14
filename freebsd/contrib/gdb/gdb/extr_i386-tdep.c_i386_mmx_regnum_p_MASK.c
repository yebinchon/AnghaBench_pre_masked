
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gdbarch {int dummy; } ;
struct TYPE_2__ {int mm0_regnum; } ;


 TYPE_1__* FUNC_0 (struct gdbarch*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1 (struct gdbarch *VAR_1, int VAR_2)
{
  int VAR_3 = FUNC_0 (VAR_1)->mm0_regnum;

  if (VAR_3 < 0)
    return 0;

  return (VAR_2 >= VAR_3 && VAR_2 < VAR_3 + VAR_0);
}
