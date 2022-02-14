
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adist_host {int adh_worker_pid; int adh_reset; int adh_remoteaddr; int adh_name; int adh_role; int adh_directory; int * adh_conn; } ;
struct adist_config {int dummy; } ;
typedef int pthread_t ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct adist_config* VAR_4 ;
 struct adist_host* VAR_5 ;
 int * VAR_6 ;
 int FUNC_1 (struct adist_host*,int) ;
 int FUNC_2 (struct adist_host*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_7 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;
 int FUNC_12 (char*,int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,char*,int,int **) ;
 int FUNC_15 (int *,int *,int ) ;
 int FUNC_16 (int *,int *,int ) ;
 int FUNC_17 (int *,int *,int ,int *) ;
 int FUNC_18 (int *) ;
 int VAR_8 ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ,int,char*,int ,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_21 () ;
 int FUNC_22 (char*,int ,int ) ;
 int FUNC_23 (int *) ;
 int * FUNC_24 (int ,int) ;
 int FUNC_25 (int ) ;

void
FUNC_26(struct adist_config *VAR_10, struct adist_host *VAR_11)
{
 pthread_t VAR_12;
 pid_t VAR_13;
 int VAR_14, VAR_15, VAR_16;





 if (FUNC_14(((void*)0), "socketpair://", -1, &VAR_11->adh_conn) == -1) {
  FUNC_8(VAR_3,
      "Unable to create connection sockets between child and parent");
  return;
 }

 VAR_13 = FUNC_4();
 if (VAR_13 == -1) {
  FUNC_8(VAR_3, "Unable to fork");
  FUNC_13(VAR_11->adh_conn);
  VAR_11->adh_conn = ((void*)0);
  return;
 }

 if (VAR_13 > 0) {

  VAR_11->adh_worker_pid = VAR_13;

  FUNC_15(VAR_11->adh_conn, ((void*)0), 0);
  return;
 }

 VAR_4 = VAR_10;
 VAR_5 = VAR_11;

 VAR_15 = FUNC_11();
 VAR_16 = FUNC_6();


 FUNC_16(VAR_5->adh_conn, ((void*)0), 0);

 FUNC_2(VAR_5);





 FUNC_10(VAR_15);
 FUNC_7(VAR_16);
 FUNC_12("[%s] (%s) ", VAR_5->adh_name,
     FUNC_19(VAR_5->adh_role));
 VAR_6 = FUNC_24(VAR_5->adh_directory, 0);
 if (VAR_6 == ((void*)0))
  FUNC_3(VAR_2);

 if (FUNC_20(VAR_0, 1, "auditdistd: %s (%s)",
     FUNC_19(VAR_5->adh_role), VAR_5->adh_name) != 0) {
  FUNC_3(VAR_1);
 }
 FUNC_9("Privileges successfully dropped.");





 (void)FUNC_25(FUNC_23(VAR_6));

 FUNC_5();
 if (FUNC_21() == 0) {
  FUNC_9("Successfully connected to %s.",
      VAR_5->adh_remoteaddr);
 }
 VAR_5->adh_reset = 1;





 VAR_14 = FUNC_17(&VAR_12, ((void*)0), VAR_7, ((void*)0));
 FUNC_0(VAR_14 == 0);
 VAR_14 = FUNC_17(&VAR_12, ((void*)0), VAR_9, ((void*)0));
 FUNC_0(VAR_14 == 0);
 VAR_14 = FUNC_17(&VAR_12, ((void*)0), VAR_8, ((void*)0));
 FUNC_0(VAR_14 == 0);
 (void)FUNC_18(((void*)0));
}
