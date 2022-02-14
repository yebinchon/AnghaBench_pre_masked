
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m_data; } ;
typedef TYPE_1__ atf_fs_path_t ;
typedef int atf_error_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,char const*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char const*) ;

__attribute__((used)) static
void
FUNC_7(atf_fs_path_t *VAR_0, const char *VAR_1)
{
    atf_error_t VAR_2;

    FUNC_1(FUNC_4(&VAR_0->m_data) == FUNC_6(VAR_1));

    FUNC_3(&VAR_0->m_data);
    VAR_2 = FUNC_2(&VAR_0->m_data, "%s", VAR_1);

    FUNC_0(!FUNC_5(VAR_2));
}
