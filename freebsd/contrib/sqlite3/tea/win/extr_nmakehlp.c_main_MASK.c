
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int msg ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (int ,char*,int,int *,int *) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,int,char*,char*) ;

int
FUNC_12(
    int VAR_3,
    char *VAR_4[])
{
    char VAR_5[300];
    DWORD VAR_6;
    int VAR_7;





    FUNC_7(VAR_0 | VAR_1);





    FUNC_6("CL", "");
    FUNC_6("LINK", "");

    if (VAR_3 > 1 && *VAR_4[1] == '-') {
 switch (*(VAR_4[1]+1)) {
 case 'c':
     if (VAR_3 != 3) {
  VAR_7 = FUNC_11(VAR_5, sizeof(VAR_5) - 1,
          "usage: %s -c <compiler option>\n"
   "Tests for whether cl.exe supports an option\n"
   "exitcodes: 0 == no, 1 == yes, 2 == error\n", VAR_4[0]);
  FUNC_9(FUNC_2(VAR_2), VAR_5, VAR_7,
   &VAR_6, ((void*)0));
  return 2;
     }
     return FUNC_0(VAR_4[2]);
 case 'l':
     if (VAR_3 != 3) {
  VAR_7 = FUNC_11(VAR_5, sizeof(VAR_5) - 1,
          "usage: %s -l <linker option>\n"
   "Tests for whether link.exe supports an option\n"
   "exitcodes: 0 == no, 1 == yes, 2 == error\n", VAR_4[0]);
  FUNC_9(FUNC_2(VAR_2), VAR_5, VAR_7,
   &VAR_6, ((void*)0));
  return 2;
     }
     return FUNC_1(VAR_4[2]);
 case 'f':
     if (VAR_3 == 2) {
  VAR_7 = FUNC_11(VAR_5, sizeof(VAR_5) - 1,
   "usage: %s -f <string> <substring>\n"
   "Find a substring within another\n"
   "exitcodes: 0 == no, 1 == yes, 2 == error\n", VAR_4[0]);
  FUNC_9(FUNC_2(VAR_2), VAR_5, VAR_7,
   &VAR_6, ((void*)0));
  return 2;
     } else if (VAR_3 == 3) {




  return 0;
     } else {
  return FUNC_4(VAR_4[2], VAR_4[3]);
     }
 case 's':
     if (VAR_3 == 2) {
  VAR_7 = FUNC_11(VAR_5, sizeof(VAR_5) - 1,
   "usage: %s -s <substitutions file> <file>\n"
   "Perform a set of string map type substutitions on a file\n"
   "exitcodes: 0\n",
   VAR_4[0]);
  FUNC_9(FUNC_2(VAR_2), VAR_5, VAR_7,
   &VAR_6, ((void*)0));
  return 2;
     }
     return FUNC_8(VAR_4[2], VAR_4[3]);
 case 'V':
     if (VAR_3 != 4) {
  VAR_7 = FUNC_11(VAR_5, sizeof(VAR_5) - 1,
      "usage: %s -V filename matchstring\n"
      "Extract a version from a file:\n"
      "eg: pkgIndex.tcl \"package ifneeded http\"",
      VAR_4[0]);
  FUNC_9(FUNC_2(VAR_2), VAR_5, VAR_7,
      &VAR_6, ((void*)0));
  return 0;
     }
     FUNC_10("%s\n", FUNC_3(VAR_4[2], VAR_4[3]));
     return 0;
 case 'Q':
     if (VAR_3 != 3) {
  VAR_7 = FUNC_11(VAR_5, sizeof(VAR_5) - 1,
      "usage: %s -Q path\n"
      "Emit the fully qualified path\n"
      "exitcodes: 0 == no, 1 == yes, 2 == error\n", VAR_4[0]);
  FUNC_9(FUNC_2(VAR_2), VAR_5, VAR_7,
      &VAR_6, ((void*)0));
  return 2;
     }
     return FUNC_5(VAR_4[2]);
 }
    }
    VAR_7 = FUNC_11(VAR_5, sizeof(VAR_5) - 1,
     "usage: %s -c|-f|-l|-Q|-s|-V ...\n"
     "This is a little helper app to equalize shell differences between WinNT and\n"
     "Win9x and get nmake.exe to accomplish its job.\n",
     VAR_4[0]);
    FUNC_9(FUNC_2(VAR_2), VAR_5, VAR_7, &VAR_6, ((void*)0));
    return 2;
}
