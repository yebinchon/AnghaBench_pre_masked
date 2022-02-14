
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int,char*,int ) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int
FUNC_10(const char *VAR_4)
{
 static char VAR_5[512];
 int VAR_6;
 int VAR_7;
 int VAR_8;
 FUNC_1(".", VAR_2, VAR_2);
 FUNC_0(".", 0777);
 if (FUNC_4(VAR_2) != 0) {
  VAR_7 = VAR_3;
  FUNC_9("rump_sys_setegid");
  return VAR_7;
 }
 if (FUNC_5(VAR_2) != 0) {
  VAR_7 = VAR_3;
  FUNC_9("rump_sys_seteuid");
  return VAR_7;
 }

 for (VAR_8 = 0; ; VAR_8++) {
  FUNC_7(VAR_5, "file%d", VAR_8);
  VAR_6 = FUNC_3(VAR_5, VAR_0 | VAR_1, 0644);
  if (VAR_6 < 0)
   break;
  FUNC_7(VAR_5, "test file no %d", VAR_8);
  FUNC_6(VAR_6, VAR_5, FUNC_8(VAR_5));
  FUNC_2(VAR_6);
 }
 VAR_7 = VAR_3;

 FUNC_2(VAR_6);
 FUNC_5(0);
 FUNC_4(0);
 return VAR_7;
}
