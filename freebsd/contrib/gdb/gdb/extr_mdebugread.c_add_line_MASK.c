
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct linetable {size_t nitems; TYPE_1__* item; } ;
struct TYPE_2__ {int line; int pc; } ;
typedef int CORE_ADDR ;



__attribute__((used)) static int
FUNC_0 (struct linetable *VAR_0, int VAR_1, CORE_ADDR VAR_2, int VAR_3)
{


  if (VAR_1 == 0)
    VAR_1 = 1;
  if (VAR_3 == 0)
    VAR_3 = -2;

  if (VAR_3 == VAR_1)
    return VAR_1;

  VAR_0->item[VAR_0->nitems].line = VAR_1;
  VAR_0->item[VAR_0->nitems++].pc = VAR_2 << 2;
  return VAR_1;
}
