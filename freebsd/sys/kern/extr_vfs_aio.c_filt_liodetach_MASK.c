
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* p_lio; } ;
struct knote {TYPE_2__ kn_ptr; } ;
struct knlist {int kl_lockarg; int (* kl_unlock ) (int ) ;int (* kl_lock ) (int ) ;} ;
struct TYPE_3__ {struct knlist klist; } ;


 int FUNC_0 (struct knlist*) ;
 int FUNC_1 (struct knlist*,struct knote*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct knote *VAR_0)
{
 struct knlist *VAR_1;

 VAR_1 = &VAR_0->kn_ptr.p_lio->klist;
 VAR_1->kl_lock(VAR_1->kl_lockarg);
 if (!FUNC_0(VAR_1))
  FUNC_1(VAR_1, VAR_0, 1);
 VAR_1->kl_unlock(VAR_1->kl_lockarg);
}
