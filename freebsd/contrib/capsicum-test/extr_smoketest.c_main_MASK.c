
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int pid_t ;
typedef int cap_rights_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned int*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int *,int ,...) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (int ) ;
 int VAR_9 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,char**,char**) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (int,struct stat*) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int VAR_10 ;
 int FUNC_15 (char*,int ) ;
 int FUNC_16 (int*,int ) ;
 int FUNC_17 (int,int*) ;
 int FUNC_18 (int,int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int) ;
 int VAR_12 ;
 char* FUNC_21 (int) ;
 int FUNC_22 (int) ;
 int FUNC_23 (int,int*,int ,int *) ;

int FUNC_24(int VAR_13, char *VAR_14[]) {
  FUNC_19(VAR_5, VAR_10);
  int VAR_15 = 4;
  if (1 < VAR_13) {
    VAR_15 = FUNC_0(VAR_14[1]);
  }


  cap_rights_t VAR_16;
  FUNC_5(&VAR_16, VAR_0, VAR_2, VAR_1);
  int VAR_17 = FUNC_7(VAR_7);
  int VAR_18 = FUNC_6(VAR_17, &VAR_16);
  FUNC_11(VAR_12, "[%d] cap_fd=%d\n", FUNC_13(), VAR_17);
  if (VAR_18 < 0) FUNC_11(VAR_12, "*** cap_rights_limit() failed: errno=%d %s\n", VAR_9, FUNC_21(VAR_9));


  cap_rights_t VAR_19;
  FUNC_5(&VAR_19, 0);
  VAR_18 = FUNC_4(VAR_17, &VAR_19);
  char VAR_20[256];
  FUNC_3(&VAR_19, VAR_20);
  FUNC_11(VAR_12, "[%d] cap_rights_get(cap_fd=%d) rc=%d rights=%s\n", FUNC_13(), VAR_17, VAR_18, VAR_20);
  if (VAR_18 < 0) FUNC_11(VAR_12, "*** cap_rights_get() failed: errno=%d %s\n", VAR_9, FUNC_21(VAR_9));


  struct stat VAR_21;
  VAR_18 = FUNC_12(VAR_17, &VAR_21);
  FUNC_11(VAR_12, "[%d] fstat(cap_fd=%d) rc=%d errno=%d\n", FUNC_13(), VAR_17, VAR_18, VAR_9);
  if (VAR_18 != -1) FUNC_11(VAR_12, "*** fstat() unexpectedly succeeded\n");


  int VAR_22 = -1;
  VAR_18 = FUNC_16(&VAR_22, 0);
  if (VAR_18 < 0) FUNC_11(VAR_12, "*** pdfork() failed: errno=%d %s\n", VAR_9, FUNC_21(VAR_9));

  if (VAR_18 == 0) {
    int VAR_23 = 0;
    while (VAR_23 < 20) {
      FUNC_11(VAR_12, "  [%d] child alive, parent is ppid=%d\n", FUNC_13(), FUNC_14());
      FUNC_20(1);
    }
    FUNC_11(VAR_12, "  [%d] child exit(0)\n", FUNC_13());
    FUNC_8(0);
  }
  FUNC_11(VAR_12, "[%d] pdfork() rc=%d pd=%d\n", FUNC_13(), VAR_18, VAR_22);


  pid_t VAR_24 = VAR_18;
  pid_t VAR_25 = -1;
  VAR_18 = FUNC_17(VAR_22, &VAR_25);
  if (VAR_18 < 0) FUNC_11(VAR_12, "*** pdgetpid(pd=%d) failed: errno=%d %s\n", VAR_22, VAR_9, FUNC_21(VAR_9));
  FUNC_11(VAR_12, "[%d] pdgetpid(pd=%d)=%d, pdfork returned %d\n", FUNC_13(), VAR_22, VAR_25, VAR_24);

  FUNC_20(VAR_15);


  VAR_18 = FUNC_18(VAR_22, VAR_6);
  FUNC_11(VAR_12, "[%d] pdkill(pd=%d, SIGKILL) -> rc=%d\n", FUNC_13(), VAR_22, VAR_18);
  if (VAR_18 < 0) FUNC_11(VAR_12, "*** pdkill() failed: errno=%d %s\n", VAR_9, FUNC_21(VAR_9));
  FUNC_22(50000);


  if (VAR_11) FUNC_11(VAR_12, "*** SIGCHLD emitted\n");
  int VAR_26;
  VAR_18 = FUNC_23(-1, &VAR_26, VAR_8, ((void*)0));
  if (VAR_18 > 0) FUNC_11(VAR_12, "*** wait4(-1, ...) unexpectedly found child %d\n", VAR_18);

  FUNC_11(VAR_12, "[%d] forking off a child process to check cap_enter()\n", FUNC_13());
  pid_t VAR_27 = FUNC_10();
  if (VAR_27 == 0) {

    unsigned int VAR_28 = -1;
    VAR_18 = FUNC_2(&VAR_28);
    FUNC_11(VAR_12, "  [%d] cap_getmode() -> rc=%d, cap_mode=%d\n", FUNC_13(), VAR_18, VAR_28);
    if (VAR_18 < 0) FUNC_11(VAR_12, "*** cap_getmode() failed: errno=%d %s\n", VAR_9, FUNC_21(VAR_9));

    VAR_18 = FUNC_1();
    FUNC_11(VAR_12, "  [%d] cap_enter() -> rc=%d\n", FUNC_13(), VAR_18);
    if (VAR_18 < 0) FUNC_11(VAR_12, "*** cap_enter() failed: errno=%d %s\n", VAR_9, FUNC_21(VAR_9));

    VAR_18 = FUNC_2(&VAR_28);
    FUNC_11(VAR_12, "  [%d] cap_getmode() -> rc=%d, cap_mode=%d\n", FUNC_13(), VAR_18, VAR_28);
    if (VAR_18 < 0) FUNC_11(VAR_12, "*** cap_getmode() failed: errno=%d %s\n", VAR_9, FUNC_21(VAR_9));


    VAR_18 = FUNC_15("/etc/passwd", VAR_4);
    FUNC_11(VAR_12, "  [%d] open('/etc/passwd') -> rc=%d, errno=%d\n", FUNC_13(), VAR_18, VAR_9);
    if (VAR_18 != -1) FUNC_11(VAR_12, "*** open() unexpectedly succeeded\n");



    FUNC_8(0);
  }
  VAR_18 = FUNC_23(VAR_27, &VAR_26, 0, ((void*)0));
  FUNC_11(VAR_12, "[%d] child %d exited with status %x\n", FUNC_13(), VAR_27, VAR_26);


  char* VAR_29[] = {(char*)"/bin/ls", "-l", "smoketest", ((void*)0)};
  char* VAR_30[] = {((void*)0)};
  int VAR_31 = FUNC_15("/bin/ls", VAR_4);
  FUNC_11(VAR_12, "[%d] about to fexecve('/bin/ls', '-l', 'smoketest')\n", FUNC_13());
  VAR_18 = FUNC_9(VAR_31, VAR_29, VAR_30);

  FUNC_11(VAR_12, "*** fexecve(fd=%d) failed: rc=%d errno=%d %s\n", VAR_31, VAR_18, VAR_9, FUNC_21(VAR_9));

  return 0;
}
