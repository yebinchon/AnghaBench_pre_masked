
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 () ;
 int * VAR_2 ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(void)
{
    char *VAR_3;

    if (VAR_2 == ((void*)0))
    {
 FUNC_0();
 if (VAR_2 == ((void*)0))
     return (VAR_0);
    }

    VAR_3 = VAR_1;
    for (;;)
    {
 switch (*VAR_3)
 {
 case '/':
     if (VAR_3[1] == '*')
     {
  VAR_1 = VAR_3;
  FUNC_1();
  VAR_3 = VAR_1;
  break;
     }
     else if (VAR_3[1] == '/')
     {
  FUNC_0();
  if (VAR_2 == ((void*)0))
      return (VAR_0);
  VAR_3 = VAR_1;
  break;
     }


 default:
     VAR_1 = VAR_3;
     return (*VAR_3);
 }
    }
}
