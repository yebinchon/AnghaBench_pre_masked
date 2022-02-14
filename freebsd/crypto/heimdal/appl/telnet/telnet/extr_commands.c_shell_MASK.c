
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (long*,long*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*,char*,...) ;
 int FUNC_3 () ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int * VAR_1 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 char* FUNC_8 (char*,char) ;
 int FUNC_9 (int*) ;

__attribute__((used)) static int
FUNC_10(int VAR_2, char **VAR_3)
{
    long VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

    FUNC_7();

    VAR_8 = (FUNC_0(&VAR_4, &VAR_5) == 0) ? 1 : 0;
    switch(FUNC_3()) {
    case -1:
 FUNC_5("Fork failed\r\n");
 break;

    case 0:
 {



     char *VAR_9, *VAR_10;

     VAR_9 = FUNC_4("SHELL");
     if (VAR_9 == ((void*)0))
  VAR_9 = "/bin/sh";
     if ((VAR_10 = FUNC_8(VAR_9, '/')) == 0)
  VAR_10 = VAR_9;
     else
  VAR_10++;
     if (VAR_2 > 1)
  FUNC_2(VAR_9, VAR_10, "-c", &VAR_1[1], ((void*)0));
     else
  FUNC_2(VAR_9, VAR_10, ((void*)0));
     FUNC_5("Execl");
     FUNC_1(1);
 }
    default:
     FUNC_9((int *)0);

     if (FUNC_0(&VAR_6, &VAR_7) && VAR_0 &&
  (VAR_8 || ((VAR_4 != VAR_6) || (VAR_5 != VAR_7)))) {
      FUNC_6();
     }
     break;
    }
    return 1;
}
