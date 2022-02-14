
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_proc2 {int p_nlwps; } ;
typedef int ssize_t ;
typedef int pthread_t ;
typedef int pid_t ;
typedef int i ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_8 ;
 int FUNC_2 (int,char*,...) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct kinfo_proc2*) ;
 scalar_t__ FUNC_6 (int *,int *,int ,void*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int*) ;
 int FUNC_12 (int,int*,int) ;
 int FUNC_13 (int,int*,int) ;
 int FUNC_14 (char*,char**,char**) ;
 int FUNC_15 () ;
 int FUNC_16 (char*,char*,int) ;
 int FUNC_17 (int) ;
 int VAR_10 ;

int
FUNC_18(int VAR_11, char *VAR_12[], char *VAR_13[])
{
 struct kinfo_proc2 VAR_14;
 char *VAR_15[3];
 int VAR_16[2], VAR_17[2];
 pid_t VAR_18;
 pthread_t VAR_19;
 ssize_t VAR_20;
 int VAR_21, VAR_22;
 char VAR_23[16];

 if (VAR_11 > 1)
  VAR_22 = FUNC_1(VAR_12[1]);
 else
  VAR_22 = 0;
 FUNC_16(VAR_23, "%d", VAR_22+1);
 FUNC_0("execd: %d\n", VAR_22);

 if (FUNC_15() == -1) {
  if (VAR_22)
   FUNC_2(1, "init execd");
  else
   FUNC_2(1, "init");
 }
 VAR_18 = FUNC_10();
 FUNC_0("rumpclient_init finished.\n");

 if (VAR_22) {
  VAR_8 = 1;
  VAR_9 = FUNC_6(&VAR_19, ((void*)0),
      VAR_10, (void *)(uintptr_t)VAR_6);
  if (VAR_9 != 0)
   FUNC_2(1, "exec pthread_create");
  FUNC_0("startup pthread_create finished.\n");

  VAR_21 = 37;
  FUNC_13(VAR_7, &VAR_21, sizeof(VAR_21));
  FUNC_7(VAR_19, ((void*)0));
  FUNC_0("startup pthread_join finished.\n");

  VAR_20 = FUNC_12(VAR_4, &VAR_21, sizeof(VAR_21));
  if (VAR_20 != -1 || VAR_9 != VAR_0)
   FUNC_3(1, "post-exec cloexec works");
  FUNC_0("startup rump_sys_read finished.\n");

  FUNC_5(VAR_18, &VAR_14);
  FUNC_0("startup getproc finished.\n");
  if (VAR_14.p_nlwps != 2)
   FUNC_3(1, "invalid nlwps: %lld", (long long)VAR_14.p_nlwps);


  if (VAR_22 > 10) {
   FUNC_0("done.\n");
   FUNC_4(0);
  }

  FUNC_8(VAR_6);
  FUNC_8(VAR_7);
 }

 FUNC_0("making pipes...\n");

 if (FUNC_11(VAR_16) == -1)
  FUNC_2(1, "pipe1");
 if (VAR_16[0] != VAR_4 || VAR_16[1] != VAR_5)
  FUNC_3(1, "p1 assumptions failed %d %d", VAR_16[0], VAR_16[1]);
 if (FUNC_11(VAR_17) == -1)
  FUNC_2(1, "pipe1");
 if (VAR_17[0] != VAR_6 || VAR_17[1] != VAR_7)
  FUNC_3(1, "p2 assumptions failed");
 if (FUNC_9(VAR_16[0], VAR_2, VAR_1) == -1)
  FUNC_2(1, "cloexec");
 if (FUNC_9(VAR_16[1], VAR_2, VAR_1) == -1)
  FUNC_2(1, "cloexec");

 FUNC_0("making threads...\n");

 for (VAR_21 = 0; VAR_21 < VAR_3; VAR_21++) {
  VAR_9 = FUNC_6(&VAR_19, ((void*)0),
      VAR_10, (void *)(uintptr_t)VAR_16[0]);
  if (VAR_9 != 0)
   FUNC_2(1, "pthread_create 1 %d", VAR_21);
 }

 for (VAR_21 = 0; VAR_21 < VAR_3; VAR_21++) {
  VAR_9 = FUNC_6(&VAR_19, ((void*)0),
      VAR_10, (void *)(uintptr_t)VAR_17[0]);
  if (VAR_9 != 0)
   FUNC_2(1, "pthread_create 2 %d", VAR_21);
 }

 FUNC_0("waiting for threads to start...\n");


 for (;;) {
  FUNC_5(VAR_18, &VAR_14);
  FUNC_0("getproc finished.\n");
  if (VAR_14.p_nlwps == 2*VAR_3 + 2)
   break;
  FUNC_17(10000);
 }

 FUNC_0("making some more threads start...\n");





 for (VAR_21 = 0; VAR_21 < 3*VAR_3; VAR_21++) {
  VAR_9 = FUNC_6(&VAR_19, ((void*)0),
      VAR_10, (void *)(uintptr_t)VAR_16[0]);
  if (VAR_9 != 0)
   FUNC_2(1, "pthread_create 3 %d", VAR_21);
 }

 FUNC_0("calling exec...\n");


 VAR_15[0] = VAR_12[0];
 VAR_15[1] = VAR_23;
 VAR_15[2] = ((void*)0);
 if (FUNC_14(VAR_12[0], VAR_15, VAR_13) == -1)
  FUNC_2(1, "exec");
}
