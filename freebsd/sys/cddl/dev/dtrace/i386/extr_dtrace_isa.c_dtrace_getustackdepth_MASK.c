
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trapframe {uintptr_t tf_eip; uintptr_t tf_ebp; uintptr_t tf_esp; } ;
typedef int proc_t ;
struct TYPE_2__ {struct trapframe* td_frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int * VAR_2 ;
 TYPE_1__* VAR_3 ;
 uintptr_t FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int *,int ,uintptr_t,uintptr_t) ;

int
FUNC_3(void)
{
 proc_t *VAR_4 = VAR_2;
 struct trapframe *VAR_5;
 uintptr_t VAR_6, VAR_7, VAR_8;
 int VAR_9 = 0;

 if (VAR_4 == ((void*)0) || (VAR_5 = VAR_3->td_frame) == ((void*)0))
  return (0);

 if (FUNC_0(VAR_1))
  return (-1);

 VAR_6 = VAR_5->tf_eip;
 VAR_7 = VAR_5->tf_ebp;
 VAR_8 = VAR_5->tf_esp;

 if (FUNC_0(VAR_0)) {
  VAR_6 = FUNC_1((void *) VAR_8);
  VAR_9++;
 }

 VAR_9 += FUNC_2(((void*)0), 0, VAR_6, VAR_7);

 return (VAR_9);
}
