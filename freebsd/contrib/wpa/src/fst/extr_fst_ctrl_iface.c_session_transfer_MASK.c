
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fst_session {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 struct fst_session* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct fst_session*) ;
 int FUNC_3 (char*,size_t,char*) ;
 int FUNC_4 (char const*,int *,int ) ;

__attribute__((used)) static int FUNC_5(const char *VAR_1, char *VAR_2, size_t VAR_3)
{
 struct fst_session *VAR_4;
 u32 VAR_5;

 VAR_5 = FUNC_4(VAR_1, ((void*)0), 0);

 VAR_4 = FUNC_1(VAR_5);
 if (!VAR_4) {
  FUNC_0(VAR_0, "CTRL: Cannot find session %u", VAR_5);
  return FUNC_3(VAR_2, VAR_3, "FAIL\n");
 }

 if (FUNC_2(VAR_4)) {
  FUNC_0(VAR_0,
      "CTRL: Cannot initiate ST for session %u", VAR_5);
  return FUNC_3(VAR_2, VAR_3, "FAIL\n");
 }

 return FUNC_3(VAR_2, VAR_3, "OK\n");
}
