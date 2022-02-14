
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct fst_session {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ,...) ;
 struct fst_session* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct fst_session*,int ) ;
 int FUNC_3 (char*,size_t,char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char const*,char**,int ) ;

__attribute__((used)) static int FUNC_6(const char *VAR_6, char *VAR_7, size_t VAR_8)
{
 struct fst_session *VAR_9;
 char *VAR_10;
 u32 VAR_11;
 u8 VAR_12;

 VAR_11 = FUNC_5(VAR_6, &VAR_10, 0);

 VAR_9 = FUNC_1(VAR_11);
 if (!VAR_9) {
  FUNC_0(VAR_3, "CTRL: Cannot find session %u", VAR_11);
  return FUNC_3(VAR_7, VAR_8, "FAIL\n");
 }

 if (*VAR_10 != ' ')
  return FUNC_3(VAR_7, VAR_8, "FAIL\n");
 VAR_10++;

 if (!FUNC_4(VAR_10, VAR_0)) {
  VAR_12 = VAR_5;
 } else if (!FUNC_4(VAR_10, VAR_1)) {
  VAR_12 = VAR_4;
 } else {
  FUNC_0(VAR_3,
      "CTRL: session %u: unknown response status: %s",
      VAR_11, VAR_10);
  return FUNC_3(VAR_7, VAR_8, "FAIL\n");
 }

 if (FUNC_2(VAR_9, VAR_12)) {
  FUNC_0(VAR_3, "CTRL: Cannot respond to session %u",
      VAR_11);
  return FUNC_3(VAR_7, VAR_8, "FAIL\n");
 }

 FUNC_0(VAR_2, "CTRL: session %u responded", VAR_11);

 return FUNC_3(VAR_7, VAR_8, "OK\n");
}
