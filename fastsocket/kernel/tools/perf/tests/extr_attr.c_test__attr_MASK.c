
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,struct stat*) ;
 char* FUNC_2 () ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int,char*,char*) ;
 int VAR_2 ;

int FUNC_5(void)
{
 struct stat VAR_3;
 char VAR_4[VAR_1];
 char VAR_5[VAR_1];


 if (!FUNC_1("./tests", &VAR_3))
  return FUNC_3("./tests", "./perf");


 FUNC_4(VAR_5, VAR_1, "%s/tests", FUNC_2());
 FUNC_4(VAR_4, VAR_1, "%s/perf", VAR_0);

 if (!FUNC_1(VAR_5, &VAR_3) &&
     !FUNC_1(VAR_4, &VAR_3))
  return FUNC_3(VAR_5, VAR_4);

 FUNC_0(VAR_2, " (ommitted)");
 return 0;
}
