
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int arg ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,...) ;
 char* FUNC_2 (int ,size_t*,size_t*,int *,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,char**,char*) ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (char*,int,char*,int,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (char*,char*) ;
 char* FUNC_8 (char*,int) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 char* FUNC_10 (char*) ;
 size_t FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*,char*,int) ;
 char* FUNC_13 (char*,int ) ;

int
FUNC_14(int VAR_7, char *VAR_8[])
{
 size_t VAR_9, VAR_10 = 0;
 char *VAR_11, *VAR_12, *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
 char VAR_15[1024];
 char *VAR_16[100];
 char VAR_17[100];
 int VAR_18 = -1;
 int VAR_19;

 while ((VAR_11 = FUNC_2(VAR_6, &VAR_9, &VAR_10, ((void*)0), 0)) != ((void*)0)) {
  if (FUNC_12(VAR_11, "load:", 5) == 0) {
   if (VAR_13)
    FUNC_4(VAR_13);
   VAR_13 = FUNC_13(&VAR_11[6], VAR_0);
   if (VAR_13 == ((void*)0))
       FUNC_1(1, "missing optstring at line %ld",
    (unsigned long)VAR_10);
   VAR_13 = FUNC_10(VAR_13);
   if (VAR_1)
    FUNC_3(VAR_5, "optstring = %s\n", VAR_13);
  } else if (FUNC_12(VAR_11, "args:", 5) == 0) {
   for (; VAR_18 >= 0; VAR_18--) {
    if (VAR_16[VAR_18] != ((void*)0))
     FUNC_4(VAR_16[VAR_18]);
   }
   VAR_16[VAR_18 = 0] = FUNC_13(&VAR_11[6], VAR_0);
   if (VAR_16[VAR_18] == ((void*)0))
    FUNC_1(1, "missing args at line %ld",
        (unsigned long)VAR_10);

   VAR_16[VAR_18] = FUNC_10(VAR_16[VAR_18]);
   while ((VAR_16[++VAR_18] = FUNC_13(((void*)0), VAR_0)) != ((void*)0))
    VAR_16[VAR_18] = FUNC_10(VAR_16[VAR_18]);
   if (VAR_1) {
    int VAR_20 = 0;
    for (VAR_20 = 0; VAR_20 < VAR_18; VAR_20++)
     FUNC_3(VAR_5, "argv[%d] = %s\n", VAR_20,
         VAR_16[VAR_20]);
   }
  } else if (FUNC_12(VAR_11, "result:", 7) == 0) {
   VAR_15[0] = '\0';
   VAR_3 = VAR_4 = 1;
   if (VAR_14)
    FUNC_4(VAR_14);
   VAR_14 = FUNC_13(&VAR_11[8], VAR_0);
   if (VAR_14 == ((void*)0))
    FUNC_1(1, "missing result at line %ld",
        (unsigned long)VAR_10);
   VAR_14 = FUNC_10(VAR_14);
   if (VAR_18 == -1)
    FUNC_1(1, "result: without args:");
   if (VAR_1)
    FUNC_3(VAR_5, "result = %s\n", VAR_14);
   while ((VAR_19 = FUNC_5(VAR_18, VAR_16, VAR_13)) != -1) {
    if (VAR_19 == ':')
     FUNC_0(1, "`:' found as argument char");
    if ((VAR_12 = FUNC_8(VAR_13, VAR_19)) == ((void*)0)) {
     FUNC_6(VAR_17, sizeof(VAR_17), "!%c,", VAR_19);
     FUNC_7(VAR_15, VAR_17);
     continue;
    }
    if (VAR_12[1] != ':')
     FUNC_6(VAR_17, sizeof(VAR_17), "%c,", VAR_19);
    else
     FUNC_6(VAR_17, sizeof(VAR_17), "%c=%s,",
         VAR_19, VAR_2);
    FUNC_7(VAR_15, VAR_17);
   }
   VAR_9 = FUNC_11(VAR_15);
   if (VAR_9 > 0) {
    VAR_15[VAR_9 - 1] = '|';
    VAR_15[VAR_9] = '\0';
   } else {
    VAR_15[0] = '|';
    VAR_15[1] = '\0';
   }
   FUNC_6(VAR_17, sizeof(VAR_17), "%d", VAR_18 - VAR_3);
   FUNC_7(VAR_15, VAR_17);
   if (FUNC_9(VAR_15, VAR_14) != 0)
    FUNC_1(1, "`%s' != `%s'", VAR_15, VAR_14);
  }
  FUNC_4(VAR_11);
 }
 return 0;
}
