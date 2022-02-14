
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tinfo ;
typedef int term_attr ;
struct termios {char* c_cc; int c_lflag; int c_cflag; int c_oflag; int c_iflag; } ;
struct stat {scalar_t__ st_size; int st_mode; } ;
typedef scalar_t__ pid_t ;
typedef int FILE ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 scalar_t__ FUNC_1 (char**,char*,int ) ;
 int FUNC_2 (struct termios*,int ) ;
 char* VAR_18 ;
 int FUNC_3 (int) ;
 int * VAR_19 ;
 int * VAR_20 ;
 char* VAR_21 ;
 char* VAR_22 ;
 int FUNC_4 (int,char*,...) ;
 scalar_t__ FUNC_5 (char const*,char const*,char*,char*,char*,char*,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int ) ;
 int * FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (int *,int *,struct termios*,int *) ;
 char* FUNC_11 (char*) ;
 int FUNC_12 (int,char**,char*) ;
 char* VAR_23 ;
 int FUNC_13 (int) ;
 int VAR_24 ;
 int FUNC_14 (struct termios*,int ,int) ;
 char* FUNC_15 (int *,size_t,int ,int ,int,int ) ;
 int FUNC_16 (char*,size_t) ;
 int FUNC_17 (char const*,int ) ;
 scalar_t__ FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (char*,char const*,int) ;
 int FUNC_20 (int ,int ) ;
 int VAR_25 ;
 int * VAR_26 ;
 int FUNC_21 (char*,int,char*,char const*,char*) ;
 int FUNC_22 (char const*,struct stat*) ;
 int * FUNC_23 (char*) ;
 int FUNC_24 () ;
 int VAR_27 ;
 int FUNC_25 (char*,char*) ;
 int FUNC_26 () ;

int
FUNC_27(int VAR_28, char *VAR_29[])
{
 extern char *VAR_30;
 extern int VAR_31;
 const char *VAR_32, *VAR_33, *VAR_34;
 int VAR_35;
 pid_t VAR_36;
 extern FILE *VAR_37;
 char *VAR_38, *VAR_39, *VAR_40, *VAR_41;
 struct termios VAR_42;
 struct stat VAR_43;

 VAR_32 = VAR_33 = VAR_34 = ((void*)0);
 VAR_27 = 0;

 while ((VAR_35 = FUNC_12(VAR_28, VAR_29, "vC:I:p:s:t:T:")) != -1) {
  switch(VAR_35) {
  case 'I':
   VAR_23 = VAR_30;
   break;
  case 'C':
   VAR_18 = VAR_30;
   break;
  case 'T':
   VAR_32 = VAR_30;
   break;
  case 'p':
   VAR_32 = VAR_30;
   break;
  case 's':
   VAR_34 = VAR_30;
   break;
  case 't':
   VAR_33 = VAR_30;
   break;
  case 'v':
   VAR_27 = 1;
   break;
  case '?':
  default:
   FUNC_24();
   break;
  }
 }

 VAR_28 -= VAR_31;
 VAR_29 += VAR_31;
 if (VAR_28 < 1)
  FUNC_24();

 if (VAR_32 == ((void*)0))
  VAR_32 = VAR_2;

 if (VAR_34 == ((void*)0))
  VAR_34 = VAR_0;

 if (VAR_33 == ((void*)0))
  VAR_33 = VAR_1;

 if (VAR_18 == ((void*)0))
  VAR_18 = FUNC_11("CHECK_PATH");
 if ((VAR_18 == ((void*)0)) || (VAR_18[0] == '\0')) {
  FUNC_25("$CHECK_PATH not set, defaulting to %s", VAR_21);
  VAR_18 = VAR_21;
 }

 if (VAR_23 == ((void*)0))
  VAR_23 = FUNC_11("INCLUDE_PATH");
 if ((VAR_23 == ((void*)0)) || (VAR_23[0] == '\0')) {
  FUNC_25("$INCLUDE_PATH not set, defaulting to %s",
   VAR_22);
  VAR_23 = VAR_22;
 }

 FUNC_20(VAR_10, VAR_25);

 if (FUNC_19("TERM", VAR_33, 1) != 0)
  FUNC_4(2, "Failed to set TERM variable");

 if (FUNC_22(VAR_32, &VAR_43) == -1)
  FUNC_4(1, "Cannot stat %s", VAR_32);

 if (FUNC_0(VAR_43.st_mode)) {
  char VAR_44[VAR_6];
  int VAR_45 = FUNC_21(VAR_44, sizeof(VAR_44), "%s/%s", VAR_32,
      "terminfo.cdb");
  if (FUNC_22(VAR_44, &VAR_43) == -1)
   FUNC_4(1, "Cannot stat `%s'", VAR_44);
  if (VAR_45 >= 4)
   VAR_44[VAR_45 - 4] = '\0';
  if (FUNC_19("TERMINFO", VAR_44, 1) != 0)
   FUNC_4(1, "Failed to set TERMINFO variable");
 } else {
  int VAR_46;
  char *VAR_47;
  if ((VAR_46 = FUNC_17(VAR_32, VAR_8)) == -1)
   FUNC_4(1, "Cannot open `%s'", VAR_32);
  if ((VAR_47 = FUNC_15(((void*)0), (size_t)VAR_43.st_size, VAR_9, VAR_5,
   VAR_46, 0)) == VAR_4)
   FUNC_4(1, "Cannot map `%s'", VAR_32);
  if (FUNC_19("TERMINFO", VAR_47, 1) != 0)
   FUNC_4(1, "Failed to set TERMINFO variable");
  FUNC_3(VAR_46);
  FUNC_16(VAR_47, (size_t)VAR_43.st_size);
 }

 if (FUNC_18(VAR_19) < 0)
  FUNC_4(1, "Command pipe creation failed");

 if (FUNC_18(VAR_26) < 0)
  FUNC_4(1, "Slave pipe creation failed");




 FUNC_14(&VAR_42, 0, sizeof(VAR_42));
 VAR_42.c_iflag = VAR_12;
 VAR_42.c_oflag = VAR_14;
 VAR_42.c_cflag = VAR_11;
 VAR_42.c_lflag = VAR_13;
 FUNC_2(&VAR_42, VAR_15);
 VAR_42.c_cc[VAR_16] = '\b';
 VAR_42.c_cc[VAR_17] = '\025';

 if ((VAR_36 = FUNC_10(&VAR_24, ((void*)0), &VAR_42, ((void*)0))) < 0)
  FUNC_4(1, "Fork of pty for slave failed\n");

 if (VAR_36 == 0) {

  if (FUNC_1(&VAR_38, "%d", VAR_19[0]) < 0)
   FUNC_4(1, "arg1 conversion failed");

  if (FUNC_1(&VAR_39, "%d", VAR_19[1]) < 0)
   FUNC_4(1, "arg2 conversion failed");

  if (FUNC_1(&VAR_40, "%d", VAR_26[0]) < 0)
   FUNC_4(1, "arg3 conversion failed");

  if (FUNC_1(&VAR_41, "%d", VAR_26[1]) < 0)
   FUNC_4(1, "arg4 conversion failed");

  if (FUNC_5(VAR_34, VAR_34, VAR_38, VAR_39, VAR_40, VAR_41, ((void*)0)) < 0)
   FUNC_4(1, "Exec of slave %s failed", VAR_34);


 }

 FUNC_8(VAR_24, VAR_3, VAR_7);

 if ((VAR_37 = FUNC_9(VAR_29[0], "r")) == ((void*)0))
  FUNC_4(1, "Cannot open command file %s", VAR_29[0]);

 if ((VAR_20 = FUNC_23(VAR_29[0])) == ((void*)0))
  FUNC_4(2, "Failed to alloc memory for test file name");

 FUNC_13(1);

 FUNC_26();
 FUNC_7(VAR_37);

 FUNC_6(0);
}
