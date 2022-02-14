
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exec_args {int m_prog; int m_argv; int (* m_prehook ) () ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,char*,char*) ;
 int VAR_2 ;
 char* FUNC_5 (int const) ;
 int FUNC_6 () ;

__attribute__((used)) static
void
FUNC_7(void *VAR_3)
{
    struct exec_args *VAR_4 = VAR_3;

    if (VAR_4->m_prehook != ((void*)0))
        VAR_4->m_prehook();

    const int VAR_5 = FUNC_2(FUNC_1(VAR_4->m_prog), VAR_4->m_argv);
    const int VAR_6 = VAR_1;
    FUNC_0(VAR_5 == -1);
    FUNC_4(VAR_2, "exec(%s) failed: %s\n",
            FUNC_1(VAR_4->m_prog), FUNC_5(VAR_6));
    FUNC_3(VAR_0);
}
