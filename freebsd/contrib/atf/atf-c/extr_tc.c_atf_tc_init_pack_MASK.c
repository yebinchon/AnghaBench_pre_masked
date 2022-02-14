
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int atf_tc_t ;
struct TYPE_3__ {int m_cleanup; int m_body; int m_head; int m_ident; } ;
typedef TYPE_1__ atf_tc_pack_t ;
typedef int atf_error_t ;


 int FUNC_0 (int *,int ,int ,int ,int ,char const* const*) ;

atf_error_t
FUNC_1(atf_tc_t *VAR_0, const atf_tc_pack_t *VAR_1,
                 const char *const *VAR_2)
{
    return FUNC_0(VAR_0, VAR_1->m_ident, VAR_1->m_head, VAR_1->m_body,
                       VAR_1->m_cleanup, VAR_2);
}
