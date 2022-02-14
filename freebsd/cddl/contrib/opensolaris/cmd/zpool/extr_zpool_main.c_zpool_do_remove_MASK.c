
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef int valstr ;
typedef char* uint64_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 char FUNC_1 (int,char**,char*) ;
 char* FUNC_2 (char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,char*,char*) ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,char*,int) ;
 int * FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int *,char*,char**) ;
 scalar_t__ FUNC_8 (int *,char*) ;
 scalar_t__ FUNC_9 (int *) ;

int
FUNC_10(int VAR_6, char **VAR_7)
{
 char *VAR_8;
 int VAR_9, VAR_10 = 0;
 zpool_handle_t *VAR_11;
 boolean_t VAR_12 = VAR_0;
 boolean_t VAR_13 = VAR_0;
 boolean_t VAR_14 = VAR_0;
 char VAR_15;


 while ((VAR_15 = FUNC_1(VAR_6, VAR_7, "nps")) != -1) {
  switch (VAR_15) {
  case 'n':
   VAR_13 = VAR_1;
   break;
  case 'p':
   VAR_14 = VAR_1;
   break;
  case 's':
   VAR_12 = VAR_1;
   break;
  case '?':
   (void) FUNC_0(VAR_5, FUNC_2("invalid option '%c'\n"),
       VAR_4);
   FUNC_4(VAR_0);
  }
 }

 VAR_6 -= VAR_3;
 VAR_7 += VAR_3;


 if (VAR_6 < 1) {
  (void) FUNC_0(VAR_5, "%s", FUNC_2("missing pool name argument\n"));
  FUNC_4(VAR_0);
 }

 VAR_8 = VAR_7[0];

 if ((VAR_11 = FUNC_6(VAR_2, VAR_8)) == ((void*)0))
  return (1);

 if (VAR_12 && VAR_13) {
  (void) FUNC_0(VAR_5, "%s", FUNC_2("stop request ignored\n"));
  return (0);
 }

 if (VAR_12) {
  if (VAR_6 > 1) {
   (void) FUNC_0(VAR_5, "%s", FUNC_2("too many arguments\n"));
   FUNC_4(VAR_0);
  }
  if (FUNC_9(VAR_11) != 0)
   VAR_10 = 1;
 } else {
  if (VAR_6 < 2) {
   (void) FUNC_0(VAR_5, "%s", FUNC_2("missing device\n"));
   FUNC_4(VAR_0);
  }

  for (VAR_9 = 1; VAR_9 < VAR_6; VAR_9++) {
   if (VAR_13) {
    uint64_t VAR_16;

    if (FUNC_7(VAR_11, VAR_7[VAR_9],
        &VAR_16) != 0) {
     VAR_10 = 1;
     break;
    }
    if (VAR_14) {
     (void) FUNC_3("%s %llu\n",
         VAR_7[VAR_9], VAR_16);
    } else {
     char VAR_17[32];
     FUNC_5(VAR_16, VAR_17,
         sizeof (VAR_17));
     (void) FUNC_3("Memory that will be "
         "used after removing %s: %s\n",
         VAR_7[VAR_9], VAR_17);
    }
   } else {
    if (FUNC_8(VAR_11, VAR_7[VAR_9]) != 0)
     VAR_10 = 1;
   }
  }
 }

 return (VAR_10);
}
