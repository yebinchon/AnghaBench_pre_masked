
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct worker {scalar_t__ thread_num; TYPE_1__* daemon; int front; } ;
struct TYPE_2__ {int rc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(void* VAR_0)
{
 struct worker* VAR_1 = (struct worker*)VAR_0;
 FUNC_1(VAR_1->front);
 if(VAR_1->thread_num == 0)
  FUNC_0(VAR_1->daemon->rc);
}
