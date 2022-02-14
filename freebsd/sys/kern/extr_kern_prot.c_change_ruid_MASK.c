
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uidinfo {int ui_uid; } ;
struct ucred {struct uidinfo* cr_ruidinfo; int cr_ruid; } ;


 int FUNC_0 (struct uidinfo*,int,int ) ;
 int FUNC_1 (struct uidinfo*) ;
 int FUNC_2 (struct uidinfo*) ;

void
FUNC_3(struct ucred *VAR_0, struct uidinfo *VAR_1)
{

 (void)FUNC_0(VAR_0->cr_ruidinfo, -1, 0);
 VAR_0->cr_ruid = VAR_1->ui_uid;
 FUNC_2(VAR_1);
 FUNC_1(VAR_0->cr_ruidinfo);
 VAR_0->cr_ruidinfo = VAR_1;
 (void)FUNC_0(VAR_0->cr_ruidinfo, 1, 0);
}
