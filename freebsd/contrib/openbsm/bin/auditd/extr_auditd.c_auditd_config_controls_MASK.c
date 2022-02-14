
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;

int
FUNC_11(void)
{
 int VAR_1, VAR_2;
 int VAR_3 = 0;




 VAR_1 = FUNC_3();
 if (VAR_1 < 0) {
  FUNC_1("auditd_set_evcmap() failed: %m");
  VAR_3 = -1;
 } else if (VAR_1 == 0) {
  FUNC_1("No events to class mappings registered.");
  VAR_3 = -1;
 } else
  FUNC_0("Registered %d event to class mappings.", VAR_1);




 VAR_2 = FUNC_7();
 if (VAR_2) {
  FUNC_1("auditd_set_namask() %s: %m",
      FUNC_10(VAR_2));
  VAR_3 = -1;
 } else
  FUNC_0("Registered non-attributable event mask.");




 VAR_2 = FUNC_8();
 if (VAR_2) {
  FUNC_1("auditd_set_policy() %s: %m",
      FUNC_10(VAR_2));
  VAR_3 = -1;
 } else
  FUNC_0("Set audit policy in kernel.");




 VAR_2 = FUNC_4();
 if (VAR_2) {
  FUNC_1("audit_set_fsize() %s: %m",
      FUNC_10(VAR_2));
  VAR_3 = -1;
 } else
  FUNC_0("Set audit trail size in kernel.");




 VAR_2 = FUNC_9();
 if (VAR_2) {
  FUNC_1("audit_set_qsize() %s: %m",
      FUNC_10(VAR_2));
  VAR_3 = -1;
 } else
  FUNC_0("Set audit trail queue in kernel.");





 VAR_2 = FUNC_6();
 if (VAR_2) {
  FUNC_1("auditd_set_minfree() %s: %m",
      FUNC_10(VAR_2));
  VAR_3 = -1;
 } else
  FUNC_0(
      "Set audit trail min free percent in kernel.");




 VAR_2 = FUNC_5();
 if (VAR_2) {
  if (VAR_2 == VAR_0) {
   FUNC_2(
       "audit_control(5) may be missing 'host:' field");
  } else {
   FUNC_1("auditd_set_host() %s: %m",
       FUNC_10(VAR_2));
   VAR_3 = -1;
  }
 } else
  FUNC_0(
      "Set audit host address information in kernel.");

 return (VAR_3);
}
