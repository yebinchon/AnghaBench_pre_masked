
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_process_stream_t ;
typedef int atf_process_status_t ;
typedef int atf_list_t ;
typedef int atf_fs_path_t ;
typedef int atf_error_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int const*,char const**,int const*,int const*,void (*) ()) ;
 scalar_t__ FUNC_3 (int const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (char const**) ;
 int FUNC_5 (int const*,char const***) ;

atf_error_t
FUNC_6(atf_process_status_t *VAR_1,
                      const atf_fs_path_t *VAR_2,
                      const atf_list_t *VAR_3,
                      const atf_process_stream_t *VAR_4,
                      const atf_process_stream_t *VAR_5,
                      void (*VAR_6)(void))
{
    atf_error_t VAR_7;
    const char **VAR_8;

    FUNC_0(VAR_4 == ((void*)0) ||
        FUNC_3(VAR_4) != VAR_0);
    FUNC_0(VAR_5 == ((void*)0) ||
        FUNC_3(VAR_5) != VAR_0);

    VAR_8 = ((void*)0);
    VAR_7 = FUNC_5(VAR_3, &VAR_8);
    if (FUNC_1(VAR_7))
        goto out;

    VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_8, VAR_4, VAR_5, VAR_6);

    FUNC_4(VAR_8);
out:
    return VAR_7;
}
