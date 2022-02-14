
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pimpl; } ;
typedef TYPE_2__ atf_tc_t ;
typedef int atf_error_t ;
struct TYPE_5__ {int (* m_cleanup ) (TYPE_2__ const*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__ const*) ;

atf_error_t
FUNC_2(const atf_tc_t *VAR_0)
{
    if (VAR_0->pimpl->m_cleanup != ((void*)0))
        VAR_0->pimpl->m_cleanup(VAR_0);
    return FUNC_0();
}
