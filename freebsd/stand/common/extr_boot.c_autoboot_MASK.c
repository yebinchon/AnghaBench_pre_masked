
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char**) ;
 char* VAR_3 ;
 int FUNC_1 () ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,int ,char**) ;
 int FUNC_5 (char*,char*,...) ;
 int FUNC_6 (char) ;
 int FUNC_7 (char*,char**,int ) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(int VAR_4, char *VAR_5)
{
 time_t VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10;
 char *VAR_11[2], *VAR_12, *VAR_13;
 char *VAR_14;




 VAR_2 = 1;

 if (VAR_4 == -1) {
  VAR_4 = 10;

  if ((VAR_12 = FUNC_2("autoboot_delay"))) {
   VAR_4 = FUNC_7(VAR_12, &VAR_13, 0);
   if (VAR_12 == VAR_13)
    VAR_4 = 10;
  }
 }

 VAR_14 = FUNC_2("kernelname");
 if (VAR_14 == ((void*)0)) {
  VAR_11[0] = ((void*)0);
  FUNC_4(0, 0, VAR_11);
  VAR_14 = FUNC_2("kernelname");
  if (VAR_14 == ((void*)0)) {
   VAR_3 = "no valid kernel found";
   return(VAR_0);
  }
 }

 if (VAR_4 >= 0) {
  VAR_7 = FUNC_8(((void*)0));
  VAR_6 = VAR_7 + VAR_4;

  VAR_10 = 0;





  FUNC_5("%s\n", (VAR_5 == ((void*)0)) ? "Hit [Enter] to boot immediately, or any other key for command prompt." : VAR_5);


  for (;;) {
   if (FUNC_3()) {
    VAR_9 = FUNC_1();
    if ((VAR_9 == '\r') || (VAR_9 == '\n'))
     VAR_10 = 1;
    break;

   }
   VAR_8 = FUNC_8(((void*)0));
   if (VAR_8 >= VAR_6) {
    VAR_10 = 1;
    break;
   }

   if (VAR_8 != VAR_7) {
    FUNC_5("\rBooting [%s] in %d second%s... ",
        VAR_14, (int)(VAR_6 - VAR_8),
        (VAR_6-VAR_8)==1?"":"s");
    VAR_7 = VAR_8;
   }
  }
 } else {
  VAR_10 = 1;
 }

 if (VAR_10)
  FUNC_5("\rBooting [%s]...               ", VAR_14);
 FUNC_6('\n');
 if (VAR_10) {
  VAR_11[0] = "boot";
  VAR_11[1] = ((void*)0);
  return(FUNC_0(1, VAR_11));
 }
 return(VAR_1);
}
