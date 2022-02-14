
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_process_status_t ;
typedef int atf_error_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const* const*,int *,int *,int *) ;
 int FUNC_4 (char const* const*,char*) ;
 int FUNC_5 (char const* const,int *,int*) ;

__attribute__((used)) static
atf_error_t
FUNC_6(const char *const *VAR_0, bool *VAR_1)
{
    atf_error_t VAR_2;
    atf_process_status_t VAR_3;

    FUNC_4(VAR_0, ">");

    VAR_2 = FUNC_3(VAR_0, ((void*)0), ((void*)0), &VAR_3);
    if (FUNC_1(VAR_2))
        goto out;

    FUNC_5(VAR_0[0], &VAR_3, VAR_1);
    FUNC_2(&VAR_3);

    FUNC_0(!FUNC_1(VAR_2));
out:
    return VAR_2;
}
