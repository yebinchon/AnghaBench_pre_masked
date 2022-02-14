
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int f_flags; } ;
struct mtpt_info {int mi_mode; int mi_uid; int mi_gid; scalar_t__ mi_have_gid; scalar_t__ mi_have_uid; scalar_t__ mi_have_mode; scalar_t__ mi_forced_pw; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (char const*,int,int) ;
 int FUNC_2 (char*,char const*,...) ;
 int FUNC_3 (int,char*,char const*,...) ;
 int VAR_1 ;
 int FUNC_4 (char const*,struct statfs*) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*,char const*) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_2, struct mtpt_info *VAR_3)
{
 struct statfs VAR_4;

 if (!VAR_3->mi_have_mode && !VAR_3->mi_have_uid && !VAR_3->mi_have_gid)
  return;

 if (!VAR_1) {
  if (FUNC_4(VAR_2, &VAR_4) == -1) {
   FUNC_5("statfs: %s", VAR_2);
   return;
  }
  if ((VAR_4.f_flags & VAR_0) != 0) {
   if (VAR_3->mi_forced_pw) {
    FUNC_6(
 "Not changing mode/owner of %s since it is read-only",
        VAR_2);
   } else {
    FUNC_2(
 "Not changing mode/owner of %s since it is read-only",
        VAR_2);
   }
   return;
  }
 }

 if (VAR_3->mi_have_mode) {
  FUNC_2("changing mode of %s to %o.", VAR_2,
      VAR_3->mi_mode);
  if (!VAR_1)
   if (FUNC_0(VAR_2, VAR_3->mi_mode) == -1)
    FUNC_3(1, "chmod: %s", VAR_2);
 }




 if (VAR_3->mi_have_uid) {
  FUNC_2("changing owner (user) or %s to %u.", VAR_2,
      VAR_3->mi_uid);
  if (!VAR_1)
   if (FUNC_1(VAR_2, VAR_3->mi_uid, -1) == -1)
    FUNC_3(1, "chown %s to %u (user)", VAR_2,
        VAR_3->mi_uid);
 }
 if (VAR_3->mi_have_gid) {
  FUNC_2("changing owner (group) or %s to %u.", VAR_2,
      VAR_3->mi_gid);
  if (!VAR_1)
   if (FUNC_1(VAR_2, -1, VAR_3->mi_gid) == -1)
    FUNC_3(1, "chown %s to %u (group)", VAR_2,
        VAR_3->mi_gid);
 }
}
