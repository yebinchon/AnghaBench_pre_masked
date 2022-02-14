
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {scalar_t__ pw_gid; scalar_t__ pw_uid; int pw_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (int ,int,int ,int ,int ,int) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int VAR_8 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,...) ;
 struct passwd* FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 char* FUNC_9 (int ) ;
 char* VAR_9 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_12(const char *VAR_11, const char *VAR_12)
{
 struct passwd *VAR_13 = ((void*)0);

 if (VAR_12 && !VAR_11) {
  FUNC_6(VAR_10, "%s: Chroot without dropping root is insecure\n",
   VAR_9);
  FUNC_5(1);
 }

 VAR_13 = FUNC_7(VAR_11);
 if (VAR_13) {
  if (VAR_12) {
   if (FUNC_4(VAR_12) != 0 || FUNC_3 ("/") != 0) {
    FUNC_6(VAR_10, "%s: Couldn't chroot/chdir to '%.64s': %s\n",
     VAR_9, VAR_12, FUNC_9(VAR_8));
    FUNC_5(1);
   }
  }
  if (FUNC_8(VAR_13->pw_name, VAR_13->pw_gid) != 0 ||
      FUNC_10(VAR_13->pw_gid) != 0 || FUNC_11(VAR_13->pw_uid) != 0) {
   FUNC_6(VAR_10, "%s: Couldn't change to '%.32s' uid=%lu gid=%lu: %s\n",
    VAR_9, VAR_11,
    (unsigned long)VAR_13->pw_uid,
    (unsigned long)VAR_13->pw_gid,
    FUNC_9(VAR_8));
   FUNC_5(1);
  }
  else {
   FUNC_6(VAR_10, "dropped privs to %s\n", VAR_11);
  }

 }
 else {
  FUNC_6(VAR_10, "%s: Couldn't find user '%.32s'\n",
   VAR_9, VAR_11);
  FUNC_5(1);
 }
}
