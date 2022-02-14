
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,char**) ;
 int FUNC_9 (int *,int ,int ) ;

int
FUNC_10 (int VAR_2, char **VAR_3)
{
    struct employee {
 const char *e_first;
 const char *e_last;
 unsigned e_dept;
    } VAR_4[] = {
 { "Terry", "Jones", 660 },
 { "Leslie", "Patterson", 341 },
 { "Ashley", "Smith", 1440 },
 { ((void*)0), ((void*)0) }
    }, *VAR_5 = VAR_4;

    VAR_2 = FUNC_8(VAR_2, VAR_3);
    if (VAR_2 < 0)
 return 1;

    FUNC_9(((void*)0), VAR_0, VAR_1);

    FUNC_5("employees");
    FUNC_7("employee");

    FUNC_3("{T:Last Name/%-12s}{T:First Name/%-14s}{T:Department/%s}\n");
    for ( ; VAR_5->e_first; VAR_5++) {
 FUNC_6("employee");
 FUNC_3("{:first-name/%-12s/%s}{:last-name/%-14s/%s}"
  "{:department/%8u/%u}\n",
  VAR_5->e_first, VAR_5->e_last, VAR_5->e_dept);
 FUNC_1("employee");
    }

    FUNC_2("employee");
    FUNC_0("employees");

    FUNC_4();

    return 0;
}
