
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m_data; } ;
typedef TYPE_1__ atf_fs_path_t ;
typedef int atf_error_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static
atf_error_t
FUNC_6(const atf_fs_path_t *VAR_0, char **VAR_1)
{
    atf_error_t VAR_2;
    char *VAR_3;

    VAR_3 = (char *)FUNC_4(FUNC_1(&VAR_0->m_data) + 1);
    if (VAR_3 == ((void*)0))
        VAR_2 = FUNC_3();
    else {
        FUNC_5(VAR_3, FUNC_0(&VAR_0->m_data));
        *VAR_1 = VAR_3;
        VAR_2 = FUNC_2();
    }

    return VAR_2;
}
