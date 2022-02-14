
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct passwd {char* pw_name; int pw_fields; char* pw_passwd; char* pw_class; char* pw_gecos; char* pw_dir; char* pw_shell; scalar_t__ pw_expire; scalar_t__ pw_change; scalar_t__ pw_gid; scalar_t__ pw_uid; } ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,char*) ;
 scalar_t__ FUNC_2 (int const*,char*) ;
 int FUNC_3 (int const*,char*,scalar_t__) ;

__attribute__((used)) static bool
FUNC_4(const nvlist_t *VAR_10, const struct passwd *VAR_11, nvlist_t *VAR_12)
{
 int VAR_13;

 if (VAR_11 == ((void*)0))
  return (1);




 if (!FUNC_3(VAR_10, VAR_11->pw_name, VAR_11->pw_uid))
  return (0);

 VAR_13 = VAR_11->pw_fields;

 if (FUNC_2(VAR_10, "pw_name")) {
  FUNC_1(VAR_12, "pw_name", VAR_11->pw_name);
 } else {
  FUNC_1(VAR_12, "pw_name", "");
  VAR_13 &= ~VAR_6;
 }
 if (FUNC_2(VAR_10, "pw_uid")) {
  FUNC_0(VAR_12, "pw_uid", (uint64_t)VAR_11->pw_uid);
 } else {
  FUNC_0(VAR_12, "pw_uid", (uint64_t)-1);
  VAR_13 &= ~VAR_9;
 }
 if (FUNC_2(VAR_10, "pw_gid")) {
  FUNC_0(VAR_12, "pw_gid", (uint64_t)VAR_11->pw_gid);
 } else {
  FUNC_0(VAR_12, "pw_gid", (uint64_t)-1);
  VAR_13 &= ~VAR_5;
 }
 if (FUNC_2(VAR_10, "pw_change")) {
  FUNC_0(VAR_12, "pw_change", (uint64_t)VAR_11->pw_change);
 } else {
  FUNC_0(VAR_12, "pw_change", (uint64_t)0);
  VAR_13 &= ~VAR_0;
 }
 if (FUNC_2(VAR_10, "pw_passwd")) {
  FUNC_1(VAR_12, "pw_passwd", VAR_11->pw_passwd);
 } else {
  FUNC_1(VAR_12, "pw_passwd", "");
  VAR_13 &= ~VAR_7;
 }
 if (FUNC_2(VAR_10, "pw_class")) {
  FUNC_1(VAR_12, "pw_class", VAR_11->pw_class);
 } else {
  FUNC_1(VAR_12, "pw_class", "");
  VAR_13 &= ~VAR_1;
 }
 if (FUNC_2(VAR_10, "pw_gecos")) {
  FUNC_1(VAR_12, "pw_gecos", VAR_11->pw_gecos);
 } else {
  FUNC_1(VAR_12, "pw_gecos", "");
  VAR_13 &= ~VAR_4;
 }
 if (FUNC_2(VAR_10, "pw_dir")) {
  FUNC_1(VAR_12, "pw_dir", VAR_11->pw_dir);
 } else {
  FUNC_1(VAR_12, "pw_dir", "");
  VAR_13 &= ~VAR_2;
 }
 if (FUNC_2(VAR_10, "pw_shell")) {
  FUNC_1(VAR_12, "pw_shell", VAR_11->pw_shell);
 } else {
  FUNC_1(VAR_12, "pw_shell", "");
  VAR_13 &= ~VAR_8;
 }
 if (FUNC_2(VAR_10, "pw_expire")) {
  FUNC_0(VAR_12, "pw_expire", (uint64_t)VAR_11->pw_expire);
 } else {
  FUNC_0(VAR_12, "pw_expire", (uint64_t)0);
  VAR_13 &= ~VAR_3;
 }
 FUNC_0(VAR_12, "pw_fields", (uint64_t)VAR_13);

 return (1);
}
