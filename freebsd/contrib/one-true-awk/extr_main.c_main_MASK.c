
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int,char**) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 () ;
 char* VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (int) ;
 int VAR_12 ;
 int FUNC_8 (int ,char*,char*) ;
 int FUNC_9 (char*) ;
 char* VAR_13 ;
 int FUNC_10 (int) ;
 scalar_t__ VAR_14 ;
 char** VAR_15 ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char const*,char) ;
 int FUNC_13 (int ) ;
 int VAR_16 ;
 int FUNC_14 (int ) ;
 int VAR_17 ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (int ,int ) ;
 int VAR_18 ;
 int FUNC_18 (unsigned long) ;
 int VAR_19 ;
 scalar_t__ FUNC_19 (char*,char*) ;
 int FUNC_20 () ;
 int VAR_20 ;
 char* VAR_21 ;
 int VAR_22 ;
 int * VAR_23 ;
 int FUNC_21 () ;

int FUNC_22(int VAR_24, char *VAR_25[])
{
 const char *VAR_26 = ((void*)0);

 FUNC_16(VAR_2, "");
 FUNC_16(VAR_1, "");
 FUNC_16(VAR_3, "C");
 VAR_7 = VAR_25[0];
 if (VAR_24 == 1) {
  FUNC_8(VAR_19,
    "usage: %s [-F fs] [-v var=value] [-f progfile | 'prog'] [file ...]\n",
    VAR_7);
  FUNC_7(1);
 }
 FUNC_17(VAR_6, VAR_12);


 VAR_18 = 1;
 FUNC_18((unsigned long) VAR_18);

 VAR_23 = ((void*)0);
 VAR_20 = FUNC_10(VAR_5/VAR_5);
 while (VAR_24 > 1 && VAR_25[1][0] == '-' && VAR_25[1][1] != '\0') {
  if (FUNC_19(VAR_25[1],"-version") == 0 || FUNC_19(VAR_25[1],"--version") == 0) {
   FUNC_11("awk %s\n", VAR_21);
   FUNC_7(0);
   break;
  }
  if (FUNC_19(VAR_25[1], "--") == 0) {
   VAR_24--;
   VAR_25++;
   break;
  }
  switch (VAR_25[1][1]) {
  case 's':
   if (FUNC_19(VAR_25[1], "-safe") == 0)
    VAR_17 = 1;
   break;
  case 'f':
   if (VAR_25[1][2] != 0) {
    if (VAR_14 >= VAR_4 - 1)
     FUNC_0("too many -f options");
    VAR_15[VAR_14++] = &VAR_25[1][2];
   } else {
    VAR_24--; VAR_25++;
    if (VAR_24 <= 1)
     FUNC_0("no program filename");
    if (VAR_14 >= VAR_4 - 1)
     FUNC_0("too many -f options");
    VAR_15[VAR_14++] = VAR_25[1];
   }
   break;
  case 'F':
   if (VAR_25[1][2] != 0) {
    if (VAR_25[1][2] == 't' && VAR_25[1][3] == 0)
     VAR_26 = "\t";
    else if (VAR_25[1][2] != 0)
     VAR_26 = &VAR_25[1][2];
   } else {
    VAR_24--; VAR_25++;
    if (VAR_24 > 1 && VAR_25[1][0] == 't' && VAR_25[1][1] == 0)
     VAR_26 = "\t";
    else if (VAR_24 > 1 && VAR_25[1][0] != 0)
     VAR_26 = &VAR_25[1][0];
   }
   if (VAR_26 == ((void*)0) || *VAR_26 == '\0')
    FUNC_1("field separator FS is empty");
   break;
  case 'v':
   if (VAR_25[1][2] != 0) {
    if (FUNC_9(&VAR_25[1][2]))
     FUNC_15(&VAR_25[1][2]);
    else
     FUNC_0("invalid -v option argument: %s", &VAR_25[1][2]);
   } else {
    VAR_24--; VAR_25++;
    if (VAR_24 <= 1)
     FUNC_0("no variable name");
    if (FUNC_9(VAR_25[1]))
     FUNC_15(VAR_25[1]);
    else
     FUNC_0("invalid -v option argument: %s", VAR_25[1]);
   }
   break;
  case 'd':
   VAR_9 = FUNC_3(&VAR_25[1][2]);
   if (VAR_9 == 0)
    VAR_9 = 1;
   FUNC_11("awk %s\n", VAR_21);
   break;
  default:
   FUNC_1("unknown option %s ignored", VAR_25[1]);
   break;
  }
  VAR_24--;
  VAR_25++;
 }

 if (VAR_14 == 0) {
  if (VAR_24 <= 1) {
   if (VAR_9)
    FUNC_7(0);
   FUNC_0("no program given");
  }
     FUNC_5( ("program = |%s|\n", VAR_25[1]) );
  VAR_13 = VAR_25[1];
  VAR_24--;
  VAR_25++;
 }
 FUNC_13(VAR_16);
 FUNC_20();
 VAR_8 = 1;
 VAR_25[0] = VAR_7;
    FUNC_5( ("argc=%d, argv[0]=%s\n", VAR_24, VAR_25[0]) );
 FUNC_2(VAR_24, VAR_25);
 if (!VAR_17)
  FUNC_6(VAR_10);
 FUNC_21();
 FUNC_16(VAR_3, "");
 if (VAR_26)
  *VAR_0 = FUNC_12(VAR_26, '\0');
    FUNC_5( ("errorflag=%d\n", VAR_11) );
 if (VAR_11 == 0) {
  VAR_8 = 0;
  FUNC_14(VAR_22);
 } else
  FUNC_4();
 return(VAR_11);
}
