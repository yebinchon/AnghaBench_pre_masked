
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc {int p_klist; } ;
struct TYPE_2__ {struct proc* p_proc; } ;
struct knote {int kn_flags; TYPE_1__ kn_ptr; } ;


 int VAR_0 ;
 struct proc* VAR_1 ;
 int FUNC_0 (int ,struct knote*,int ) ;

__attribute__((used)) static int
FUNC_1(struct knote *VAR_2)
{
 struct proc *VAR_3 = VAR_1;

 VAR_2->kn_ptr.p_proc = VAR_3;
 VAR_2->kn_flags |= VAR_0;

 FUNC_0(VAR_3->p_klist, VAR_2, 0);

 return (0);
}
