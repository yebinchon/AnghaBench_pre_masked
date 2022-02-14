
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_list_t ;
typedef int atf_error_t ;


 int FUNC_0 (char const*,int *) ;
 int FUNC_1 (char*,char const*,int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static
atf_error_t
FUNC_3(const char *VAR_0, const char *VAR_1, atf_list_t *VAR_2)
{
    atf_error_t VAR_3;

    VAR_3 = FUNC_1("-o", VAR_1, VAR_2);
    if (FUNC_2(VAR_3))
        goto out;

    VAR_3 = FUNC_0("-c", VAR_2);
    if (FUNC_2(VAR_3))
        goto out;

    VAR_3 = FUNC_0(VAR_0, VAR_2);

out:
    return VAR_3;
}
