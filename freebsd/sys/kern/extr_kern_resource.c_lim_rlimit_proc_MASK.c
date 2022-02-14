
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rlimit {int dummy; } ;
struct proc {TYPE_2__* p_sysent; TYPE_1__* p_limit; } ;
struct TYPE_4__ {int (* sv_fixlimit ) (struct rlimit*,int) ;} ;
struct TYPE_3__ {struct rlimit* pl_rlimit; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct proc*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct rlimit*,int) ;

void
FUNC_3(struct proc *VAR_2, int VAR_3, struct rlimit *VAR_4)
{

 FUNC_1(VAR_2, VAR_0);
 FUNC_0(VAR_3 >= 0 && VAR_3 < VAR_1,
     ("request for invalid resource limit"));
 *VAR_4 = VAR_2->p_limit->pl_rlimit[VAR_3];
 if (VAR_2->p_sysent->sv_fixlimit != ((void*)0))
  VAR_2->p_sysent->sv_fixlimit(VAR_4, VAR_3);
}
