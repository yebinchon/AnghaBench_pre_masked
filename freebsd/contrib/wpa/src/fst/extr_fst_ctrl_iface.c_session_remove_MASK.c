
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fst_session {int dummy; } ;
struct fst_group {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fst_group*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct fst_session*) ;
 struct fst_session* FUNC_3 (int ) ;
 struct fst_group* FUNC_4 (struct fst_session*) ;
 int FUNC_5 (struct fst_session*) ;
 int FUNC_6 (char*,size_t,char*) ;
 int FUNC_7 (char const*,int *,int ) ;

__attribute__((used)) static int FUNC_8(const char *VAR_1, char *VAR_2, size_t VAR_3)
{
 struct fst_session *VAR_4;
 struct fst_group *VAR_5;
 u32 VAR_6;

 VAR_6 = FUNC_7(VAR_1, ((void*)0), 0);

 VAR_4 = FUNC_3(VAR_6);
 if (!VAR_4) {
  FUNC_1(VAR_0, "CTRL: Cannot find session %u", VAR_6);
  return FUNC_6(VAR_2, VAR_3, "FAIL\n");
 }

 VAR_5 = FUNC_4(VAR_4);
 FUNC_5(VAR_4);
 FUNC_2(VAR_4);
 FUNC_0(VAR_5);

 return FUNC_6(VAR_2, VAR_3, "OK\n");
}
