
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adist_host {int adh_worker_pid; int adh_trail_fd; int adh_name; int adh_role; int * adh_remote; } ;
struct adist_config {int adc_timeout; } ;
typedef int sigset_t ;
typedef int pthread_t ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 struct adist_config* VAR_5 ;
 struct adist_host* VAR_6 ;
 int FUNC_2 (struct adist_host*) ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;
 int FUNC_12 (char*,int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int *,int ,struct adist_host*) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int VAR_8 ;
 int FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int ,int,char*,int ,int ) ;
 int FUNC_20 (struct adist_host*) ;
 int FUNC_21 (char*,int ,int ) ;
 scalar_t__ FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (int ,int *,int *) ;

void
FUNC_24(struct adist_config *VAR_9, struct adist_host *VAR_10)
{
 sigset_t VAR_11;
 pthread_t VAR_12;
 pid_t VAR_13;
 int VAR_14, VAR_15, VAR_16;

 VAR_13 = FUNC_4();
 if (VAR_13 == -1) {
  FUNC_8(VAR_2, "Unable to fork");
  FUNC_13(VAR_10->adh_remote);
  VAR_10->adh_remote = ((void*)0);
  return;
 }

 if (VAR_13 > 0) {

  FUNC_13(VAR_10->adh_remote);
  VAR_10->adh_remote = ((void*)0);
  VAR_10->adh_worker_pid = VAR_13;
  return;
 }

 VAR_5 = VAR_9;
 VAR_6 = VAR_10;
 VAR_15 = FUNC_11();
 VAR_16 = FUNC_6();

 FUNC_2(VAR_6);



 FUNC_10(VAR_15);
 FUNC_7(VAR_16);
 FUNC_12("[%s] (%s) ", VAR_6->adh_name,
     FUNC_18(VAR_6->adh_role));




 FUNC_1(FUNC_22(&VAR_11) == 0);
 FUNC_1(FUNC_23(VAR_4, &VAR_11, ((void*)0)) == 0);


 if (FUNC_14(VAR_6->adh_remote, VAR_5->adc_timeout) == -1)
  FUNC_8(VAR_3, "Unable to set connection timeout");

 FUNC_5();

 VAR_6->adh_trail_fd = -1;
 FUNC_17();

 if (FUNC_19(VAR_0, 1, "auditdistd: %s (%s)",
     FUNC_18(VAR_6->adh_role), VAR_6->adh_name) != 0) {
  FUNC_3(VAR_1);
 }
 FUNC_9("Privileges successfully dropped.");

 FUNC_16();

 VAR_14 = FUNC_15(&VAR_12, ((void*)0), VAR_8, VAR_6);
 FUNC_0(VAR_14 == 0);
 VAR_14 = FUNC_15(&VAR_12, ((void*)0), VAR_7, VAR_6);
 FUNC_0(VAR_14 == 0);
 (void)FUNC_20(VAR_6);
}
