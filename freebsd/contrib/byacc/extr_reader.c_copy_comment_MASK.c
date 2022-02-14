
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mstring {int dummy; } ;
struct ainfo {int a_line; int a_cptr; int a_lineno; } ;


 int FUNC_0 (int) ;
 char* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct mstring*,char) ;
 char* FUNC_4 (struct mstring*) ;
 struct mstring* FUNC_5 () ;
 int FUNC_6 (struct ainfo*) ;

__attribute__((used)) static char *
FUNC_7(void)
{
    struct mstring *VAR_3 = FUNC_5();
    int VAR_4;

    VAR_4 = *VAR_0;
    if (VAR_4 == '/')
    {
 FUNC_3(VAR_3, '*');
 while ((VAR_4 = *++VAR_0) != '\n')
 {
     FUNC_3(VAR_3, VAR_4);
     if (VAR_4 == '*' && VAR_0[1] == '/')
  FUNC_3(VAR_3, ' ');
 }
 FUNC_3(VAR_3, '*');
 FUNC_3(VAR_3, '/');
    }
    else if (VAR_4 == '*')
    {
 struct ainfo VAR_5;
 VAR_5.a_lineno = VAR_2;
 VAR_5.a_line = FUNC_1();
 VAR_5.a_cptr = VAR_5.a_line + (VAR_0 - VAR_1 - 1);

 FUNC_3(VAR_3, VAR_4);
 ++VAR_0;
 for (;;)
 {
     VAR_4 = *VAR_0++;
     FUNC_3(VAR_3, VAR_4);
     if (VAR_4 == '*' && *VAR_0 == '/')
     {
  FUNC_3(VAR_3, '/');
  ++VAR_0;
  FUNC_0(VAR_5.a_line);
  return FUNC_4(VAR_3);
     }
     if (VAR_4 == '\n')
     {
  FUNC_2();
  if (VAR_1 == ((void*)0))
      FUNC_6(&VAR_5);
     }
 }
    }
    return FUNC_4(VAR_3);
}
