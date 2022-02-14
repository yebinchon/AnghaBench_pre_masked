
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trapframe {uintptr_t srr0; uintptr_t* fixreg; } ;
typedef int proc_t ;
struct TYPE_2__ {struct trapframe* td_frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int * VAR_3 ;
 TYPE_1__* VAR_4 ;
 uintptr_t FUNC_2 (void*) ;
 uintptr_t FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (int *,int ,uintptr_t,uintptr_t) ;

int
FUNC_5(void)
{
 proc_t *VAR_5 = VAR_3;
 struct trapframe *VAR_6;
 uintptr_t VAR_7, VAR_8;
 int VAR_9 = 0;

 if (VAR_5 == ((void*)0) || (VAR_6 = VAR_4->td_frame) == ((void*)0))
  return (0);

 if (FUNC_0(VAR_1))
  return (-1);

 VAR_7 = VAR_6->srr0;
 VAR_8 = VAR_6->fixreg[1];

 if (FUNC_0(VAR_0)) {
  if (FUNC_1(VAR_5, VAR_2)) {
   VAR_7 = FUNC_2((void *) VAR_8);
  }
  else
   VAR_7 = FUNC_3((void *) VAR_8);
  VAR_9++;
 }

 VAR_9 += FUNC_4(((void*)0), 0, VAR_7, VAR_8);

 return (VAR_9);
}
