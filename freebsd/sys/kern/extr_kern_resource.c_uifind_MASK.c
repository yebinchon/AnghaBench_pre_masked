
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct uidinfo {scalar_t__ ui_uid; int ui_racct; int ui_ref; } ;
struct ucred {struct uidinfo* cr_ruidinfo; struct uidinfo* cr_uidinfo; } ;
struct TYPE_2__ {struct ucred* td_ucred; } ;


 int FUNC_0 (int ,struct uidinfo*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (struct uidinfo*,int ) ;
 struct uidinfo* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (struct uidinfo*) ;
 struct uidinfo* FUNC_12 (scalar_t__) ;

struct uidinfo *
FUNC_13(uid_t VAR_6)
{
 struct uidinfo *VAR_7, *VAR_8;
 struct ucred *VAR_9;

 VAR_9 = VAR_3->td_ucred;
 if (VAR_9->cr_uidinfo->ui_uid == VAR_6) {
  VAR_8 = VAR_9->cr_uidinfo;
  FUNC_11(VAR_8);
  return (VAR_8);
 } else if (VAR_9->cr_ruidinfo->ui_uid == VAR_6) {
  VAR_8 = VAR_9->cr_ruidinfo;
  FUNC_11(VAR_8);
  return (VAR_8);
 }

 FUNC_7(&VAR_5);
 VAR_8 = FUNC_12(VAR_6);
 FUNC_8(&VAR_5);
 if (VAR_8 != ((void*)0))
  return (VAR_8);

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_0, VAR_1 | VAR_2);
 FUNC_4(&VAR_7->ui_racct);
 FUNC_6(&VAR_7->ui_ref, 1);
 VAR_7->ui_uid = VAR_6;

 FUNC_9(&VAR_5);





 if ((VAR_8 = FUNC_12(VAR_6)) == ((void*)0)) {
  FUNC_0(FUNC_1(VAR_6), VAR_7, VAR_4);
  FUNC_10(&VAR_5);
  VAR_8 = VAR_7;
 } else {
  FUNC_10(&VAR_5);
  FUNC_5(&VAR_7->ui_racct);
  FUNC_2(VAR_7, VAR_0);
 }
 return (VAR_8);
}
