
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINDOW ;


 int * VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,char*,char*) ;
 char* FUNC_2 () ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int * VAR_1 ;
 int FUNC_5 (char*,char*,int *) ;
 int VAR_2 ;

int
FUNC_6(int VAR_3, char *VAR_4[])
{
 WINDOW *VAR_5;

 if (VAR_3 != 5) {
  FUNC_1(VAR_2, "Usage: %s <cmdin> <cmdout> <slvin> slvout>\n",
   FUNC_2());
  return 0;
 }
 FUNC_5(VAR_4[1], "%d", &VAR_0[0]);
 FUNC_5(VAR_4[2], "%d", &VAR_0[1]);
 FUNC_5(VAR_4[3], "%d", &VAR_1[0]);
 FUNC_5(VAR_4[4], "%d", &VAR_1[1]);

 VAR_5 = FUNC_3();
 if (VAR_5 == ((void*)0))
  FUNC_0(1, "initscr failed");

 FUNC_4(VAR_5);

 return 0;
}
