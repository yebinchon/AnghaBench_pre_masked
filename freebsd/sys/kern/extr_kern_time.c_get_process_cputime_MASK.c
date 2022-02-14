
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct timespec {int dummy; } ;
struct rusage {int dummy; } ;
struct TYPE_3__ {int rux_runtime; } ;
struct proc {TYPE_1__ p_rux; } ;
struct TYPE_4__ {struct proc* td_proc; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,struct timespec*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_5 (struct proc*,struct rusage*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(struct proc *VAR_2, struct timespec *VAR_3)
{
 uint64_t VAR_4;
 struct rusage VAR_5;

 FUNC_1(VAR_2);
 FUNC_5(VAR_2, &VAR_5);
 VAR_4 = VAR_2->p_rux.rux_runtime;
 if (VAR_0->td_proc == VAR_2)
  VAR_4 += FUNC_3() - FUNC_0(VAR_1);
 FUNC_2(VAR_2);
 FUNC_4(VAR_4, VAR_3);
}
