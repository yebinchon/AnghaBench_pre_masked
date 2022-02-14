
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct passwd {scalar_t__ pw_gid; scalar_t__ pw_uid; int pw_dir; } ;
struct jail {char* hostname; int * ip6; scalar_t__ ip6s; int * ip4; scalar_t__ ip4s; int * jailname; int path; int version; } ;
struct hast_resource {char* hr_name; scalar_t__ hr_role; int hr_ggatefd; int hr_localfd; } ;
typedef int jailst ;
typedef int jailhost ;
typedef scalar_t__ gid_t ;
typedef int cap_rights_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 scalar_t__ VAR_4 ;




 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct jail*,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,unsigned long const*,int ) ;
 int FUNC_5 (int *,int ,...) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_9 (int,scalar_t__*) ;
 struct passwd* FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_12 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_13 (struct jail*) ;
 int FUNC_14 (unsigned long const*) ;
 int FUNC_15 (int ,int,scalar_t__,char*) ;
 int FUNC_16 (int,char*,char*,char*) ;
 int FUNC_17 (int ,char*,...) ;
 int FUNC_18 (char*,int ) ;
 char* FUNC_19 (scalar_t__) ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 (int,scalar_t__*) ;
 int FUNC_22 (scalar_t__) ;
 int FUNC_23 (char*,int,char*,...) ;

int
FUNC_24(const struct hast_resource *VAR_13)
{
 char VAR_14[sizeof(VAR_13->hr_name) * 2];
 struct jail VAR_15;
 struct passwd *VAR_16;
 uid_t VAR_17, VAR_18, VAR_19;
 gid_t VAR_20, VAR_21, VAR_22;
 gid_t VAR_23[1];
 bool VAR_24, VAR_25;






 VAR_12 = 0;
 VAR_16 = FUNC_10(VAR_7);
 if (VAR_16 == ((void*)0)) {
  if (VAR_12 != 0) {
   FUNC_17(VAR_10,
       "Unable to find info about '%s' user", VAR_7);
   return (-1);
  } else {
   FUNC_18("'%s' user doesn't exist.", VAR_7);
   VAR_12 = VAR_4;
   return (-1);
  }
 }

 FUNC_2(&VAR_15, sizeof(VAR_15));
 VAR_15.version = VAR_8;
 VAR_15.path = VAR_16->pw_dir;
 if (VAR_13 == ((void*)0)) {
  (void)FUNC_23(VAR_14, sizeof(VAR_14), "hastctl");
 } else {
  (void)FUNC_23(VAR_14, sizeof(VAR_14), "hastd: %s (%s)",
      VAR_13->hr_name, FUNC_19(VAR_13->hr_role));
 }
 VAR_15.hostname = VAR_14;
 VAR_15.jailname = ((void*)0);
 VAR_15.ip4s = 0;
 VAR_15.ip4 = ((void*)0);
 VAR_15.ip6s = 0;
 VAR_15.ip6 = ((void*)0);
 if (FUNC_13(&VAR_15) >= 0) {
  VAR_25 = 1;
 } else {
  VAR_25 = 0;
  FUNC_17(VAR_11,
      "Unable to jail to directory to %s", VAR_16->pw_dir);
  if (FUNC_8(VAR_16->pw_dir) == -1) {
   FUNC_17(VAR_10,
       "Unable to change root directory to %s",
       VAR_16->pw_dir);
   return (-1);
  }
 }
 FUNC_1(FUNC_7("/") == 0);
 VAR_23[0] = VAR_16->pw_gid;
 if (FUNC_21(1, VAR_23) == -1) {
  FUNC_17(VAR_10, "Unable to set groups to gid %u",
      (unsigned int)VAR_16->pw_gid);
  return (-1);
 }
 if (FUNC_20(VAR_16->pw_gid) == -1) {
  FUNC_17(VAR_10, "Unable to set gid to %u",
      (unsigned int)VAR_16->pw_gid);
  return (-1);
 }
 if (FUNC_22(VAR_16->pw_uid) == -1) {
  FUNC_17(VAR_10, "Unable to set uid to %u",
      (unsigned int)VAR_16->pw_uid);
  return (-1);
 }
 VAR_24 = 0;





 FUNC_1(FUNC_12(&VAR_17, &VAR_18, &VAR_19) == 0);
 FUNC_1(VAR_17 == VAR_16->pw_uid);
 FUNC_1(VAR_18 == VAR_16->pw_uid);
 FUNC_1(VAR_19 == VAR_16->pw_uid);
 FUNC_1(FUNC_11(&VAR_20, &VAR_21, &VAR_22) == 0);
 FUNC_1(VAR_20 == VAR_16->pw_gid);
 FUNC_1(VAR_21 == VAR_16->pw_gid);
 FUNC_1(VAR_22 == VAR_16->pw_gid);
 FUNC_1(FUNC_9(0, ((void*)0)) == 1);
 FUNC_1(FUNC_9(1, VAR_23) == 1);
 FUNC_1(VAR_23[0] == VAR_16->pw_gid);

 FUNC_16(1,
     "Privileges successfully dropped using %s%s+setgid+setuid.",
     VAR_24 ? "capsicum+" : "", VAR_25 ? "jail" : "chroot");

 return (0);
}
