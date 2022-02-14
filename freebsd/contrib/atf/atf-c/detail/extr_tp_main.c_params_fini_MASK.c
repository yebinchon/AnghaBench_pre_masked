
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int * m_tcname; int m_srcdir; int m_resfile; int m_config; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static
void
FUNC_3(struct params *VAR_0)
{
    FUNC_1(&VAR_0->m_config);
    FUNC_0(&VAR_0->m_resfile);
    FUNC_0(&VAR_0->m_srcdir);
    if (VAR_0->m_tcname != ((void*)0))
        FUNC_2(VAR_0->m_tcname);
}
