
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_process_stream_t ;
typedef int atf_fs_path_t ;
typedef int atf_error_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*) ;

__attribute__((used)) static
atf_error_t
FUNC_2(const atf_fs_path_t *VAR_0, atf_process_stream_t *VAR_1)
{
    atf_error_t VAR_2;

    if (VAR_0 == ((void*)0))
        VAR_2 = FUNC_0(VAR_1);
    else
        VAR_2 = FUNC_1(VAR_1, VAR_0);

    return VAR_2;
}
