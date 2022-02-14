
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int verdef ;
struct sigaction {int sa_handler; } ;
typedef int sigset_t ;
typedef int pid_t ;
typedef int opath ;
typedef int off_t ;
typedef int off64_t ;
typedef int ipath ;
struct TYPE_4__ {int dt_cpp_argc; int dt_vmax; int dt_stdcmode; int dt_cpp_path; int dt_cpp_argv; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef int act ;
typedef int FILE ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char**,int) ;
 int FUNC_4 (struct sigaction*,int) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (int,int) ;
 scalar_t__ VAR_12 ;
 int FUNC_8 (int ,char**) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;
 int FUNC_14 (char**) ;
 int FUNC_15 (int *,int ,int ) ;
 int FUNC_16 (int *,int,int ) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (int,int,int ) ;
 char** FUNC_20 (int) ;
 int FUNC_21 (int ,struct sigaction*,struct sigaction*) ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int ,int *,int *) ;
 int FUNC_25 (char*,int,char*,int) ;
 int * FUNC_26 () ;
 int FUNC_27 (int,int*,int ) ;

__attribute__((used)) static FILE *
FUNC_28(dtrace_hdl_t *VAR_13, FILE *VAR_14)
{
 int VAR_15 = VAR_13->dt_cpp_argc;
 char **VAR_16 = FUNC_20(sizeof (char *) * (VAR_15 + 5));
 FILE *VAR_17 = FUNC_26();




 char VAR_18[32];

 struct sigaction VAR_19, VAR_20;
 sigset_t VAR_21, VAR_22;

 int VAR_23, VAR_24;
 pid_t VAR_25;



 off_t VAR_26 = 0;

 int VAR_27;

 if (VAR_16 == ((void*)0) || VAR_17 == ((void*)0)) {
  (void) FUNC_6(VAR_13, VAR_12);
  goto err;
 }







 if (FUNC_18(FUNC_12(VAR_14)) == 0 && (VAR_26 = FUNC_17(VAR_14)) != -1) {
  if ((VAR_27 = FUNC_11(VAR_14)) == '#' && (VAR_27 = FUNC_11(VAR_14)) == '!') {
   for (VAR_26 += 2; VAR_27 != '\n'; VAR_26++) {
    if ((VAR_27 = FUNC_11(VAR_14)) == VAR_6)
     break;
   }
   if (VAR_27 == '\n')
    VAR_26--;
  }
  (void) FUNC_10(VAR_14);
  (void) FUNC_16(VAR_14, VAR_26, VAR_7);
 }






 FUNC_3(VAR_13->dt_cpp_argv, VAR_16, sizeof (char *) * VAR_15);

 (void) FUNC_25(VAR_18, sizeof (VAR_18),
     "-D__SUNW_D_VERSION=0x%08x", VAR_13->dt_vmax);
 VAR_16[VAR_15++] = VAR_18;
 VAR_16[VAR_15++] = "-P";

 VAR_16[VAR_15] = ((void*)0);
 (void) FUNC_23(&VAR_21);
 (void) FUNC_22(&VAR_21, VAR_8);
 (void) FUNC_24(VAR_9, &VAR_21, &VAR_22);

 FUNC_4(&VAR_19, sizeof (VAR_19));
 VAR_19.sa_handler = VAR_10;
 (void) FUNC_21(VAR_8, &VAR_19, &VAR_20);

 if ((VAR_25 = FUNC_13()) == -1) {
  (void) FUNC_21(VAR_8, &VAR_20, ((void*)0));
  (void) FUNC_24(VAR_11, &VAR_22, ((void*)0));
  (void) FUNC_6(VAR_13, VAR_3);
  goto err;
 }

 if (VAR_25 == 0) {

  if (FUNC_18(FUNC_12(VAR_14)) == 0)
   FUNC_19(FUNC_12(VAR_14), VAR_26, VAR_7);
  FUNC_7(FUNC_12(VAR_14), 0);
  FUNC_7(FUNC_12(VAR_17), 1);

  (void) FUNC_8(VAR_13->dt_cpp_path, VAR_16);
  FUNC_2(VAR_12 == VAR_5 ? 127 : 126);
 }

 do {
  FUNC_5("waiting for %s (PID %d)\n", VAR_13->dt_cpp_path,
      (int)VAR_25);
 } while (FUNC_27(VAR_25, &VAR_23, 0) == -1 && VAR_12 == VAR_4);

 (void) FUNC_21(VAR_8, &VAR_20, ((void*)0));
 (void) FUNC_24(VAR_11, &VAR_22, ((void*)0));

 FUNC_5("%s returned exit status 0x%x\n", VAR_13->dt_cpp_path, VAR_23);
 VAR_24 = FUNC_1(VAR_23) ? FUNC_0(VAR_23) : -1;

 if (VAR_24 != 0) {
  switch (VAR_24) {
  case 126:
   (void) FUNC_6(VAR_13, VAR_2);
   break;
  case 127:
   (void) FUNC_6(VAR_13, VAR_0);
   break;
  default:
   (void) FUNC_6(VAR_13, VAR_1);
  }
  goto err;
 }

 FUNC_14(VAR_16);
 (void) FUNC_10(VAR_17);
 (void) FUNC_15(VAR_17, 0, VAR_7);
 return (VAR_17);

err:
 FUNC_14(VAR_16);
 (void) FUNC_9(VAR_17);
 return (((void*)0));
}
