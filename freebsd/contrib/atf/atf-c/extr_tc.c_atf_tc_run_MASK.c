
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* pimpl; } ;
typedef TYPE_2__ atf_tc_t ;
typedef int atf_error_t ;
typedef int atf_dynstr_t ;
struct TYPE_14__ {scalar_t__ fail_count; scalar_t__ expect_fail_count; } ;
struct TYPE_12__ {int (* m_body ) (TYPE_2__ const*) ;} ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*,TYPE_2__ const*,char const*) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (int *,int *,int ,char*,scalar_t__) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_2__ const*) ;
 int FUNC_7 (TYPE_3__*) ;

atf_error_t
FUNC_8(const atf_tc_t *VAR_2, const char *VAR_3)
{
    FUNC_1(&VAR_0, VAR_2, VAR_3);

    VAR_2->pimpl->m_body(VAR_2);

    FUNC_7(&VAR_0);

    if (VAR_0.fail_count > 0) {
        atf_dynstr_t VAR_4;

        FUNC_4(&VAR_4, ((void*)0), 0, "%d checks failed; see output for "
            "more details", VAR_0.fail_count);
        FUNC_3(&VAR_0, &VAR_4);
    } else if (VAR_0.expect_fail_count > 0) {
        atf_dynstr_t VAR_5;

        FUNC_4(&VAR_5, ((void*)0), 0, "%d checks failed as expected; "
            "see output for more details", VAR_0.expect_fail_count);
        FUNC_2(&VAR_0, &VAR_5);
    } else {
        FUNC_5(&VAR_0);
    }
    VAR_1;
    return FUNC_0();
}
