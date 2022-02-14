
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char**) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,char*,char const*) ;
 scalar_t__ FUNC_2 (char*,char**,int) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,...) ;
 int VAR_1 ;
 int FUNC_5 (char*) ;
 void FUNC_6 (int,int) ;

__attribute__((used)) static int
FUNC_7(void (*VAR_2)(int, int), const char *VAR_3, char *VAR_4)
{
    char **VAR_5;
    extern char *VAR_6[];
    int VAR_7 = 0;

    if (FUNC_3(VAR_4, "help") || FUNC_3(VAR_4, "?")) {
 int VAR_8, VAR_9;

 FUNC_4("usage: send %s <value|option>\n", VAR_3);
 FUNC_4("\"value\" must be from 0 to 255\n");
 FUNC_4("Valid options are:\n\t");

 VAR_8 = 8;
 for (VAR_5 = VAR_6; *VAR_5; VAR_5++) {
     VAR_9 = FUNC_5(*VAR_5) + 3;
     if (VAR_8 + VAR_9 > 65) {
  FUNC_4("\n\t");
  VAR_8 = 8;
     }
     FUNC_4(" \"%s\"", *VAR_5);
     VAR_8 += VAR_9;
 }
 FUNC_4("\n");
 return 0;
    }
    VAR_5 = (char **)FUNC_2(VAR_4, VAR_6, sizeof(char *));
    if (FUNC_0(VAR_5)) {
 FUNC_1(VAR_1,"'%s': ambiguous argument ('send %s ?' for help).\n",
     VAR_4, VAR_3);
 return 0;
    }
    if (VAR_5) {
 VAR_7 = VAR_5 - VAR_6;
    } else {
 char *VAR_10 = VAR_4;

 while (*VAR_10 >= '0' && *VAR_10 <= '9') {
     VAR_7 *= 10;
     VAR_7 += *VAR_10 - '0';
     VAR_10++;
 }
 if (*VAR_10 != 0) {
     FUNC_1(VAR_1, "'%s': unknown argument ('send %s ?' for help).\n",
     VAR_4, VAR_3);
     return 0;
 } else if (VAR_7 < 0 || VAR_7 > 255) {
     FUNC_1(VAR_1, "'%s': bad value ('send %s ?' for help).\n",
     VAR_4, VAR_3);
     return 0;
 }
    }
    if (!VAR_0) {
 FUNC_4("?Need to be connected first.\n");
 return 0;
    }
    (*VAR_2)(VAR_7, 1);
    return 1;
}
