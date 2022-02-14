
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucred {scalar_t__ cr_uid; scalar_t__ cr_svuid; scalar_t__ cr_ruid; int cr_ngroups; int cr_svgid; int cr_rgid; int * cr_groups; } ;
struct proc {struct ucred* p_ucred; } ;
struct pmc {TYPE_1__* pm_owner; } ;
struct TYPE_2__ {struct proc* po_owner; } ;


 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct ucred*) ;
 int FUNC_3 (struct ucred*) ;
 int FUNC_4 (int ,struct ucred*) ;

__attribute__((used)) static int
FUNC_5(struct pmc *VAR_0, struct proc *VAR_1)
{
 struct proc *VAR_2;
 struct ucred *VAR_3, *VAR_4;
 int VAR_5, VAR_6;





 if ((VAR_2 = VAR_0->pm_owner->po_owner) == VAR_1)
  return 0;

 FUNC_0(VAR_2);
 VAR_3 = VAR_2->p_ucred;
 FUNC_3(VAR_3);
 FUNC_1(VAR_2);

 FUNC_0(VAR_1);
 VAR_4 = VAR_1->p_ucred;
 FUNC_3(VAR_4);
 FUNC_1(VAR_1);






 VAR_5 = VAR_3->cr_uid != VAR_4->cr_uid &&
     VAR_3->cr_uid != VAR_4->cr_svuid &&
     VAR_3->cr_uid != VAR_4->cr_ruid;





 for (VAR_6 = 0; !VAR_5 && VAR_6 < VAR_4->cr_ngroups; VAR_6++)
  VAR_5 = !FUNC_4(VAR_4->cr_groups[VAR_6], VAR_3);


 if (VAR_5 == 0)
  VAR_5 = !FUNC_4(VAR_4->cr_rgid, VAR_3) ||
      !FUNC_4(VAR_4->cr_svgid, VAR_3);

 FUNC_2(VAR_4);
 FUNC_2(VAR_3);

 return !VAR_5;
}
