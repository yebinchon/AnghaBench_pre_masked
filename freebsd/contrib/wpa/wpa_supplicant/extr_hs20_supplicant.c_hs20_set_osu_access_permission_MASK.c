
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_gid; int st_uid; int st_mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 scalar_t__ FUNC_1 (char const*,int ,int ) ;
 scalar_t__ FUNC_2 (char const*,struct stat*) ;
 int FUNC_3 (int ,char*,char const*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_1,
        const char *VAR_2)
{
 struct stat VAR_3;


 if (FUNC_2(VAR_1, &VAR_3) < 0) {
  FUNC_3(VAR_0, "Cannot stat the OSU directory %s",
      VAR_1);
  return;
 }

 if (FUNC_0(VAR_2, VAR_3.st_mode) < 0) {
  FUNC_3(VAR_0,
      "Cannot change the permissions for %s", VAR_2);
  return;
 }

 if (FUNC_1(VAR_2, VAR_3.st_uid, VAR_3.st_gid) < 0) {
  FUNC_3(VAR_0, "Cannot change the ownership for %s",
      VAR_2);
 }
}
