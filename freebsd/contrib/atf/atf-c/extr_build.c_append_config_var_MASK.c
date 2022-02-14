
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_list_t ;
typedef int atf_error_t ;


 int FUNC_0 (char const*,char const*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,char*,int *) ;

__attribute__((used)) static
atf_error_t
FUNC_4(const char *VAR_0, const char *VAR_1, atf_list_t *VAR_2)
{
    atf_error_t VAR_3;
    atf_list_t VAR_4;

    VAR_3 = FUNC_3(FUNC_0(VAR_0, VAR_1),
                         " ", &VAR_4);
    if (FUNC_1(VAR_3))
        goto out;

    FUNC_2(VAR_2, &VAR_4);

out:
    return VAR_3;
}
