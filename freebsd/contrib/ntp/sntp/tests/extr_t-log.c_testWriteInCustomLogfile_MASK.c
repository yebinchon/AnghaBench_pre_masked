
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*,char*) ;

void
FUNC_10(void)
{
 char VAR_1[256] = "12345 ABC";
 char VAR_2[256] = "TEST_PROGNAME3";

 (void)FUNC_7("testLogfile2.log");

 FUNC_8(VAR_2);
 FUNC_5("testLogfile2.log");



 FUNC_4(VAR_0, "%s", VAR_1);
 FILE * VAR_3 = FUNC_3("testLogfile2.log","r");
 char VAR_4[256];

 FUNC_0( VAR_3 != ((void*)0));


 while (FUNC_2(VAR_4, sizeof(VAR_4), VAR_3)) {
  FUNC_6("%s", VAR_4);
 }


 char* VAR_5 = FUNC_9(VAR_4,VAR_2);

 FUNC_0( VAR_5 != ((void*)0));

 VAR_5 = FUNC_9(VAR_4,VAR_1);
 FUNC_0( VAR_5 != ((void*)0));

 FUNC_1(VAR_3);



 return;
}
