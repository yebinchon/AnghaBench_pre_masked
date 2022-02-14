
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct passwd {scalar_t__ pw_uid; } ;
struct group {scalar_t__ gr_gid; } ;
typedef scalar_t__ gid_t ;
typedef int acl_tag_t ;




 int VAR_0 ;
 int VAR_1 ;
 struct group* FUNC_0 (char*) ;
 struct passwd* FUNC_1 (char*) ;
 unsigned long FUNC_2 (char*,char**,int ) ;

int
FUNC_3(acl_tag_t VAR_2, char *VAR_3, uid_t *VAR_4)
{
 struct group *VAR_5;
 struct passwd *VAR_6;
 unsigned long VAR_7;
 char *VAR_8;

 switch(VAR_2) {
 case 128:
  VAR_6 = FUNC_1(VAR_3);
  if (VAR_6 == ((void*)0)) {
   VAR_7 = FUNC_2(VAR_3, &VAR_8, 0);
   if (*VAR_8 != '\0' || VAR_7 != (unsigned long)(uid_t)VAR_7) {
    VAR_1 = VAR_0;
    return (-1);
   }
   *VAR_4 = (uid_t)VAR_7;
   return (0);
  }
  *VAR_4 = VAR_6->pw_uid;
  return (0);

 case 129:
  VAR_5 = FUNC_0(VAR_3);
  if (VAR_5 == ((void*)0)) {
   VAR_7 = FUNC_2(VAR_3, &VAR_8, 0);
   if (*VAR_8 != '\0' || VAR_7 != (unsigned long)(gid_t)VAR_7) {
    VAR_1 = VAR_0;
    return (-1);
   }
   *VAR_4 = (gid_t)VAR_7;
   return (0);
  }
  *VAR_4 = VAR_5->gr_gid;
  return (0);

 default:
  return (VAR_0);
 }
}
