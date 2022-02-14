
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int,int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int,char*,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int
FUNC_10(const char *VAR_4)
{
 static char VAR_5[512];
 int VAR_6;
 int VAR_7;
 FUNC_2(".", VAR_2, VAR_2);
 FUNC_1(".", 0777);
 if (FUNC_5(VAR_2) != 0) {
  VAR_7 = VAR_3;
  FUNC_9("rump_sys_setegid");
  return VAR_7;
 }
 if (FUNC_6(VAR_2) != 0) {
  VAR_7 = VAR_3;
  FUNC_9("rump_sys_seteuid");
  return VAR_7;
 }
 VAR_6 = FUNC_4("test_fillup", VAR_0 | VAR_1, 0644);
 if (VAR_6 < 0) {
  VAR_7 = VAR_3;
  FUNC_9("rump_sys_open");
 } else {




  int VAR_8;


  for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
   VAR_7 = FUNC_7(VAR_6, VAR_5, sizeof(VAR_5));
   if (VAR_7 != sizeof(VAR_5))
    FUNC_0(1, "write failed early");
  }
  FUNC_8(2);

  if (FUNC_7(VAR_6, VAR_5, sizeof(VAR_5)) != sizeof(VAR_5))
   VAR_7 = VAR_3;
  else
   VAR_7 = 0;
 }
 FUNC_3(VAR_6);
 FUNC_6(0);
 FUNC_5(0);
 return VAR_7;
}
