
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char*) ;
 char* VAR_11 ;
 char* VAR_12 ;
 scalar_t__ VAR_13 ;
 char* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (char*) ;
 int VAR_17 ;
 int FUNC_3 (int ,char*) ;
 int VAR_18 ;
 scalar_t__ FUNC_4 (int ,int *,int *) ;
 char* VAR_19 ;
 char* VAR_20 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int ,char*) ;
 int FUNC_9 (char*,...) ;
 scalar_t__ FUNC_10 (char*,int) ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;

int
FUNC_11(void)
{
 static char *VAR_23;
 char VAR_24[VAR_7+2];
 sigset_t VAR_25;






 if (FUNC_4(VAR_8, &VAR_18, &VAR_25) < 0)
  FUNC_8(0, VAR_16, "Unable to set signal mask");
 FUNC_0();
 if (FUNC_4(VAR_9, &VAR_25, ((void*)0)) < 0)
  FUNC_8(0, VAR_16, "Unable to restore signal mask");

 if (VAR_15 || !VAR_22 || VAR_6 || FUNC_5(VAR_5, VAR_12) == 0)
  return(-1);

 FUNC_9("\nATTENTION! %s archive volume change required.\n", VAR_12);





 if (FUNC_5(VAR_11, VAR_20) && FUNC_5(VAR_11, VAR_19) && (VAR_13 != VAR_3)
     && (VAR_13 != VAR_2)) {
  if (VAR_13 == VAR_4) {
   FUNC_9("%s ready for archive tape volume: %d\n",
    VAR_11, VAR_14);
   FUNC_9("Load the NEXT TAPE on the tape drive");
  } else {
   FUNC_9("%s ready for archive volume: %d\n",
    VAR_11, VAR_14);
   FUNC_9("Load the NEXT STORAGE MEDIA (if required)");
  }

  if ((VAR_10 == VAR_1) || (VAR_10 == VAR_0))
   FUNC_9(" and make sure it is WRITE ENABLED.\n");
  else
   FUNC_9("\n");

  for(;;) {
   FUNC_9("Type \"y\" to continue, \".\" to quit %s,",
    VAR_12);
   FUNC_9(" or \"s\" to switch to new device.\nIf you");
   FUNC_9(" cannot change storage media, type \"s\"\n");
   FUNC_9("Is the device ready and online? > ");

   if ((FUNC_10(VAR_24,sizeof(VAR_24))<0) || !FUNC_5(VAR_24,".")){
    VAR_15 = 1;
    VAR_17 = -1;
    FUNC_9("Quitting %s!\n", VAR_12);
    VAR_21 = 0;
    return(-1);
   }

   if ((VAR_24[0] == '\0') || (VAR_24[1] != '\0')) {
    FUNC_9("%s unknown command, try again\n",VAR_24);
    continue;
   }

   switch (VAR_24[0]) {
   case 'y':
   case 'Y':



    if (FUNC_1(VAR_11) >= 0)
     return(0);
    FUNC_9("Cannot re-open %s, try again\n",
     VAR_11);
    continue;
   case 's':
   case 'S':



    FUNC_9("Switching to a different archive\n");
    break;
   default:
    FUNC_9("%s unknown command, try again\n",VAR_24);
    continue;
   }
   break;
  }
 } else
  FUNC_9("Ready for archive volume: %d\n", VAR_14);




 for (;;) {
  FUNC_9("Input archive name or \".\" to quit %s.\n", VAR_12);
  FUNC_9("Archive name > ");

  if ((FUNC_10(VAR_24, sizeof(VAR_24)) < 0) || !FUNC_5(VAR_24, ".")) {
   VAR_15 = 1;
   VAR_17 = -1;
   FUNC_9("Quitting %s!\n", VAR_12);
   VAR_21 = 0;
   return(-1);
  }
  if (VAR_24[0] == '\0') {
   FUNC_9("Empty file name, try again\n");
   continue;
  }
  if (!FUNC_5(VAR_24, "..")) {
   FUNC_9("Illegal file name: .. try again\n");
   continue;
  }
  if (FUNC_7(VAR_24) > VAR_7) {
   FUNC_9("File name too long, try again\n");
   continue;
  }




  if (FUNC_1(VAR_24) >= 0) {
   FUNC_2(VAR_23);
   if ((VAR_23 = FUNC_6(VAR_24)) == ((void*)0)) {
    VAR_15 = 1;
    VAR_17 = -1;
    FUNC_3(0, "Cannot save archive name.");
    return(-1);
   }
   VAR_11 = VAR_23;
   break;
  }
  FUNC_9("Cannot open %s, try again\n", VAR_24);
  continue;
 }
 return(0);
}
