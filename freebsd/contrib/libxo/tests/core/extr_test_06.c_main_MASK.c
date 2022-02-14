
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char const*,char const*,unsigned int) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,char**) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ,int ) ;

int
FUNC_11 (int VAR_3, char **VAR_4)
{
    struct employee {
 const char *e_first;
 const char *e_last;
 unsigned e_dept;
    } VAR_5[] = {
 { "Terry", "Jones", 660 },
 { "Leslie", "Patterson", 341 },
 { "Ashley", "Smith", 1440 },
 { ((void*)0), ((void*)0) }
    }, *VAR_6 = VAR_5;

    VAR_3 = FUNC_8(VAR_3, VAR_4);
    if (VAR_3 < 0)
 return 1;

    FUNC_10(((void*)0), VAR_1, VAR_2);

    FUNC_9(((void*)0), VAR_0);

    FUNC_5("employees");
    FUNC_7("employee");

    for ( ; VAR_6->e_first; VAR_6++) {
 FUNC_6("employee");
 FUNC_3("{:first-name} {:last-name} works in dept #{:department/%u}\n",
  VAR_6->e_first, VAR_6->e_last, VAR_6->e_dept);
 FUNC_1();
    }

    FUNC_2();
    FUNC_0();

    FUNC_4();

    return 0;
}
