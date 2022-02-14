
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int cr_ref; int cr_loginclass; int cr_prison; int cr_ruidinfo; int cr_uidinfo; int cr_groups; int cr_ngroups; int cr_startcopy; int cr_endcopy; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct ucred*,struct ucred*) ;
 int FUNC_2 (int *,int *,unsigned int) ;
 int FUNC_3 (struct ucred*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ucred*,struct ucred*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void
FUNC_8(struct ucred *VAR_0, struct ucred *VAR_1)
{

 FUNC_0(VAR_0->cr_ref == 1, ("crcopy of shared ucred"));
 FUNC_2(&VAR_1->cr_startcopy, &VAR_0->cr_startcopy,
     (unsigned)((caddr_t)&VAR_1->cr_endcopy -
  (caddr_t)&VAR_1->cr_startcopy));
 FUNC_3(VAR_0, VAR_1->cr_ngroups, VAR_1->cr_groups);
 FUNC_7(VAR_0->cr_uidinfo);
 FUNC_7(VAR_0->cr_ruidinfo);
 FUNC_6(VAR_0->cr_prison);
 FUNC_4(VAR_0->cr_loginclass);






}
