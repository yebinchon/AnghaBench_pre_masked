
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,...) ;
 char* VAR_4 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,char*) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (char*,int ) ;

void
FUNC_12()
{
 char VAR_5[128], *VAR_6;
 char VAR_7[256];
 int VAR_8;

 if (FUNC_4())
 {
  return;
 }
 (void)FUNC_6(VAR_5, "/tmp/ee.XXXXXXXX");
 VAR_8 = FUNC_3(VAR_5);
 if (VAR_8 < 0) {
  FUNC_8(VAR_1, 0, 0);
  FUNC_9(VAR_1, VAR_2, VAR_6);
  FUNC_10(VAR_1);
  return;
 }
 FUNC_1(VAR_8);
 if (FUNC_11(VAR_6, 0))
 {
  FUNC_6(VAR_7, "ispell %s", VAR_6);
  FUNC_5(VAR_7);
  FUNC_2();
  VAR_4 = VAR_6;
  VAR_3 = VAR_0;
  FUNC_0();
  FUNC_7(VAR_6);
 }
}
