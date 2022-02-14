
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_process_stream_t ;
typedef int atf_process_child_t ;
typedef int atf_error_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,void (*) (void*),int const*,int const*,void*) ;
 int FUNC_3 (int const*,int *,int const**) ;

atf_error_t
FUNC_4(atf_process_child_t *VAR_0,
                 void (*VAR_1)(void *),
                 const atf_process_stream_t *VAR_2,
                 const atf_process_stream_t *VAR_3,
                 void *VAR_4)
{
    atf_error_t VAR_5;
    atf_process_stream_t VAR_6, VAR_7;
    const atf_process_stream_t *VAR_8, *VAR_9;

    VAR_8 = ((void*)0);
    VAR_5 = FUNC_3(VAR_2, &VAR_6, &VAR_8);
    if (FUNC_0(VAR_5))
        goto out;

    VAR_9 = ((void*)0);
    VAR_5 = FUNC_3(VAR_3, &VAR_7, &VAR_9);
    if (FUNC_0(VAR_5))
        goto out_out;

    VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_8, VAR_9, VAR_4);

    if (VAR_3 == ((void*)0))
        FUNC_1(&VAR_7);
out_out:
    if (VAR_2 == ((void*)0))
        FUNC_1(&VAR_6);
out:
    return VAR_5;
}
