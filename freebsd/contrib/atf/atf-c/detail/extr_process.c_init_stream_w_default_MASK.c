
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_process_stream_t ;
typedef int atf_error_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;

__attribute__((used)) static
atf_error_t
FUNC_3(const atf_process_stream_t *VAR_0,
                      atf_process_stream_t *VAR_1,
                      const atf_process_stream_t **VAR_2)
{
    atf_error_t VAR_3;

    if (VAR_0 == ((void*)0)) {
        VAR_3 = FUNC_2(VAR_1);
        if (!FUNC_0(VAR_3))
            *VAR_2 = VAR_1;
    } else {
        VAR_3 = FUNC_1();
        *VAR_2 = VAR_0;
    }

    return VAR_3;
}
