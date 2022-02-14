
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ainfo {int a_line; int a_cptr; int a_lineno; } ;
typedef int FILE ;


 int FUNC_0 (int) ;
 char VAR_0 ;
 char* FUNC_1 () ;
 char* FUNC_2 (int) ;
 char* VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,char*,int ,int ) ;
 int FUNC_5 (char*,int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int,int *) ;
 int * VAR_7 ;
 int FUNC_9 (struct ainfo*) ;

__attribute__((used)) static void
FUNC_10(void)
{
    int VAR_8;
    FILE *VAR_9 = VAR_7;
    int VAR_10 = 0;
    struct ainfo VAR_11;
    VAR_11.a_lineno = VAR_6;
    VAR_11.a_line = FUNC_3();
    VAR_11.a_cptr = VAR_11.a_line + (VAR_1 - VAR_4 - 2);

    if (*VAR_1 == '\n')
    {
 FUNC_7();
 if (VAR_4 == ((void*)0))
     FUNC_9(&VAR_11);
    }
    if (!VAR_3)
 FUNC_4(VAR_9, VAR_5, VAR_6, VAR_2);

  loop:
    VAR_8 = *VAR_1++;
    switch (VAR_8)
    {
    case '\n':
 FUNC_8('\n', VAR_9);
 VAR_10 = 0;
 FUNC_7();
 if (VAR_4)
     goto loop;
 FUNC_9(&VAR_11);

    case '\'':
    case '"':
 FUNC_8(VAR_8, VAR_9);
 {
     char *VAR_12 = FUNC_2(VAR_8);
     FUNC_5(VAR_12, VAR_9);
     FUNC_6(VAR_12);
 }
 VAR_10 = 1;
 goto loop;

    case '/':
 FUNC_8(VAR_8, VAR_9);
 {
     char *VAR_13 = FUNC_1();
     FUNC_5(VAR_13, VAR_9);
     FUNC_6(VAR_13);
 }
 VAR_10 = 1;
 goto loop;

    case '%':
    case '\\':
 if (*VAR_1 == VAR_0)
 {
     if (VAR_10)
  FUNC_8('\n', VAR_9);
     ++VAR_1;
     FUNC_0(VAR_11.a_line);
     return;
 }


    default:
 FUNC_8(VAR_8, VAR_9);
 VAR_10 = 1;
 goto loop;
    }
}
