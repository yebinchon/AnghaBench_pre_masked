
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,int,int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,char*,int,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,char*,int*) ;
 int VAR_1 ;
 int FUNC_9 (char*) ;
 int * VAR_2 ;

void
FUNC_10(
 char *VAR_3
 )
{
 FILE * VAR_4;
 char VAR_5[2 * VAR_0];
 char VAR_6[2 * VAR_0];
 int VAR_7;

 VAR_4 = FUNC_5(VAR_3, "r");
 if (((void*)0) == VAR_4) {
  FUNC_7("unable to open yacc/bison header file");
  FUNC_2(4);
 }

 while (((void*)0) != FUNC_4(VAR_5, sizeof(VAR_5), VAR_4))
  if (2 == FUNC_8(VAR_5, "#define %s %d", VAR_6, &VAR_7)
      && 'T' == VAR_6[0] && '_' == VAR_6[1] && VAR_7 >= 0
      && VAR_7 < FUNC_0(VAR_2)) {

   VAR_2[VAR_7] = FUNC_1(VAR_6);
   if (FUNC_9(VAR_6) > VAR_0) {
    FUNC_6(VAR_1,
     "MAX_TOK_LEN %d too small for '%s'\n"
     "Edit keyword-gen.c to raise.\n",
     VAR_0, VAR_6);
    FUNC_2(10);
   }
  }
 FUNC_3(VAR_4);
}
