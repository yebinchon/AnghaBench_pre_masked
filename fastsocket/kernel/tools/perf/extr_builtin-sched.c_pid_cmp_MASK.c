
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_atoms {TYPE_1__* thread; } ;
struct TYPE_2__ {scalar_t__ pid; } ;



__attribute__((used)) static int FUNC_0(struct work_atoms *VAR_0, struct work_atoms *VAR_1)
{
 if (VAR_0->thread->pid < VAR_1->thread->pid)
  return -1;
 if (VAR_0->thread->pid > VAR_1->thread->pid)
  return 1;

 return 0;
}
