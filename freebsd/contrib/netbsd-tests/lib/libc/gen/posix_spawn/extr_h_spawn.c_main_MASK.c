
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,...) ;
 char* FUNC_2 () ;
 int VAR_0 ;
 unsigned long FUNC_3 (char*,char**,int) ;

int
FUNC_4(int VAR_1, char **VAR_2)
{
 unsigned long VAR_3;
 char *VAR_4;

 if (VAR_1 < 2) {
  FUNC_1(VAR_0, "usage:\n\t%s (retcode)\n", FUNC_2());
  FUNC_0(255);
 }
 VAR_3 = FUNC_3(VAR_2[1], &VAR_4, 10);

 FUNC_1(VAR_0, "%s exiting with status %lu\n", FUNC_2(), VAR_3);
 return VAR_3;
}
