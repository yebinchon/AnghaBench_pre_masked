
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct passwd {int pw_uid; int pw_dir; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,struct stat*) ;
 int FUNC_1 (char const*,struct stat*,int ,int ,char*,size_t) ;
 int FUNC_2 (char*,size_t,char*,char const*,char*) ;
 char* FUNC_3 (int ) ;

int
FUNC_4(int VAR_1, const char *VAR_2, struct passwd *VAR_3,
    char *VAR_4, size_t VAR_5)
{
 struct stat VAR_6;


 if (FUNC_0(VAR_1, &VAR_6) < 0) {
  FUNC_2(VAR_4, VAR_5, "cannot stat file %s: %s",
      VAR_2, FUNC_3(VAR_0));
  return -1;
 }
 return FUNC_1(VAR_2, &VAR_6, VAR_3->pw_dir, VAR_3->pw_uid, VAR_4, VAR_5);
}
