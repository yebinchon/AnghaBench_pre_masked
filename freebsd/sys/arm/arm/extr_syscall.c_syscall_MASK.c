
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trapframe {int dummy; } ;
struct TYPE_2__ {int nap; } ;
struct thread {TYPE_1__ td_sa; } ;


 int FUNC_0 (struct thread*) ;
 int FUNC_1 (struct thread*) ;

__attribute__((used)) static void
FUNC_2(struct thread *VAR_0, struct trapframe *VAR_1)
{

 VAR_0->td_sa.nap = 4;
 FUNC_0(VAR_0);
 FUNC_1(VAR_0);
}
