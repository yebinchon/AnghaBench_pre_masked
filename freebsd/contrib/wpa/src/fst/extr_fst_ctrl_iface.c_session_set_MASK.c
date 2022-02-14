
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* u32 ;
struct fst_session {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,char*) ;
 struct fst_session* FUNC_1 (char*) ;
 int FUNC_2 (struct fst_session*,char*,int ) ;
 int FUNC_3 (struct fst_session*,char*) ;
 int FUNC_4 (struct fst_session*,char*,int ) ;
 int FUNC_5 (char*,size_t,char*,...) ;
 char* FUNC_6 (char*,char) ;
 scalar_t__ FUNC_7 (char*,int ,int) ;
 char* FUNC_8 (char const*,char**,int ) ;

__attribute__((used)) static int FUNC_9(const char *VAR_9, char *VAR_10, size_t VAR_11)
{
 struct fst_session *VAR_12;
 char *VAR_13, *VAR_14;
 u32 VAR_15;
 int VAR_16;

 VAR_15 = FUNC_8(VAR_9, &VAR_13, 0);

 VAR_12 = FUNC_1(VAR_15);
 if (!VAR_12) {
  FUNC_0(VAR_7, "CTRL: Cannot find session %u", VAR_15);
  return FUNC_5(VAR_10, VAR_11, "FAIL\n");
 }

 if (*VAR_13 != ' ' || !(VAR_14 = FUNC_6(VAR_13 + 1, '=')))
  return FUNC_5(VAR_10, VAR_11, "FAIL\n");
 VAR_13++;

 if (FUNC_7(VAR_13, VAR_4, VAR_14 - VAR_13) == 0) {
  VAR_16 = FUNC_2(VAR_12, VAR_14 + 1, VAR_8);
 } else if (FUNC_7(VAR_13, VAR_2, VAR_14 - VAR_13) == 0) {
  VAR_16 = FUNC_2(VAR_12, VAR_14 + 1, VAR_0);
 } else if (FUNC_7(VAR_13, VAR_5, VAR_14 - VAR_13) == 0) {
  VAR_16 = FUNC_4(VAR_12, VAR_14 + 1, VAR_8);
 } else if (FUNC_7(VAR_13, VAR_3, VAR_14 - VAR_13) == 0) {
  VAR_16 = FUNC_4(VAR_12, VAR_14 + 1, VAR_0);
 } else if (FUNC_7(VAR_13, VAR_1, VAR_14 - VAR_13) == 0) {
  VAR_16 = FUNC_3(VAR_12, VAR_14 + 1);
 } else {
  FUNC_0(VAR_6, "CTRL: Unknown parameter: %s", VAR_13);
  return FUNC_5(VAR_10, VAR_11, "FAIL\n");
 }

 return FUNC_5(VAR_10, VAR_11, "%s\n", VAR_16 ? "FAIL" : "OK");
}
