
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct passwd {int pw_uid; } ;
struct group {int gr_gid; } ;
typedef int gid_t ;


 int FUNC_0 () ;
 struct group* FUNC_1 (char*) ;
 struct passwd* FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,char*) ;
 char* FUNC_4 (char*,char) ;

__attribute__((used)) static int
FUNC_5(char *VAR_0, uid_t *VAR_1, gid_t *VAR_2)
{
 struct group *VAR_3;
 struct passwd *VAR_4;
 char *VAR_5;

 VAR_5 = FUNC_4(VAR_0, ':');
 if (VAR_5) {
  *VAR_5++ = '\0';
  if (*VAR_5) {
   VAR_3 = FUNC_1(VAR_5);
   if (VAR_3) {
    *VAR_2 = VAR_3->gr_gid;
   } else
    FUNC_3("Invalid group name %s, ignored",
        0, VAR_5);
  }
 }
 if (*VAR_0) {
  VAR_4 = FUNC_2(VAR_0);
  if (VAR_4) {
   *VAR_1 = VAR_4->pw_uid;
  } else
   FUNC_3("Invalid user name %s, ignored", 0, VAR_0);
 }
 FUNC_0();
 return 0;
}
