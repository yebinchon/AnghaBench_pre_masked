
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_mask; scalar_t__ sa_flags; int sa_handler; } ;
struct rusage {int dummy; } ;
struct procstat {int pid; int status; } ;
struct job {int state; scalar_t__ nprocs; int changed; struct procstat* ps; scalar_t__ foreground; int remembered; scalar_t__ used; } ;
typedef int sigset_t ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (char*) ;
 int VAR_14 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_15 ;
 int FUNC_5 (int) ;
 int VAR_16 ;
 struct job* VAR_17 ;
 int FUNC_6 (struct job*) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct job*) ;
 scalar_t__ VAR_20 ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 () ;
 struct job* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_11 (char) ;
 int FUNC_12 (char const*) ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int FUNC_13 (int ,struct sigaction*,struct sigaction*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int *,int *) ;
 int FUNC_17 (int *) ;
 char* FUNC_18 (int) ;
 int FUNC_19 (int*,int,struct rusage*) ;

__attribute__((used)) static pid_t
FUNC_20(int VAR_27, struct job *VAR_28)
{
 struct sigaction VAR_29, VAR_30;
 sigset_t VAR_31, VAR_32;
 pid_t VAR_33;
 int VAR_34;
 struct procstat *VAR_35;
 struct job *VAR_36;
 struct job *VAR_37;
 const char *VAR_38;
 int VAR_39;
 int VAR_40;
 int VAR_41;
 int VAR_42;
 int VAR_43;
 int VAR_44;

 FUNC_0(("dowait(%d, %p) called\n", VAR_27, VAR_28));
 VAR_44 = 0;
 if ((VAR_27 & VAR_1) != 0) {
  FUNC_15(&VAR_31);
  FUNC_16(VAR_12, &VAR_31, &VAR_32);
  VAR_5;
  if (!FUNC_10()) {
   VAR_44 = 1;
   VAR_29.sa_handler = VAR_18;
   VAR_29.sa_flags = 0;
   FUNC_14(&VAR_29.sa_mask);
   FUNC_13(VAR_9, &VAR_29, &VAR_30);
  }
 }
 do {





   VAR_43 = 0;
  if ((VAR_27 & (VAR_0 | VAR_1)) != VAR_0)
   VAR_43 |= VAR_15;
  VAR_33 = FUNC_19(&VAR_34, VAR_43, (struct rusage *)((void*)0));
  FUNC_0(("wait returns %d, status=%d\n", (int)VAR_33, VAR_34));
  if (VAR_33 == 0 && (VAR_27 & VAR_1) != 0) {
   VAR_33 = -1;
   if (((VAR_27 & VAR_2) != 0 ?
       VAR_24 : VAR_25) != 0) {
    VAR_19 = VAR_4;
    break;
   }
   FUNC_17(&VAR_32);
   if (FUNC_9())
    break;
  }
 } while (VAR_33 == -1 && VAR_19 == VAR_4);
 if (VAR_33 == -1 && VAR_19 == VAR_3 && VAR_28 != ((void*)0))
  VAR_28->state = VAR_7;
 if ((VAR_27 & VAR_1) != 0) {
  if (VAR_44)
   FUNC_13(VAR_9, &VAR_30, ((void*)0));
  FUNC_16(VAR_13, &VAR_32, ((void*)0));
  VAR_6;
 }
 if (VAR_33 <= 0)
  return VAR_33;
 VAR_5;
 VAR_37 = ((void*)0);
 for (VAR_36 = VAR_21 ; VAR_36 < VAR_21 + VAR_22 ; VAR_36++) {
  if (VAR_36->used && VAR_36->nprocs > 0) {
   VAR_39 = 1;
   VAR_40 = 1;
   for (VAR_35 = VAR_36->ps ; VAR_35 < VAR_36->ps + VAR_36->nprocs ; VAR_35++) {
    if (VAR_35->pid == -1)
     continue;
    if (VAR_35->pid == VAR_33 && (VAR_35->status == -1 ||
        FUNC_4(VAR_35->status))) {
     FUNC_0(("Changing status of proc %d from 0x%x to 0x%x\n",
         (int)VAR_33, VAR_35->status,
         VAR_34));
     if (FUNC_2(VAR_34)) {
      VAR_35->status = -1;
      VAR_36->state = 0;
     } else
      VAR_35->status = VAR_34;
     VAR_37 = VAR_36;
    }
    if (VAR_35->status == -1)
     VAR_40 = 0;
    else if (FUNC_4(VAR_35->status))
     VAR_39 = 0;
   }
   if (VAR_40) {
    int VAR_45 = VAR_39? VAR_7 : VAR_8;
    if (VAR_36->state != VAR_45) {
     FUNC_0(("Job %td: changing state from %d to %d\n", VAR_36 - VAR_21 + 1, VAR_36->state, VAR_45));
     VAR_36->state = VAR_45;
     if (VAR_36 != VAR_28) {
      if (VAR_39 && !VAR_36->remembered &&
          !VAR_20 && VAR_36 != VAR_17)
       FUNC_8(VAR_36);




     }
    }
   }
  }
 }
 VAR_6;
 if (!VAR_37 || VAR_37->state == 0)
  ;
 else if ((!VAR_26 || !VAR_20 || VAR_37 == VAR_28) &&
     VAR_37->foreground && VAR_37->state != VAR_8) {
  VAR_41 = 0;
  VAR_42 = 0;
  for (VAR_35 = VAR_37->ps; VAR_35 < VAR_37->ps + VAR_37->nprocs; VAR_35++)
   if (FUNC_3(VAR_35->status)) {
    VAR_41 = FUNC_5(VAR_35->status);
    VAR_42 = FUNC_1(VAR_35->status);
   }
  if (VAR_41 > 0 && VAR_41 != VAR_10 && VAR_41 != VAR_11) {
   VAR_38 = FUNC_18(VAR_41);
   if (VAR_38 != ((void*)0))
    FUNC_12(VAR_38);
   else
    FUNC_12("Unknown signal");
   if (VAR_42)
    FUNC_12(" (core dumped)");
   FUNC_11('\n');
   FUNC_7(VAR_23);
  }
 } else {
  FUNC_0(("Not printing status, rootshell=%d, job=%p\n", VAR_26, VAR_28));
  VAR_37->changed = 1;
 }
 return VAR_33;
}
