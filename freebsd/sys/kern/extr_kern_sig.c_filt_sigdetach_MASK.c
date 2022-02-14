
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc {int p_klist; } ;
struct TYPE_2__ {struct proc* p_proc; } ;
struct knote {TYPE_1__ kn_ptr; } ;


 int FUNC_0 (int ,struct knote*,int ) ;

__attribute__((used)) static void
FUNC_1(struct knote *VAR_0)
{
 struct proc *VAR_1 = VAR_0->kn_ptr.p_proc;

 FUNC_0(VAR_1->p_klist, VAR_0, 0);
}
