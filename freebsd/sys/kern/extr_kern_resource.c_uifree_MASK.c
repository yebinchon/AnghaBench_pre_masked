
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uidinfo {scalar_t__ ui_sbsize; int ui_uid; scalar_t__ ui_proccnt; scalar_t__ ui_vmsize; int ui_racct; int ui_ref; } ;


 int FUNC_0 (struct uidinfo*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct uidinfo*,int ) ;
 int FUNC_2 (char*,int,unsigned long long) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_8(struct uidinfo *VAR_3)
{

 if (FUNC_5(&VAR_3->ui_ref))
  return;

 FUNC_6(&VAR_2);
 if (FUNC_4(&VAR_3->ui_ref) == 0) {
  FUNC_7(&VAR_2);
  return;
 }

 FUNC_3(&VAR_3->ui_racct);
 FUNC_0(VAR_3, VAR_1);
 FUNC_7(&VAR_2);

 if (VAR_3->ui_sbsize != 0)
  FUNC_2("freeing uidinfo: uid = %d, sbsize = %ld\n",
      VAR_3->ui_uid, VAR_3->ui_sbsize);
 if (VAR_3->ui_proccnt != 0)
  FUNC_2("freeing uidinfo: uid = %d, proccnt = %ld\n",
      VAR_3->ui_uid, VAR_3->ui_proccnt);
 if (VAR_3->ui_vmsize != 0)
  FUNC_2("freeing uidinfo: uid = %d, swapuse = %lld\n",
      VAR_3->ui_uid, (unsigned long long)VAR_3->ui_vmsize);
 FUNC_1(VAR_3, VAR_0);
}
