
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int m_do_list; int m_srcdir; int m_resfile; int m_config; int m_tcpart; int * m_tcname; } ;
typedef int atf_error_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static
atf_error_t
FUNC_5(struct params *VAR_1, const char *VAR_2)
{
    atf_error_t VAR_3;

    VAR_1->m_do_list = 0;
    VAR_1->m_tcname = ((void*)0);
    VAR_1->m_tcpart = VAR_0;

    VAR_3 = FUNC_0(VAR_2, &VAR_1->m_srcdir);
    if (FUNC_3(VAR_3))
        return VAR_3;

    VAR_3 = FUNC_2(&VAR_1->m_resfile, "/dev/stdout");
    if (FUNC_3(VAR_3)) {
        FUNC_1(&VAR_1->m_srcdir);
        return VAR_3;
    }

    VAR_3 = FUNC_4(&VAR_1->m_config);
    if (FUNC_3(VAR_3)) {
        FUNC_1(&VAR_1->m_resfile);
        FUNC_1(&VAR_1->m_srcdir);
        return VAR_3;
    }

    return VAR_3;
}
