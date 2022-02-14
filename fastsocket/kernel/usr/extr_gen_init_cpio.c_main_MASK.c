
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* type; int (* handler ) (char*) ;} ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 TYPE_1__* VAR_2 ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_5 (char*,char*) ;
 char* FUNC_6 (int ) ;
 size_t FUNC_7 (char*) ;
 char* FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;

int FUNC_11 (int VAR_5, char *VAR_6[])
{
 FILE *VAR_7;
 char VAR_8[VAR_0];
 char *VAR_9, *VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;

 if (2 != VAR_5) {
  FUNC_10(VAR_6[0]);
  FUNC_1(1);
 }

 if (!FUNC_5(VAR_6[1], "-"))
  VAR_7 = VAR_4;
 else if (! (VAR_7 = FUNC_3(VAR_6[1], "r"))) {
  FUNC_4(VAR_3, "ERROR: unable to open '%s': %s\n\n",
   VAR_6[1], FUNC_6(VAR_1));
  FUNC_10(VAR_6[0]);
  FUNC_1(1);
 }

 while (FUNC_2(VAR_8, VAR_0, VAR_7)) {
  int VAR_13;
  size_t VAR_14 = FUNC_7(VAR_8);

  VAR_12++;

  if ('#' == *VAR_8) {

   continue;
  }

  if (! (VAR_10 = FUNC_8(VAR_8, " \t"))) {
   FUNC_4(VAR_3,
    "ERROR: incorrect format, could not locate file type line %d: '%s'\n",
    VAR_12, VAR_8);
   VAR_11 = -1;
   break;
  }

  if ('\n' == *VAR_10) {

   continue;
  }

  if (VAR_14 == FUNC_7(VAR_10)) {

   continue;
  }

  if (! (VAR_9 = FUNC_8(((void*)0), "\n"))) {
   FUNC_4(VAR_3,
    "ERROR: incorrect format, newline required line %d: '%s'\n",
    VAR_12, VAR_8);
   VAR_11 = -1;
  }

  for (VAR_13 = 0; VAR_2[VAR_13].type; VAR_13++) {
   int VAR_15;
   if (! FUNC_5(VAR_8, VAR_2[VAR_13].type)) {
    if ((VAR_15 = VAR_2[VAR_13].handler(VAR_9))) {
     VAR_11 = VAR_15;
     FUNC_4(VAR_3, " line %d\n", VAR_12);
    }
    break;
   }
  }

  if (((void*)0) == VAR_2[VAR_13].type) {
   FUNC_4(VAR_3, "unknown file type line %d: '%s'\n",
    VAR_12, VAR_8);
  }
 }
 if (VAR_11 == 0)
  FUNC_0();

 FUNC_1(VAR_11);
}
