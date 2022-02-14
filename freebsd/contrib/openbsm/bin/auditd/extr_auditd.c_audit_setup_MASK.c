
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static void
FUNC_9(void)
{
 int VAR_1;


 VAR_1 = FUNC_5();
 if (VAR_1) {
  FUNC_3("auditd_set_dist() %s: %m",
      FUNC_6(VAR_1));
 } else
  FUNC_2("Configured trail files distribution.");

 if (FUNC_7() == -1) {
  FUNC_3("Error creating audit trail file");
  FUNC_8();
 }


 VAR_1 = FUNC_1(VAR_0, ((void*)0));
 if (VAR_1)
  FUNC_3("auditd_gen_record(AUE_audit_startup) %s: %m",
      FUNC_6(VAR_1));

 if (FUNC_0() == 0)
  FUNC_4("Audit controls init successful");
 else
  FUNC_3("Audit controls init failed");
}
