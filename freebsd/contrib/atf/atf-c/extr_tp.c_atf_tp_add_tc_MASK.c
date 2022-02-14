
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pimpl; } ;
typedef TYPE_2__ atf_tp_t ;
typedef int atf_tc_t ;
typedef int atf_error_t ;
struct TYPE_5__ {int m_tcs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_2__*,int ) ;

atf_error_t
FUNC_5(atf_tp_t *VAR_0, atf_tc_t *VAR_1)
{
    atf_error_t VAR_2;

    FUNC_1(FUNC_4(VAR_0, FUNC_3(VAR_1)) == ((void*)0));

    VAR_2 = FUNC_2(&VAR_0->pimpl->m_tcs, VAR_1, 0);

    FUNC_0(FUNC_4(VAR_0, FUNC_3(VAR_1)) != ((void*)0));

    return VAR_2;
}
