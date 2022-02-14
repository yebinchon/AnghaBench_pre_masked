
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_list_t ;
typedef int atf_list_citer_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int const*) ;
 void const* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int const*) ;
 size_t const FUNC_6 (int const*) ;

const void *
FUNC_7(const atf_list_t *VAR_0, const size_t VAR_1)
{
    atf_list_citer_t VAR_2;

    FUNC_0(VAR_1 < FUNC_6(VAR_0));

    VAR_2 = FUNC_2(VAR_0);
    {
        size_t VAR_3 = 0;
        while (VAR_3 < VAR_1 &&
               !FUNC_1((VAR_2),
                                                FUNC_5(VAR_0))) {
            VAR_2 = FUNC_4(VAR_2);
            VAR_3++;
        }
    }
    return FUNC_3(VAR_2);
}
