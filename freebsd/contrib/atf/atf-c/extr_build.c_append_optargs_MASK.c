
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_list_t ;
typedef int atf_error_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char const* const) ;

__attribute__((used)) static
atf_error_t
FUNC_4(const char *const VAR_0[], atf_list_t *VAR_1)
{
    atf_error_t VAR_2;

    VAR_2 = FUNC_2();
    while (*VAR_0 != ((void*)0) && !FUNC_1(VAR_2)) {
        VAR_2 = FUNC_0(FUNC_3(*VAR_0), VAR_1);
        VAR_0++;
    }

    return VAR_2;
}
