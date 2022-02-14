
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exec_data {char const* const* member_0; } ;
typedef int atf_process_stream_t ;
typedef int atf_process_status_t ;
typedef int atf_process_child_t ;
typedef int atf_fs_path_t ;
typedef int atf_error_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int *,int *,struct exec_data*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int const*,int *,int const*,int *) ;

__attribute__((used)) static
atf_error_t
FUNC_5(const char *const *VAR_1, const atf_fs_path_t *VAR_2,
              const atf_fs_path_t *VAR_3, atf_process_status_t *VAR_4)
{
    atf_error_t VAR_5;
    atf_process_child_t VAR_6;
    atf_process_stream_t VAR_7, VAR_8;
    struct exec_data VAR_9 = { VAR_1 };

    VAR_5 = FUNC_4(VAR_2, &VAR_7, VAR_3, &VAR_8);
    if (FUNC_0(VAR_5))
        goto out;

    VAR_5 = FUNC_2(&VAR_6, VAR_0, &VAR_7, &VAR_8, &VAR_9);
    if (FUNC_0(VAR_5))
        goto out_sbs;

    VAR_5 = FUNC_1(&VAR_6, VAR_4);

out_sbs:
    FUNC_3(&VAR_8);
    FUNC_3(&VAR_7);
out:
    return VAR_5;
}
