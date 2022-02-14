
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ses_encstat ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (int,int ,int ) ;
 int* FUNC_5 (int) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char) ;
 int FUNC_9 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 char* FUNC_10 (int ) ;

int
FUNC_11(int VAR_10, char **VAR_11)
{
 int VAR_12, VAR_13, VAR_14;
 ses_encstat VAR_15, *VAR_16;

 if (VAR_10 < 3) {
  FUNC_3(VAR_8, "usage: %s polling-interval device "
      "[ device ... ]\n", *VAR_11);
  return (1);
 }
 VAR_13 = FUNC_0(VAR_11[1]);
 VAR_16 = FUNC_5(VAR_10);
 if (VAR_16 == ((void*)0)) {
  FUNC_7("malloc");
  return (1);
 }
 FUNC_1((void *)VAR_16, VAR_10);

 for (;;) {
  for (VAR_14 = 2; VAR_14 < VAR_10; VAR_14++) {
   VAR_12 = FUNC_6(VAR_11[VAR_14], VAR_1);
   if (VAR_12 < 0) {
    FUNC_7(VAR_11[VAR_14]);
    continue;
   }




   VAR_15 = 0;
   if (FUNC_4(VAR_12, VAR_3, (caddr_t) &VAR_15) < 0) {
    FUNC_3(VAR_8, "%s: SESIOC_SETENCSTAT1: %s\n",
        VAR_11[VAR_14], FUNC_10(VAR_7));
    (void) FUNC_2(VAR_12);
    continue;
   }



   if (FUNC_4(VAR_12, VAR_2, (caddr_t) &VAR_15) < 0) {
    FUNC_3(VAR_8, "%s: SESIOC_GETENCSTAT: %s\n",
        VAR_11[VAR_14], FUNC_10(VAR_7));
    (void) FUNC_2(VAR_12);
    continue;
   }

   if ((VAR_15 & VAR_0) == 0) {
    if (VAR_16[VAR_14]) {
     FUNC_3(VAR_9, "%s: Clearing CRITICAL "
         "condition\n", VAR_11[VAR_14]);
     VAR_16[VAR_14] = 0;
    }
    (void) FUNC_2(VAR_12);
    continue;
   }
   VAR_16[VAR_14] = 1;
   FUNC_3(VAR_9, "%s: Setting CRITICAL from:", VAR_11[VAR_14]);
   if (VAR_15 & VAR_6)
    FUNC_3(VAR_9, " UNRECOVERABLE");

   if (VAR_15 & VAR_4)
    FUNC_3(VAR_9, " CRITICAL");

   if (VAR_15 & VAR_5)
    FUNC_3(VAR_9, " NONCRITICAL");
   FUNC_8('\n');
   VAR_15 = VAR_4;
   if (FUNC_4(VAR_12, VAR_3, (caddr_t) &VAR_15) < 0) {
    FUNC_3(VAR_8, "%s: SESIOC_SETENCSTAT 2: %s\n",
        VAR_11[VAR_14], FUNC_10(VAR_7));
   }
   (void) FUNC_2(VAR_12);
  }
  FUNC_9(VAR_13);
 }

}
