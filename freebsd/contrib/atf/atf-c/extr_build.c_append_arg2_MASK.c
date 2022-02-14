
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_list_t ;
typedef int atf_error_t ;


 int FUNC_0 (char const*,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static
atf_error_t
FUNC_2(const char *VAR_0, const char *VAR_1, atf_list_t *VAR_2)
{
    atf_error_t VAR_3;

    VAR_3 = FUNC_0(VAR_0, VAR_2);
    if (!FUNC_1(VAR_3))
        VAR_3 = FUNC_0(VAR_1, VAR_2);

    return VAR_3;
}
