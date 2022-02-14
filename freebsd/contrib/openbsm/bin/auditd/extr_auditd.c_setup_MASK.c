
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_7(void)
{
 int VAR_2;

 if (FUNC_2(VAR_1) < 0) {
  FUNC_1("Error opening trigger messaging mechanism");
  FUNC_6();
 }
 VAR_2 = FUNC_3();
 if (VAR_2) {
  FUNC_1("auditd_prevent_audit() %s: %m",
      FUNC_5(VAR_2));
  FUNC_6();
 }




 FUNC_4(VAR_0);





 if (!VAR_1)
  FUNC_0();
}
