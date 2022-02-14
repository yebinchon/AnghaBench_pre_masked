
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,char*,...) ;
 int VAR_1 ;
 char* FUNC_7 (char*,char) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 char* VAR_2 ;

__attribute__((used)) static void FUNC_9(void *VAR_3, size_t VAR_4)
{
 char *VAR_5 = VAR_3;
 char *VAR_6 = VAR_5 + VAR_4;
 char *VAR_7;
 char VAR_8[VAR_0];

 VAR_7 = FUNC_7(VAR_5, ':');
 if (!VAR_7) {
  FUNC_3(VAR_1, "fixdep: parse error\n");
  FUNC_2(1);
 }
 FUNC_5(VAR_8, VAR_5, VAR_7-VAR_5); VAR_8[VAR_7-VAR_5] = 0;
 FUNC_6("deps_%s := \\\n", VAR_2);
 VAR_5 = VAR_7+1;

 FUNC_0();

 while (VAR_5 < VAR_6) {
  while (VAR_5 < VAR_6 && (*VAR_5 == ' ' || *VAR_5 == '\\' || *VAR_5 == '\n'))
   VAR_5++;
  VAR_7 = VAR_5;
  while (VAR_7 < VAR_6 && *VAR_7 != ' ') VAR_7++;
  if (VAR_7 == VAR_6) {
   do VAR_7--; while (!FUNC_4(*VAR_7));
   VAR_7++;
  }
  FUNC_5(VAR_8, VAR_5, VAR_7-VAR_5); VAR_8[VAR_7-VAR_5] = 0;
  if (FUNC_8(VAR_8, "include/linux/autoconf.h") &&
      FUNC_8(VAR_8, "arch/um/include/uml-config.h") &&
      FUNC_8(VAR_8, ".ver")) {
   FUNC_6("  %s \\\n", VAR_8);
   FUNC_1(VAR_8);
  }
  VAR_5 = VAR_7 + 1;
 }
 FUNC_6("\n%s: $(deps_%s)\n\n", VAR_2, VAR_2);
 FUNC_6("$(deps_%s):\n", VAR_2);
}
