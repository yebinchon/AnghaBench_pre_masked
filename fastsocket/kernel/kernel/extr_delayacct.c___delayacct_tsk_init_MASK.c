
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {TYPE_1__* delays; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct task_struct *VAR_2)
{
 VAR_2->delays = FUNC_0(VAR_1, VAR_0);
 if (VAR_2->delays)
  FUNC_1(&VAR_2->delays->lock);
}
