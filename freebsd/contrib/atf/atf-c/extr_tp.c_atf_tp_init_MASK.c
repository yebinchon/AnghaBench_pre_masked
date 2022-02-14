
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct atf_tp_impl {int dummy; } ;
struct TYPE_4__ {TYPE_2__* pimpl; } ;
typedef TYPE_1__ atf_tp_t ;
typedef int atf_error_t ;
struct TYPE_5__ {int m_tcs; int m_config; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char const* const*) ;
 int FUNC_6 () ;
 TYPE_2__* FUNC_7 (int) ;

atf_error_t
FUNC_8(atf_tp_t *VAR_0, const char *const *VAR_1)
{
    atf_error_t VAR_2;

    FUNC_1(VAR_1 != ((void*)0));

    VAR_0->pimpl = FUNC_7(sizeof(struct atf_tp_impl));
    if (VAR_0->pimpl == ((void*)0))
        return FUNC_6();

    VAR_2 = FUNC_4(&VAR_0->pimpl->m_tcs);
    if (FUNC_2(VAR_2))
        goto out;

    VAR_2 = FUNC_5(&VAR_0->pimpl->m_config, VAR_1);
    if (FUNC_2(VAR_2)) {
        FUNC_3(&VAR_0->pimpl->m_tcs);
        goto out;
    }

    FUNC_0(!FUNC_2(VAR_2));
out:
    return VAR_2;
}
