
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pimpl; } ;
typedef TYPE_2__ atf_tc_t ;
struct TYPE_4__ {char const* m_ident; } ;



const char *
FUNC_0(const atf_tc_t *VAR_0)
{
    return VAR_0->pimpl->m_ident;
}
