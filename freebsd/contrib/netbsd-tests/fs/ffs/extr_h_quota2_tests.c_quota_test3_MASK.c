
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int VAR_4 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int,int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int,char*,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int
FUNC_12(const char *VAR_5)
{
 static char VAR_6[512];
 int VAR_7;
 int VAR_8;
 int VAR_9;
 FUNC_2(".", VAR_3, VAR_3);
 FUNC_1(".", 0777);
 if (FUNC_5(VAR_3) != 0) {
  VAR_8 = VAR_4;
  FUNC_11("rump_sys_setegid");
  return VAR_8;
 }
 if (FUNC_6(VAR_3) != 0) {
  VAR_8 = VAR_4;
  FUNC_11("rump_sys_seteuid");
  return VAR_8;
 }





 for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
  FUNC_9(VAR_6, "file%d", VAR_9);
  VAR_7 = FUNC_4(VAR_6, VAR_1| VAR_0 | VAR_2, 0644);
  if (VAR_7 < 0)
   FUNC_0(1, "file create failed early");
  FUNC_9(VAR_6, "test file no %d", VAR_9);
  FUNC_7(VAR_7, VAR_6, FUNC_10(VAR_6));
  FUNC_3(VAR_7);
 }

 FUNC_8(2);
 FUNC_9(VAR_6, "file%d", VAR_9);
 VAR_7 = FUNC_4(VAR_6, VAR_1| VAR_0 | VAR_2, 0644);
 if (VAR_7 < 0)
  VAR_8 = VAR_4;
 else
  VAR_8 = 0;

 FUNC_3(VAR_7);
 FUNC_6(0);
 FUNC_5(0);
 return VAR_8;
}
