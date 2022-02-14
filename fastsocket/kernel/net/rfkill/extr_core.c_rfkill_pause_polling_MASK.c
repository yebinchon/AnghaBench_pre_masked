
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rfkill {int poll_work; TYPE_1__* ops; } ;
struct TYPE_2__ {int poll; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct rfkill *VAR_0)
{
 FUNC_0(!VAR_0);

 if (!VAR_0->ops->poll)
  return;

 FUNC_1(&VAR_0->poll_work);
}
