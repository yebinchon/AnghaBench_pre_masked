
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fst_session {int dummy; } ;
struct fst_group {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*) ;
 struct fst_session* FUNC_1 (struct fst_group*) ;
 int FUNC_2 (struct fst_session*) ;
 struct fst_group* FUNC_3 (char const*) ;
 int FUNC_4 (char*,size_t,char*,...) ;

__attribute__((used)) static int FUNC_5(const char *VAR_2, char *VAR_3, size_t VAR_4)
{
 struct fst_group *VAR_5;
 struct fst_session *VAR_6;

 VAR_5 = FUNC_3(VAR_2);
 if (!VAR_5) {
  FUNC_0(VAR_1, "CTRL: Cannot find group '%s'",
      VAR_2);
  return FUNC_4(VAR_3, VAR_4, "FAIL\n");
 }

 VAR_6 = FUNC_1(VAR_5);
 if (!VAR_6) {
  FUNC_0(VAR_0,
      "CTRL: Cannot create session for group '%s'",
      VAR_2);
  return FUNC_4(VAR_3, VAR_4, "FAIL\n");
 }

 return FUNC_4(VAR_3, VAR_4, "%u\n", FUNC_2(VAR_6));
}
