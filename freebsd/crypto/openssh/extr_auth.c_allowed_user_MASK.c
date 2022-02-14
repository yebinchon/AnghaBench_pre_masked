
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct stat {int st_mode; } ;
struct ssh {int dummy; } ;
struct spwd {char* sp_pwdp; } ;
struct passwd {char* pw_passwd; char* pw_shell; int pw_name; int pw_gid; } ;
struct TYPE_2__ {scalar_t__ num_deny_users; size_t num_allow_users; scalar_t__ num_deny_groups; scalar_t__ num_allow_groups; int allow_groups; int deny_groups; int * allow_users; int * deny_users; int use_dns; int * chroot_directory; int use_pam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 struct ssh* VAR_7 ;
 char* FUNC_1 (struct ssh*,int ) ;
 scalar_t__ FUNC_2 (struct spwd*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 char* FUNC_8 (struct passwd*) ;
 struct spwd* FUNC_9 (int ) ;
 int VAR_8 ;
 int FUNC_10 (char*,int ,...) ;
 int FUNC_11 (int ,char const*,char const*,int ) ;
 TYPE_1__ VAR_9 ;
 char* FUNC_12 (struct ssh*) ;
 scalar_t__ FUNC_13 (char*,struct stat*) ;
 scalar_t__ FUNC_14 (int *,char*) ;
 scalar_t__ FUNC_15 (char const*,int ) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (char const*,int ,int ) ;
 scalar_t__ FUNC_18 (char const*,int ) ;
 int FUNC_19 (struct passwd*,int *) ;
 char* FUNC_20 (char*) ;

int
FUNC_21(struct passwd * VAR_10)
{
 struct ssh *VAR_11 = VAR_7;
 struct stat VAR_12;
 const char *VAR_13 = ((void*)0), *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 u_int VAR_16;
 int VAR_17;





 if (!VAR_10 || !VAR_10->pw_name)
  return 0;
 VAR_15 = VAR_10->pw_passwd;
 if (!VAR_9.use_pam && VAR_15 && *VAR_15) {
  int VAR_18 = 0;
  if (VAR_18) {
   FUNC_10("User %.100s not allowed because account is locked",
       VAR_10->pw_name);
   return 0;
  }
 }





 if (VAR_9.chroot_directory == ((void*)0) ||
     FUNC_14(VAR_9.chroot_directory, "none") == 0) {
  char *VAR_19 = FUNC_20((VAR_10->pw_shell[0] == '\0') ?
      VAR_6 : VAR_10->pw_shell);

  if (FUNC_13(VAR_19, &VAR_12) != 0) {
   FUNC_10("User %.100s not allowed because shell %.100s "
       "does not exist", VAR_10->pw_name, VAR_19);
   FUNC_4(VAR_19);
   return 0;
  }
  if (FUNC_0(VAR_12.st_mode) == 0 ||
      (VAR_12.st_mode & (VAR_4|VAR_5|VAR_3)) == 0) {
   FUNC_10("User %.100s not allowed because shell %.100s "
       "is not executable", VAR_10->pw_name, VAR_19);
   FUNC_4(VAR_19);
   return 0;
  }
  FUNC_4(VAR_19);
 }

 if (VAR_9.num_deny_users > 0 || VAR_9.num_allow_users > 0 ||
     VAR_9.num_deny_groups > 0 || VAR_9.num_allow_groups > 0) {
  VAR_13 = FUNC_1(VAR_11, VAR_9.use_dns);
  VAR_14 = FUNC_12(VAR_11);
 }


 if (VAR_9.num_deny_users > 0) {
  for (VAR_16 = 0; VAR_16 < VAR_9.num_deny_users; VAR_16++) {
   VAR_17 = FUNC_11(VAR_10->pw_name, VAR_13, VAR_14,
       VAR_9.deny_users[VAR_16]);
   if (VAR_17 < 0) {
    FUNC_3("Invalid DenyUsers pattern \"%.100s\"",
        VAR_9.deny_users[VAR_16]);
   } else if (VAR_17 != 0) {
    FUNC_10("User %.100s from %.100s not allowed "
        "because listed in DenyUsers",
        VAR_10->pw_name, VAR_13);
    return 0;
   }
  }
 }

 if (VAR_9.num_allow_users > 0) {
  for (VAR_16 = 0; VAR_16 < VAR_9.num_allow_users; VAR_16++) {
   VAR_17 = FUNC_11(VAR_10->pw_name, VAR_13, VAR_14,
       VAR_9.allow_users[VAR_16]);
   if (VAR_17 < 0) {
    FUNC_3("Invalid AllowUsers pattern \"%.100s\"",
        VAR_9.allow_users[VAR_16]);
   } else if (VAR_17 == 1)
    break;
  }

  if (VAR_16 >= VAR_9.num_allow_users) {
   FUNC_10("User %.100s from %.100s not allowed because "
       "not listed in AllowUsers", VAR_10->pw_name, VAR_13);
   return 0;
  }
 }
 if (VAR_9.num_deny_groups > 0 || VAR_9.num_allow_groups > 0) {

  if (FUNC_6(VAR_10->pw_name, VAR_10->pw_gid) == 0) {
   FUNC_10("User %.100s from %.100s not allowed because "
       "not in any group", VAR_10->pw_name, VAR_13);
   return 0;
  }


  if (VAR_9.num_deny_groups > 0)
   if (FUNC_7(VAR_9.deny_groups,
       VAR_9.num_deny_groups)) {
    FUNC_5();
    FUNC_10("User %.100s from %.100s not allowed "
        "because a group is listed in DenyGroups",
        VAR_10->pw_name, VAR_13);
    return 0;
   }




  if (VAR_9.num_allow_groups > 0)
   if (!FUNC_7(VAR_9.allow_groups,
       VAR_9.num_allow_groups)) {
    FUNC_5();
    FUNC_10("User %.100s from %.100s not allowed "
        "because none of user's groups are listed "
        "in AllowGroups", VAR_10->pw_name, VAR_13);
    return 0;
   }
  FUNC_5();
 }







 return 1;
}
