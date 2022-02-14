
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,char const) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int,int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int,char*,int) ;
 unsigned int FUNC_8 (char const*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int
FUNC_10(const char *VAR_4)
{
 static char VAR_5[512];
 int VAR_6;
 int VAR_7;
 unsigned int VAR_8;
 int VAR_9 = 1;
 for (VAR_8 =0; VAR_4 && VAR_8 < FUNC_8(VAR_4); VAR_8++) {
  switch(VAR_4[VAR_8]) {
  case 'C':
   VAR_9 = 0;
   break;
  default:
   FUNC_0(1, "test4: unknown option %c", VAR_4[VAR_8]);
  }
 }
 if (VAR_9)
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
  while (FUNC_7(VAR_6, VAR_5, sizeof(VAR_5)) == sizeof(VAR_5))
   VAR_7 = 0;
  VAR_7 = VAR_3;
 }
 FUNC_3(VAR_6);
 FUNC_6(0);
 FUNC_5(0);
 return VAR_7;
}
