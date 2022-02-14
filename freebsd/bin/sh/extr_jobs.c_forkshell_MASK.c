
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union node {int dummy; } node ;
struct procstat {int pid; int status; int cmd; } ;
struct job {scalar_t__ nprocs; scalar_t__ state; int foreground; struct procstat* ps; int remembered; scalar_t__ used; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*) ;
 int VAR_12 ;
 int VAR_13 ;
 struct job* VAR_14 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (union node*) ;
 int VAR_15 ;
 int FUNC_6 (char*,char*,...) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ VAR_16 ;
 int FUNC_9 () ;
 int FUNC_10 (struct job*) ;
 int FUNC_11 () ;
 int * VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_12 (int ) ;
 scalar_t__ VAR_19 ;
 struct job* VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int VAR_25 ;
 int FUNC_14 (struct job*) ;
 scalar_t__ FUNC_15 (int,int) ;
 int FUNC_16 (int ) ;
 char* FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (scalar_t__,int) ;
 scalar_t__ VAR_26 ;

pid_t
FUNC_19(struct job *VAR_27, union node *VAR_28, int VAR_29)
{
 pid_t VAR_30;
 pid_t VAR_31;

 FUNC_0(("forkshell(%%%td, %p, %d) called\n", VAR_27 - VAR_20, (void )VAR_28,
     VAR_29));
 VAR_3;
 if (VAR_29 == VAR_0 && (VAR_27 == ((void*)0) || VAR_27->nprocs == 0))
  FUNC_1();
 FUNC_8();
 VAR_30 = FUNC_9();
 if (VAR_30 == -1) {
  FUNC_0(("Fork failed, errno=%d\n", VAR_15));
  VAR_4;
  FUNC_6("Cannot fork: %s", FUNC_17(VAR_15));
 }
 if (VAR_30 == 0) {
  struct job *VAR_32;
  int VAR_33;
  int VAR_34;

  FUNC_0(("Child shell %d\n", (int)FUNC_11()));
  VAR_33 = VAR_25;
  VAR_25 = 0;
  VAR_17 = &VAR_21;
  FUNC_4();
  VAR_4;
  VAR_16 = 0;
  FUNC_2();
  if (VAR_29 == VAR_0) {
   FUNC_12(VAR_7);
   FUNC_12(VAR_8);
   if ((VAR_27 == ((void*)0) || VAR_27->nprocs == 0) &&
       ! FUNC_7 ()) {
    FUNC_3(0);
    if (FUNC_13(VAR_12, VAR_6) != 0)
     FUNC_6("cannot open %s: %s",
         VAR_12, FUNC_17(VAR_15));
   }
  }

  VAR_3;
  for (VAR_34 = VAR_23, VAR_32 = VAR_20 ; --VAR_34 >= 0 ; VAR_32++)
   if (VAR_32->used)
    FUNC_10(VAR_32);
  VAR_4;
  if (VAR_33 && VAR_18) {
   FUNC_16(VAR_7);
   FUNC_16(VAR_8);
   FUNC_16(VAR_9);
  }
  return VAR_30;
 }
 if (VAR_25 && VAR_29 != VAR_2 && VAR_22) {
  if (VAR_27 == ((void*)0) || VAR_27->nprocs == 0)
   VAR_31 = VAR_30;
  else
   VAR_31 = VAR_27->ps[0].pid;
  FUNC_15(VAR_30, VAR_31);
 }
 if (VAR_29 == VAR_0) {
  if (VAR_14 != ((void*)0) && VAR_14->state == VAR_5 &&
      !VAR_14->remembered && !VAR_18)
   FUNC_10(VAR_14);
  VAR_13 = VAR_30;
  VAR_14 = VAR_27;
 }
 if (VAR_27) {
  struct procstat *VAR_35 = &VAR_27->ps[VAR_27->nprocs++];
  VAR_35->pid = VAR_30;
  VAR_35->status = -1;
  VAR_35->cmd = VAR_24;
  if (VAR_18 && VAR_25 && VAR_28)
   VAR_35->cmd = FUNC_5(VAR_28);
  VAR_27->foreground = VAR_29 == VAR_1;



 }
 VAR_4;
 FUNC_0(("In parent shell:  child = %d\n", (int)VAR_30));
 return VAR_30;
}
