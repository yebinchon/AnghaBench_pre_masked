
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dataflow {int flags; TYPE_1__* problem; } ;
struct TYPE_2__ {int changeable_flags; } ;


 int FUNC_0 (int) ;

int
FUNC_1 (struct dataflow *VAR_0, int VAR_1)
{
  int VAR_2 = VAR_0->flags;

  FUNC_0 (!(VAR_1 & (~VAR_0->problem->changeable_flags)));

  VAR_0->flags |= VAR_1;

  return VAR_2;
}
