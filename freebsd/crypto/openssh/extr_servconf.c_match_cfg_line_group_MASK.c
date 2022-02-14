
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_gid; int pw_name; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (char const*) ;
 struct passwd* FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_0, int VAR_1, const char *VAR_2)
{
 int VAR_3 = 0;
 struct passwd *VAR_4;

 if (VAR_2 == ((void*)0))
  goto out;

 if ((VAR_4 = FUNC_4(VAR_2)) == ((void*)0)) {
  FUNC_0("Can't match group at line %d because user %.100s does "
      "not exist", VAR_1, VAR_2);
 } else if (FUNC_2(VAR_4->pw_name, VAR_4->pw_gid) == 0) {
  FUNC_0("Can't Match group because user %.100s not in any group "
      "at line %d", VAR_2, VAR_1);
 } else if (FUNC_3(VAR_0) != 1) {
  FUNC_0("user %.100s does not match group list %.100s at line %d",
      VAR_2, VAR_0, VAR_1);
 } else {
  FUNC_0("user %.100s matched group list %.100s at line %d", VAR_2,
      VAR_0, VAR_1);
  VAR_3 = 1;
 }
out:
 FUNC_1();
 return VAR_3;
}
