
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {scalar_t__ pw_uid; int pw_gid; int pw_name; } ;
struct pam_saved_cred {int ngroups; int groups; int egid; scalar_t__ euid; } ;
typedef int pam_handle_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct pam_saved_cred*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 struct pam_saved_cred* FUNC_3 (int,int) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int VAR_7 ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,void const**) ;
 int FUNC_11 (int *,int ,struct pam_saved_cred*,int *) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (scalar_t__) ;

int
FUNC_14(pam_handle_t *VAR_8,
 const struct passwd *VAR_9)
{
 struct pam_saved_cred *VAR_10;
 const void *VAR_11;
 int VAR_12;

 FUNC_0(VAR_9->pw_uid);
 VAR_12 = FUNC_10(VAR_8, VAR_4, &VAR_11);
 if (VAR_12 == VAR_5 && VAR_11 != ((void*)0)) {
  FUNC_8(VAR_2,
      "already operating under borrowed credentials");
  FUNC_2(VAR_6);
 }
 if (FUNC_5() != 0 && FUNC_5() != VAR_9->pw_uid) {
  FUNC_8(VAR_2, "called with non-zero euid: %d",
      (int)FUNC_5());
  FUNC_2(VAR_3);
 }
 VAR_10 = FUNC_3(1, sizeof *VAR_10);
 if (VAR_10 == ((void*)0))
  FUNC_2(VAR_1);
 VAR_10->euid = FUNC_5();
 VAR_10->egid = FUNC_4();
 VAR_12 = FUNC_6(VAR_0, VAR_10->groups);
 if (VAR_12 < 0) {
  FUNC_1(VAR_10);
  FUNC_2(VAR_6);
 }
 VAR_10->ngroups = VAR_12;
 VAR_12 = FUNC_11(VAR_8, VAR_4, VAR_10, &VAR_7);
 if (VAR_12 != VAR_5) {
  FUNC_1(VAR_10);
  FUNC_2(VAR_12);
 }
 if (FUNC_5() == VAR_9->pw_uid)
  FUNC_2(VAR_5);
 if (FUNC_7(VAR_9->pw_name, VAR_9->pw_gid) < 0 ||
       FUNC_12(VAR_9->pw_gid) < 0 || FUNC_13(VAR_9->pw_uid) < 0) {
  FUNC_9(VAR_8);
  FUNC_2(VAR_6);
 }
 FUNC_2(VAR_5);
}
