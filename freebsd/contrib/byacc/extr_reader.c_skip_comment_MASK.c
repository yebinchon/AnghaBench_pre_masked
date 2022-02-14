
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ainfo {int a_line; int a_cptr; int a_lineno; } ;


 int FUNC_0 (int) ;
 char* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct ainfo*) ;

__attribute__((used)) static void
FUNC_4(void)
{
    char *VAR_3;
    struct ainfo VAR_4;
    VAR_4.a_lineno = VAR_2;
    VAR_4.a_line = FUNC_1();
    VAR_4.a_cptr = VAR_4.a_line + (VAR_0 - VAR_1);

    VAR_3 = VAR_0 + 2;
    for (;;)
    {
 if (*VAR_3 == '*' && VAR_3[1] == '/')
 {
     VAR_0 = VAR_3 + 2;
     FUNC_0(VAR_4.a_line);
     return;
 }
 if (*VAR_3 == '\n')
 {
     FUNC_2();
     if (VAR_1 == ((void*)0))
  FUNC_3(&VAR_4);
     VAR_3 = VAR_0;
 }
 else
     ++VAR_3;
    }
}
