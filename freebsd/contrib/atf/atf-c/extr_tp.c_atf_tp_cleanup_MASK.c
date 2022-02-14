
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_tp_t ;
typedef int atf_tc_t ;
typedef int atf_error_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const*) ;
 int * FUNC_2 (int const*,char const*) ;

atf_error_t
FUNC_3(const atf_tp_t *VAR_0, const char *VAR_1)
{
    const atf_tc_t *VAR_2;

    VAR_2 = FUNC_2(VAR_0, VAR_1);
    FUNC_0(VAR_2 != ((void*)0));

    return FUNC_1(VAR_2);
}
