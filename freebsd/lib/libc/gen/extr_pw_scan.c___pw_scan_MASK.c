
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uid_t ;
struct passwd {char* pw_name; char* pw_shell; int pw_fields; scalar_t__* pw_dir; scalar_t__* pw_gecos; void* pw_expire; void* pw_change; scalar_t__* pw_class; void* pw_gid; void* pw_uid; scalar_t__* pw_passwd; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_17 ;
 int * FUNC_2 (char*) ;
 char* FUNC_3 () ;
 int VAR_18 ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*) ;
 void* FUNC_6 (char**,char*) ;
 unsigned long FUNC_7 (char*,char**,int) ;
 int FUNC_8 (char*,...) ;

int
FUNC_9(char *VAR_19, struct passwd *VAR_20, int VAR_21)
{
 uid_t VAR_22;
 int VAR_23;
 char *VAR_24, *VAR_25, *VAR_26;
 unsigned long VAR_27;

 if (VAR_18 == -1)
  VAR_18 = FUNC_2("PW_SCAN_BIG_IDS") == ((void*)0) ? 1 : 0;

 VAR_20->pw_fields = 0;
 if (!(VAR_20->pw_name = FUNC_6(&VAR_19, ":")))
  goto fmt;
 VAR_23 = !FUNC_5(VAR_20->pw_name, "root");
 if (VAR_20->pw_name[0] && (VAR_20->pw_name[0] != '+' || VAR_20->pw_name[1] == '\0'))
  VAR_20->pw_fields |= VAR_11;

 if (!(VAR_20->pw_passwd = FUNC_6(&VAR_19, ":")))
  goto fmt;
 if (VAR_20->pw_passwd[0])
  VAR_20->pw_fields |= VAR_12;

 if (!(VAR_25 = FUNC_6(&VAR_19, ":")))
  goto fmt;
 if (VAR_25[0])
  VAR_20->pw_fields |= VAR_14;
 else {
  if (VAR_20->pw_name[0] != '+' && VAR_20->pw_name[0] != '-') {
   if (VAR_21 & VAR_16)
    FUNC_8("no uid for user %s", VAR_20->pw_name);
   return (0);
  }
 }
 VAR_17 = 0;
 VAR_27 = FUNC_7(VAR_25, &VAR_24, 10);
 if ((VAR_27 == VAR_3 && VAR_17 == VAR_0) || VAR_27 > VAR_2) {
  if (VAR_21 & VAR_16)
   FUNC_8("%s > max uid value (%u)", VAR_25, VAR_2);
  return (0);
 }
 VAR_22 = VAR_27;
 if (*VAR_24 != '\0') {
  if (VAR_21 & VAR_16)
   FUNC_8("%s uid is incorrect", VAR_25);
  return (0);
 }
 if (VAR_23 && VAR_22) {
  if (VAR_21 & VAR_16)
   FUNC_8("root uid should be 0");
  return (0);
 }
 if (VAR_21 & VAR_16 && VAR_18 && VAR_22 > VAR_4) {
  FUNC_8("%s > recommended max uid value (%u)", VAR_25, VAR_4);

 }
 VAR_20->pw_uid = VAR_22;

 if (!(VAR_25 = FUNC_6(&VAR_19, ":")))
  goto fmt;
 if (VAR_25[0])
  VAR_20->pw_fields |= VAR_10;
 else {
  if (VAR_20->pw_name[0] != '+' && VAR_20->pw_name[0] != '-') {
   if (VAR_21 & VAR_16)
    FUNC_8("no gid for user %s", VAR_20->pw_name);
   return (0);
  }
 }
 VAR_17 = 0;
 VAR_27 = FUNC_7(VAR_25, &VAR_24, 10);
 if ((VAR_27 == VAR_3 && VAR_17 == VAR_0) || VAR_27 > VAR_1) {
  if (VAR_21 & VAR_16)
   FUNC_8("%s > max gid value (%u)", VAR_25, VAR_1);
  return (0);
 }
 VAR_22 = VAR_27;
 if (*VAR_24 != '\0') {
  if (VAR_21 & VAR_16)
   FUNC_8("%s gid is incorrect", VAR_25);
  return (0);
 }
 if (VAR_21 & VAR_16 && VAR_18 && VAR_22 > VAR_4) {
  FUNC_8("%s > recommended max gid value (%u)", VAR_25, VAR_4);

 }
 VAR_20->pw_gid = VAR_22;

 if (VAR_21 & VAR_15 ) {
  if (!(VAR_20->pw_class = FUNC_6(&VAR_19, ":")))
   goto fmt;
  if (VAR_20->pw_class[0])
   VAR_20->pw_fields |= VAR_6;

  if (!(VAR_25 = FUNC_6(&VAR_19, ":")))
   goto fmt;
  if (VAR_25[0])
   VAR_20->pw_fields |= VAR_5;
  VAR_20->pw_change = FUNC_0(VAR_25);

  if (!(VAR_25 = FUNC_6(&VAR_19, ":")))
   goto fmt;
  if (VAR_25[0])
   VAR_20->pw_fields |= VAR_8;
  VAR_20->pw_expire = FUNC_0(VAR_25);
 }
 if (!(VAR_20->pw_gecos = FUNC_6(&VAR_19, ":")))
  goto fmt;
 if (VAR_20->pw_gecos[0])
  VAR_20->pw_fields |= VAR_9;

 if (!(VAR_20->pw_dir = FUNC_6(&VAR_19, ":")))
  goto fmt;
 if (VAR_20->pw_dir[0])
  VAR_20->pw_fields |= VAR_7;

 if (!(VAR_20->pw_shell = FUNC_6(&VAR_19, ":")))
  goto fmt;

 VAR_25 = VAR_20->pw_shell;
 if (VAR_23 && *VAR_25) {
  for (FUNC_4();;) {
   if (!(VAR_26 = FUNC_3())) {
    if (VAR_21 & VAR_16)
     FUNC_8("warning, unknown root shell");
    break;
   }
   if (!FUNC_5(VAR_25, VAR_26))
    break;
  }
  FUNC_1();
 }
 if (VAR_25[0])
  VAR_20->pw_fields |= VAR_13;

 if ((VAR_25 = FUNC_6(&VAR_19, ":"))) {
fmt:
  if (VAR_21 & VAR_16)
   FUNC_8("corrupted entry");
  return (0);
 }
 return (1);
}
