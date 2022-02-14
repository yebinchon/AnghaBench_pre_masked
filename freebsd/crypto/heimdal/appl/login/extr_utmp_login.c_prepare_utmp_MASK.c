
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utmp {int ut_id; int ut_pid; int ut_type; int ut_host; int ut_addr; int ut_user; int ut_name; int ut_line; int ut_time; } ;
struct hostent {int * h_addr_list; } ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 struct hostent* FUNC_1 (char const*) ;
 int FUNC_2 () ;
 char const* FUNC_3 (char*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct utmp*,int ,int) ;
 int FUNC_6 (char const*,int ,int) ;
 int FUNC_7 (int ,char const*,int) ;
 int FUNC_8 (int *) ;

void
FUNC_9 (struct utmp *VAR_1, char *VAR_2,
       const char *VAR_3, const char *VAR_4)
{
    char *VAR_5 = FUNC_0 (VAR_2);

    FUNC_5(VAR_1, 0, sizeof(*VAR_1));
    VAR_1->ut_time = FUNC_8(((void*)0));
    FUNC_7(VAR_1->ut_line, VAR_5, sizeof(VAR_1->ut_line));
    FUNC_7(VAR_1->ut_name, VAR_3, sizeof(VAR_1->ut_name));
}
