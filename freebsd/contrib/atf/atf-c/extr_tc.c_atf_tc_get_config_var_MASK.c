
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pimpl; } ;
typedef TYPE_2__ atf_tc_t ;
typedef int atf_map_citer_t ;
struct TYPE_5__ {int m_config; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (TYPE_2__ const*,char const*) ;

const char *
FUNC_5(const atf_tc_t *VAR_0, const char *VAR_1)
{
    const char *VAR_2;
    atf_map_citer_t VAR_3;

    FUNC_1(FUNC_4(VAR_0, VAR_1));
    VAR_3 = FUNC_3(&VAR_0->pimpl->m_config, VAR_1);
    VAR_2 = FUNC_2(VAR_3);
    FUNC_0(VAR_2 != ((void*)0));

    return VAR_2;
}
