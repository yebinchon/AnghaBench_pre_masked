
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int (*) ()) ;
 int FUNC_1 (void*) ;
 int FUNC_2 () ;
 int * FUNC_3 (char*) ;
 char* VAR_2 ;
 int FUNC_4 (int,char**,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_5 (char*) ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;
 scalar_t__ FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (void*) ;
 scalar_t__ VAR_8 ;
 int FUNC_13 (int ,int ) ;
 char* VAR_9 ;
 int FUNC_14 (int *) ;
 int * VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_15 () ;

int FUNC_16(int VAR_13, char *VAR_14[])
{
 int VAR_15;
 char *VAR_16 = ((void*)0);
 char *VAR_17 = ((void*)0);
 int VAR_18 = 0;

 if (FUNC_7())
  return -1;

 VAR_9 = VAR_2;

 for (;;) {
  VAR_15 = FUNC_4(VAR_13, VAR_14, "D:g:hi:m:s:u");
  if (VAR_15 < 0)
   break;
  switch (VAR_15) {
  case 'D':




   FUNC_8("No SQLite support included in the build\n");
   return -1;

  case 'g':
   VAR_16 = VAR_6;
   break;
  case 'h':
   FUNC_15();
   return 0;
  case 'i':
   VAR_4 = FUNC_1(VAR_6);
   if (VAR_4 < 0 || VAR_4 > 32) {
    FUNC_8("Invalid IND length\n");
    return -1;
   }
   break;
  case 'm':
   VAR_5 = VAR_6;
   break;
  case 's':
   VAR_9 = VAR_6;
   break;
  case 'u':
   VAR_12 = 1;
   break;
  default:
   FUNC_15();
   return -1;
  }
 }

 if (!VAR_16 && !VAR_5 && !VAR_17) {
  FUNC_15();
  return -1;
 }






 if (VAR_16 && FUNC_11(VAR_16) < 0)
  return -1;

 if (VAR_5 && FUNC_12(VAR_5) < 0)
  return -1;

 if (VAR_7 == VAR_13) {
  VAR_8 = FUNC_5(VAR_9);
  if (VAR_8 < 0)
   return -1;

  FUNC_8("Listening for requests on %s\n", VAR_9);

  FUNC_0(FUNC_2);
  FUNC_13(VAR_1, VAR_3);
  FUNC_13(VAR_0, VAR_3);

  for (;;)
   FUNC_9(VAR_8);
 } else {
  char VAR_19[1000];
  VAR_9 = ((void*)0);
  VAR_11 = 0;
  if (FUNC_10(VAR_14[VAR_7], VAR_19, sizeof(VAR_19)) < 0) {
   FUNC_8("FAIL\n");
   VAR_18 = -1;
  } else {
   FUNC_8("%s\n", VAR_19);
  }
  FUNC_2();
 }
 FUNC_6();

 return VAR_18;
}
