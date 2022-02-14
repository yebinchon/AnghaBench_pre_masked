
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_process_stream_t ;
typedef int atf_fs_path_t ;
typedef int atf_error_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const*,int *) ;

__attribute__((used)) static
atf_error_t
FUNC_3(const atf_fs_path_t *VAR_0, atf_process_stream_t *VAR_1,
         const atf_fs_path_t *VAR_2, atf_process_stream_t *VAR_3)
{
    atf_error_t VAR_4;

    VAR_4 = FUNC_2(VAR_0, VAR_1);
    if (FUNC_0(VAR_4))
        goto out;

    VAR_4 = FUNC_2(VAR_2, VAR_3);
    if (FUNC_0(VAR_4)) {
        FUNC_1(VAR_1);
        goto out;
    }

out:
    return VAR_4;
}
