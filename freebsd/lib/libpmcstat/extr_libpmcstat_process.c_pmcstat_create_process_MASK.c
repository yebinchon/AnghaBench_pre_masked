
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcstat_target {int pt_pid; } ;
struct pmcstat_args {int pa_targets; int * pa_argv; } ;
struct kevent {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kevent*,int ,int ,int,int ,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,struct pmcstat_target*,int ) ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int,struct kevent*,int,int *,int ,int *) ;
 int FUNC_9 (int ,int ) ;
 struct pmcstat_target* FUNC_10 (int) ;
 int VAR_11 ;
 scalar_t__ FUNC_11 (int,char*,int) ;
 scalar_t__ FUNC_12 (int ,int ,int ,int*) ;
 int FUNC_13 (int,char*,int) ;

void
FUNC_14(int *VAR_12, struct pmcstat_args *VAR_13,
    int VAR_14)
{
 char VAR_15;
 pid_t VAR_16;
 struct kevent VAR_17;
 struct pmcstat_target *VAR_18;

 if (FUNC_12(VAR_0, VAR_10, 0, VAR_12) < 0)
  FUNC_3(VAR_5, "ERROR: cannot create socket pair");

 switch (VAR_16 = FUNC_6()) {
 case -1:
  FUNC_3(VAR_5, "ERROR: cannot fork");


 case 0:
  (void) FUNC_2(VAR_12[VAR_8]);


  if (FUNC_13(VAR_12[VAR_1], "+", 1) != 1)
   FUNC_3(VAR_5, "ERROR (child): cannot write token");


  if (FUNC_11(VAR_12[VAR_1], &VAR_15, 1) < 0)
   FUNC_3(VAR_5, "ERROR (child): cannot read token");
  (void) FUNC_2(VAR_12[VAR_1]);


  FUNC_5(*VAR_13->pa_argv, VAR_13->pa_argv);

  FUNC_9(FUNC_7(), VAR_9);
  FUNC_3(VAR_5, "ERROR: execvp \"%s\" failed", *VAR_13->pa_argv);


 default:
  (void) FUNC_2(VAR_12[VAR_1]);
  break;
 }


 FUNC_0(&VAR_17, VAR_16, VAR_2, VAR_3 | VAR_4, VAR_7, 0,
     ((void*)0));
 if (FUNC_8(VAR_14, &VAR_17, 1, ((void*)0), 0, ((void*)0)) < 0)
  FUNC_3(VAR_5, "ERROR: cannot monitor child process %d", VAR_16);

 if ((VAR_18 = FUNC_10(sizeof(*VAR_18))) == ((void*)0))
  FUNC_4(VAR_6, "ERROR: Out of memory.");

 VAR_18->pt_pid = VAR_16;
 FUNC_1(&VAR_13->pa_targets, VAR_18, VAR_11);


 if (FUNC_11(VAR_12[VAR_8], &VAR_15, 1) < 0)
  FUNC_3(VAR_5, "ERROR (parent): cannot read token");

 return;
}
