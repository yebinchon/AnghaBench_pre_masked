
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exec_data {char** m_argv; } ;


 int FUNC_0 (char*,char**) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*,char*) ;
 int VAR_1 ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static
void
FUNC_4(void *VAR_2)
{
    struct exec_data *VAR_3 = VAR_2;

    FUNC_0(VAR_3->m_argv[0], VAR_3->m_argv);
    FUNC_2(VAR_1, "execvp(%s) failed: %s\n", VAR_3->m_argv[0], FUNC_3(VAR_0));
    FUNC_1(127);
}
