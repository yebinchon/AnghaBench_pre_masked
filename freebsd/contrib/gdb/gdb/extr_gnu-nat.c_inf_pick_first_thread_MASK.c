
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* threads; scalar_t__ task; } ;
struct TYPE_3__ {int tid; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0 (void)
{
  if (VAR_0->task && VAR_0->threads)

    return VAR_0->threads->tid;
  else

    return VAR_1;
}
