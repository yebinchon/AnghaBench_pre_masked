
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ip; int chassis; int geoslot; } ;
typedef TYPE_1__ unit_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*,int ,int ,char*) ;
 int FUNC_6 (char*,int ,char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*) ;
 char* FUNC_11 (char*,char*) ;
 TYPE_1__** VAR_5 ;

int FUNC_12(char *VAR_6) {
 FILE *VAR_7;
 char VAR_8[VAR_2];
 char *VAR_9, *VAR_10;
 int VAR_11;
 int VAR_12, VAR_13;
 unit_t *VAR_14;

 FUNC_0();
 if ((VAR_7 = FUNC_3("/etc/hosts", "r")) == ((void*)0)) {
  FUNC_6(VAR_6, VAR_3, "Cannot open '/etc/hosts' for reading.");
  return -1;
 }
 while (FUNC_2(VAR_8, VAR_2-1, VAR_7)) {

  VAR_11 = FUNC_8(VAR_8, "#\n\r");
  *(VAR_8 + VAR_11) = '\0';

  VAR_11 = FUNC_10(VAR_8, " \t");
  if (VAR_11 == FUNC_9(VAR_8))
   continue;
  VAR_9 = VAR_8 + VAR_11;

  if ((VAR_10 = FUNC_11(VAR_9, "_I_")) == ((void*)0))
   continue;
  if (*(VAR_10 + 4) != '_')
   continue;
  *(VAR_9 + FUNC_8(VAR_9, " \t")) = '\0';

  VAR_12 = *(VAR_10 + 3) - '0';
  VAR_13 = *(VAR_10 + 5) - '0';
  if (VAR_12 < 1 || VAR_12 > VAR_0 ||
   VAR_13 < 1 || VAR_13 > VAR_1) {
   FUNC_6(VAR_6, VAR_3, "Invalid ACN name in '/etc/hosts'.");
   continue;
  }
  if ((VAR_10 = (char *)FUNC_4(FUNC_9(VAR_9) + 1)) == ((void*)0)) {
   FUNC_5(VAR_6, VAR_3,
       VAR_4, "malloc");
   continue;
  }
  FUNC_7(VAR_10, VAR_9);
  VAR_14 = &VAR_5[VAR_12][VAR_13];
  VAR_14->ip = VAR_10;
  VAR_14->chassis = VAR_12;
  VAR_14->geoslot = VAR_13;
 }
 FUNC_1(VAR_7);
 if (*VAR_6) return -1;
 else return 0;
}
