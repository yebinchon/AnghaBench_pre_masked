
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pid_t ;
typedef int linename ;
typedef int buf ;
struct TYPE_2__ {int do_compact; int do_force; int do_resolv; int test_only; int do_quiet; int show_sets; } ;
typedef int FILE ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int) ;
 TYPE_1__ VAR_5 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int ,char*,...) ;
 int VAR_6 ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (char const*,char**) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int,char*) ;
 scalar_t__ FUNC_11 (char*,int,int *) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (char const*,char*) ;
 int FUNC_14 () ;
 int FUNC_15 (int,char**,char*) ;
 int FUNC_16 (int,char**) ;
 int FUNC_17 (int,int ) ;
 char* VAR_7 ;
 int VAR_8 ;
 int FUNC_18 (int*) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*,int,char*,int) ;
 int FUNC_21 (int,int*,int ) ;

__attribute__((used)) static void
FUNC_22(int VAR_9, char *VAR_10[])
{

 char VAR_11[4096];
 char *VAR_12 = VAR_10[0];
 const char *VAR_13 = ((void*)0);
 const char *VAR_14 = VAR_10[VAR_9-1];
 int VAR_15, VAR_16=0;
 FILE *VAR_17 = ((void*)0);
 pid_t VAR_18 = 0;

 while ((VAR_15 = FUNC_15(VAR_9, VAR_10, "cfNnp:qS")) != -1) {
  switch(VAR_15) {
  case 'c':
   VAR_5.do_compact = 1;
   break;

  case 'f':
   VAR_5.do_force = 1;
   break;

  case 'N':
   VAR_5.do_resolv = 1;
   break;

  case 'n':
   VAR_5.test_only = 1;
   break;

  case 'p':
   if (VAR_8 == VAR_9)
    FUNC_7(VAR_3, "no filename argument");
   VAR_13 = VAR_7;
   VAR_10[VAR_9-1] = ((void*)0);
   VAR_10 += VAR_8 - 1;
   VAR_9 -= VAR_8;
   VAR_8 = VAR_9;
   break;

  case 'q':
   VAR_5.do_quiet = 1;
   break;

  case 'S':
   VAR_5.show_sets = 1;
   break;

  default:
   FUNC_7(VAR_3, "bad arguments, for usage"
        " summary ``ipfw''");
  }

 }

 if (VAR_13 == ((void*)0) && VAR_9 != VAR_8 + 1)
  FUNC_7(VAR_3, "extraneous filename arguments %s", VAR_10[VAR_9-1]);

 if ((VAR_17 = FUNC_13(VAR_14, "r")) == ((void*)0))
  FUNC_6(VAR_2, "fopen: %s", VAR_14);

 if (VAR_13 != ((void*)0)) {
  int VAR_19[2];

  if (FUNC_18(VAR_19) == -1)
   FUNC_6(VAR_1, "cannot create pipe");

  VAR_18 = FUNC_14();
  if (VAR_18 == -1)
   FUNC_6(VAR_1, "cannot fork");

  if (VAR_18 == 0) {




   if (FUNC_5(FUNC_12(VAR_17), 0) == -1
       || FUNC_5(VAR_19[1], 1) == -1)
    FUNC_6(VAR_1, "dup2()");
   FUNC_9(VAR_17);
   FUNC_4(VAR_19[1]);
   FUNC_4(VAR_19[0]);
   FUNC_8(VAR_13, VAR_10);
   FUNC_6(VAR_1, "execvp(%s) failed", VAR_13);
  } else {
   FUNC_9(VAR_17);
   FUNC_4(VAR_19[1]);
   if ((VAR_17 = FUNC_10(VAR_19[0], "r")) == ((void*)0)) {
    int VAR_20 = VAR_6;

    (void)FUNC_17(VAR_18, VAR_4);
    VAR_6 = VAR_20;
    FUNC_6(VAR_1, "fdopen()");
   }
  }
 }

 while (FUNC_11(VAR_11, sizeof(VAR_11), VAR_17)) {
  char VAR_21[20];
  char *VAR_22[2];

  VAR_16++;
  FUNC_20(VAR_21, sizeof(VAR_21), "Line %d", VAR_16);
  FUNC_19(VAR_21);
  VAR_22[0] = VAR_12;
  VAR_22[1] = VAR_11;
  FUNC_16(2, VAR_22);
 }
 FUNC_9(VAR_17);
 if (VAR_13 != ((void*)0)) {
  int VAR_23;

  if (FUNC_21(VAR_18, &VAR_23, 0) == -1)
   FUNC_7(VAR_1, "waitpid()");
  if (FUNC_1(VAR_23) && FUNC_0(VAR_23) != VAR_0)
   FUNC_7(VAR_2,
       "preprocessor exited with status %d",
       FUNC_0(VAR_23));
  else if (FUNC_2(VAR_23))
   FUNC_7(VAR_2,
       "preprocessor exited with signal %d",
       FUNC_3(VAR_23));
 }
}
