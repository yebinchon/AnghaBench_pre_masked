
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mode_t ;
struct TYPE_3__ {int m_type; char* m_path; int m_umask; } ;
typedef TYPE_1__ invalid_umask_error_data_t ;
typedef int data ;
typedef int atf_fs_path_t ;
typedef int atf_error_t ;


 int FUNC_0 (char*,TYPE_1__*,int,int ) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static
atf_error_t
FUNC_3(const atf_fs_path_t *VAR_1, const int VAR_2,
                    const mode_t VAR_3)
{
    atf_error_t VAR_4;
    invalid_umask_error_data_t VAR_5;

    VAR_5.m_type = VAR_2;

    FUNC_2(VAR_5.m_path, FUNC_1(VAR_1), sizeof(VAR_5.m_path));
    VAR_5.m_path[sizeof(VAR_5.m_path) - 1] = '\0';

    VAR_5.m_umask = VAR_3;

    VAR_4 = FUNC_0("invalid_umask", &VAR_5, sizeof(VAR_5),
                        VAR_0);

    return VAR_4;
}
