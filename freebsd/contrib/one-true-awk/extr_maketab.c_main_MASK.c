
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xx {int token; char* name; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 char** VAR_3 ;
 int FUNC_5 (char*,...) ;
 struct xx* VAR_4 ;
 int FUNC_6 (char*,char*,char*,char*,char*,int*) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char*) ;
 char** VAR_6 ;

int FUNC_10(int VAR_7, char *VAR_8[])
{
 const struct xx *VAR_9;
 int VAR_10, VAR_11, VAR_12;
 char VAR_13;
 FILE *VAR_14;
 char VAR_15[200], VAR_16[200], VAR_17[200];

 FUNC_5("#include <stdio.h>\n");
 FUNC_5("#include \"awk.h\"\n");
 FUNC_5("#include \"ytab.h\"\n\n");
 for (VAR_10 = VAR_2; --VAR_10 >= 0; )
  VAR_3[VAR_10] = "";

 if (VAR_7 != 2) {
  FUNC_3(VAR_5, "usage: maketab YTAB_H\n");
  FUNC_0(1);
 }
 if ((VAR_14 = FUNC_2(VAR_8[1], "r")) == ((void*)0)) {
  FUNC_3(VAR_5, "maketab can't open %s!\n", VAR_8[1]);
  FUNC_0(1);
 }
 FUNC_5("static char *printname[%d] = {\n", VAR_2);
 VAR_10 = 0;
 while (FUNC_1(VAR_15, sizeof VAR_15, VAR_14) != ((void*)0)) {
  VAR_11 = FUNC_6(VAR_15, "%1c %s %s %d", &VAR_13, VAR_17, VAR_16, &VAR_12);
  if (VAR_13 != '#' || (VAR_11 != 4 && FUNC_7(VAR_17,"define") != 0))
   continue;
  if (FUNC_7(VAR_16, "YYSTYPE_IS_DECLARED") == 0)
   continue;
  if (VAR_12 < VAR_0 || VAR_12 > VAR_1) {

   continue;
  }
  VAR_3[VAR_12-VAR_0] = (char *) FUNC_4(FUNC_9(VAR_16)+1);
  FUNC_8(VAR_3[VAR_12-VAR_0], VAR_16);
  FUNC_5("\t(char *) \"%s\",\t/* %d */\n", VAR_16, VAR_12);
  VAR_10++;
 }
 FUNC_5("};\n\n");

 for (VAR_9=VAR_4; VAR_9->token!=0; VAR_9++)
  VAR_6[VAR_9->token-VAR_0] = VAR_9->name;
 FUNC_5("\nCell *(*proctab[%d])(Node **, int) = {\n", VAR_2);
 for (VAR_10=0; VAR_10<VAR_2; VAR_10++)
  if (VAR_6[VAR_10]==((void*)0))
   FUNC_5("\tnullproc,\t/* %s */\n", VAR_3[VAR_10]);
  else
   FUNC_5("\t%s,\t/* %s */\n", VAR_6[VAR_10], VAR_3[VAR_10]);
 FUNC_5("};\n\n");

 FUNC_5("char *tokname(int n)\n");
 FUNC_5("{\n");
 FUNC_5("	static char buf[100];\n\n");
 FUNC_5("	if (n < FIRSTTOKEN || n > LASTTOKEN) {\n");
 FUNC_5("		sprintf(buf, \"token %%d\", n);\n");
 FUNC_5("		return buf;\n");
 FUNC_5("	}\n");
 FUNC_5("	return printname[n-FIRSTTOKEN];\n");
 FUNC_5("}\n");
 return 0;
}
