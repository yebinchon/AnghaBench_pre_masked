
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exec_args {char const* const* member_1; void (* member_2 ) () ;int const* member_0; } ;
typedef int atf_process_stream_t ;
typedef int atf_process_status_t ;
typedef int atf_process_child_t ;
typedef int atf_fs_path_t ;
typedef int atf_error_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ,int const*,int const*,struct exec_args*) ;
 scalar_t__ FUNC_8 (int const*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

atf_error_t
FUNC_9(atf_process_status_t *VAR_3,
                       const atf_fs_path_t *VAR_4,
                       const char *const *VAR_5,
                       const atf_process_stream_t *VAR_6,
                       const atf_process_stream_t *VAR_7,
                       void (*VAR_8)(void))
{
    atf_error_t VAR_9;
    atf_process_child_t VAR_10;
    struct exec_args VAR_11 = { VAR_4, VAR_5, VAR_8 };

    FUNC_1(VAR_6 == ((void*)0) ||
        FUNC_8(VAR_6) != VAR_1);
    FUNC_1(VAR_7 == ((void*)0) ||
        FUNC_8(VAR_7) != VAR_1);

    VAR_9 = FUNC_7(&VAR_10, VAR_2, VAR_6, VAR_7, &VAR_11);
    if (FUNC_4(VAR_9))
        goto out;

again:
    VAR_9 = FUNC_6(&VAR_10, VAR_3);
    if (FUNC_4(VAR_9)) {
        FUNC_0(FUNC_3(VAR_9, "libc") && FUNC_5(VAR_9) == VAR_0);
        FUNC_2(VAR_9);
        goto again;
    }

out:
    return VAR_9;
}
