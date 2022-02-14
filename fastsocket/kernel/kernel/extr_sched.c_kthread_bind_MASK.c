
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr_cpus_allowed; } ;
struct task_struct {int flags; TYPE_1__ rt; int cpus_allowed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct task_struct*,int ) ;

void FUNC_3(struct task_struct *VAR_2, unsigned int VAR_3)
{

 if (!FUNC_2(VAR_2, VAR_1)) {
  FUNC_0(1);
  return;
 }

 VAR_2->cpus_allowed = FUNC_1(VAR_3);
 VAR_2->rt.nr_cpus_allowed = 1;
 VAR_2->flags |= VAR_0;
}
