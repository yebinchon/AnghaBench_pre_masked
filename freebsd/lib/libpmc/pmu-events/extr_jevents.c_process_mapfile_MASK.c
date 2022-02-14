
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 char* FUNC_0 (char*,int,int *) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,char*,...) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char*,int ,char*,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_1 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char*,char*,char**) ;

__attribute__((used)) static int FUNC_12(FILE *VAR_2, char *VAR_3)
{
 int VAR_4 = 16384;
 FILE *VAR_5;
 char *VAR_6 = ((void*)0);
 char *VAR_7, *VAR_8;
 int VAR_9;
 char *VAR_10;

 FUNC_6("%s: Processing mapfile %s\n", VAR_1, VAR_3);

 VAR_7 = FUNC_5(VAR_4);
 if (!VAR_7)
  return -1;

 VAR_5 = FUNC_3(VAR_3, "r");
 if (!VAR_5) {
  FUNC_6("%s: Error %s opening %s\n", VAR_1, FUNC_9(VAR_0),
    VAR_3);
  return -1;
 }

 FUNC_7(VAR_2);


 VAR_8 = FUNC_0(VAR_7, VAR_4, VAR_5);
 if (!VAR_8)
  goto out;

 VAR_9 = 1;
 while (1) {
  char *VAR_11, *VAR_12, *VAR_13, *VAR_14;

  VAR_9++;
  VAR_8 = FUNC_0(VAR_7, VAR_4, VAR_5);
  if (!VAR_8)
   break;

  if (VAR_7[0] == '#' || VAR_7[0] == '\n')
   continue;

  if (VAR_7[FUNC_10(VAR_7)-1] != '\n') {

   FUNC_6("%s: Mapfile %s: line %d too long, aborting\n",
     VAR_1, VAR_3, VAR_9);
   return -1;
  }
  VAR_7[FUNC_10(VAR_7)-1] = '\0';

  VAR_11 = FUNC_2(FUNC_11(VAR_8, ",", &VAR_6));
  VAR_12 = FUNC_11(((void*)0), ",", &VAR_6);
  VAR_14 = FUNC_11(((void*)0), ",", &VAR_6);
  VAR_13 = FUNC_11(((void*)0), ",", &VAR_6);

  VAR_10 = FUNC_1(VAR_14);
  FUNC_4(VAR_2, "{\n");
  FUNC_4(VAR_2, "\t.cpuid = \"%s\",\n", VAR_11);
  FUNC_4(VAR_2, "\t.version = \"%s\",\n", VAR_12);
  FUNC_4(VAR_2, "\t.type = \"%s\",\n", VAR_13);
  FUNC_4(VAR_2, "\t.table = %s\n", VAR_10);
  FUNC_4(VAR_2, "},\n");
 }

out:
 FUNC_8(VAR_2);
 return 0;
}
