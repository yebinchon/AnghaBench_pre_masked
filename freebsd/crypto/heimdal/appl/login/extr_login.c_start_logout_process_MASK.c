
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (char*,char*,int *,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,int) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (int,int*,int ) ;

__attribute__((used)) static int
FUNC_11(void)
{
    char *VAR_1, *VAR_2;
    pid_t VAR_3;

    VAR_1 = FUNC_6("logout_program");
    if(VAR_1 == ((void*)0))
 return 0;
    VAR_2 = FUNC_9(VAR_1, '/');

    if(VAR_2)
 VAR_2++;
    else
 VAR_2 = VAR_1;

    VAR_3 = FUNC_4();
    if(VAR_3 == 0) {

 FUNC_7(0, FUNC_5());
 return 0;
    }
    if(VAR_3 == -1)
 FUNC_2(1, "fork");




    while(1) {
 int VAR_4;
 int VAR_5;
 VAR_5 = FUNC_10(VAR_3, &VAR_4, 0);
 if(VAR_5 > 0) {
     if(FUNC_0(VAR_4) || FUNC_1(VAR_4)) {
  FUNC_3(VAR_1, VAR_2, ((void*)0), VAR_0);
  FUNC_2(1, "exec %s", VAR_1);
     }
 } else if(VAR_5 < 0)
     FUNC_2(1, "waitpid");
    }
}
