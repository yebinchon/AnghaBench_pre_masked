
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uidinfo {int ui_uid; } ;
struct ucred {struct uidinfo* cr_uidinfo; int cr_uid; } ;


 int FUNC_0 (struct uidinfo*) ;
 int FUNC_1 (struct uidinfo*) ;

void
FUNC_2(struct ucred *VAR_0, struct uidinfo *VAR_1)
{

 VAR_0->cr_uid = VAR_1->ui_uid;
 FUNC_1(VAR_1);
 FUNC_0(VAR_0->cr_uidinfo);
 VAR_0->cr_uidinfo = VAR_1;
}
