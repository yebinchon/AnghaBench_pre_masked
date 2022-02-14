
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,char*,char*) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (char*,int,char*,char*) ;
 int * VAR_2 ;

void
FUNC_10(char *VAR_3)
{
 FILE *VAR_4;
 int VAR_5;
 char VAR_6[VAR_1];

 FUNC_9(VAR_6, sizeof(VAR_6), "/bin/ls -la -- %s", VAR_3);
 VAR_4 = FUNC_3(VAR_6, "r", 1, 0);
 FUNC_5(211, "status of %s:", VAR_3);
 while ((VAR_5 = FUNC_4(VAR_4)) != VAR_0) {
  if (VAR_5 == '\n') {
   if (FUNC_1(VAR_2)){
    FUNC_6(421, "control connection");
    FUNC_2(VAR_4);
    FUNC_0(1);

   }
   if (FUNC_1(VAR_4)) {
    FUNC_6(551, VAR_3);
    FUNC_2(VAR_4);
    return;
   }
   FUNC_7('\r', VAR_2);
  }
  FUNC_7(VAR_5, VAR_2);
 }
 FUNC_2(VAR_4);
 FUNC_8(211, "End of Status");
}
