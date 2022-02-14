
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mdname ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 char* FUNC_2 (char*,int,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int ,char*,char*) ;

__attribute__((used)) static void
FUNC_7(void)
{
 FILE *VAR_0;
 FILE *VAR_1;
 char VAR_2[80];
 char VAR_3[95];
 char *VAR_4;

 VAR_0 = FUNC_5("mdconfig -a -s 64 -t null", "r");
 FUNC_0(VAR_0 != ((void*)0));
 VAR_4 = FUNC_2(VAR_2, sizeof(VAR_2), VAR_0);
 FUNC_0(VAR_4 != ((void*)0));

 FUNC_1(0, FUNC_4(VAR_0));

 FUNC_6(VAR_3, FUNC_3(VAR_3), "mdconfig -d -u %s", VAR_2);
 VAR_1 = FUNC_5(VAR_3, "r");
 FUNC_0(VAR_1 != ((void*)0));

 FUNC_1(0, FUNC_4(VAR_1));
}
